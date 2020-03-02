	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>
	#include "y.tab.h"
	extern int semiFlag;
	void yy_flush_buffer();
    int yyerror(char *s);
    int yyclearin(char *s);

    int yylex(void);    
    char *yytext;
    extern double TOKEN;
    extern int lineNo;
    //used for maintaining scope level
    extern int Bscope;
    extern int scope;
    int Gscope = 0;
    
    extern char *Err;
    int typeValue; // 1 = int, 2 = float, 3 = double, 4 = char
    
    
    char curToken[100];
    char prevToken[100];
    
    int comaflag = 0;
    int ck =0;
    int defineflag = 1; //flag to check variable declarations, 1 => defined and 0 => not defined
    
    //variables used for checking type for exp like => int x=y;
    double Dvalue;
    struct tableTemp{
        double Dvalue;
        int Ivalue;
    }tempV;
    // Symbol table
	struct table
	{
		char name[20];
		char type[20];
		char value[20]; //for function name
		int lineNO;
		
		//for scope matching..
		int scope;
		int Bscope;
		int Gscope;
	}arr[100];
	
	
	
	struct temporary{
	    char type[20];
	    char name[20];
	    char value[20];
	   int Cflag;
	    int dflag;
	 }T,Tarr[20];
	   
	   
	   
	struct dtemp{
	    char name[20];
	}dtemparr[100];
	
	int k=0;
	FILE* yyout;
	FILE* yyin;
	FILE *tempFile;
	FILE *treeFile;
	char tempArr[100];
	
	//for tree
	int np = 0;
	int fnp=0;
	int tk=0;
	struct Tree{
	    char Parent[30];
	    char child[30];
	}treeArr[200];
	
	
	//function declarations used
	void displayTable();  //for displaying symbol table..
	void insert(char *type, char* name, char *value,int flag ); //for inserting into the symbol table
	int checkType(char *type, char* value); //to check the type with value
	int checkTableToInsert(char *name); // to check whether an id is present in table or not
	int checkTableToAccess(char *name); // to access the value
	void displayTable(); //to display the symbol table
	char *getValue(char *rhs);  //to get the value of the variable
	char* operate(char *s1, char* s2, int val); //function to evaluate arithmetic operation
	void update(char *name, char* val); // to update the current value of name with value
	char *correct(char *val, char *type); //to correct the number of perticular type
	void displayTree(); // for printing AST
	char* intToStr(char* s, int n); //for AST same name
	
