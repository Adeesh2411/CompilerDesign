	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>
	#include<stdbool.h>
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
    char exprToken[100];

    extern bool exprFlag;
    extern int exprCount;

    
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
	   
	   
	bool funcFlag = false;
    int funcCount = 0;
    bool loopFlag = false;

	struct dtemp{
	    char name[20];
	}dtemparr[100];
	
	int k=0;
	FILE* yyout;
	FILE* yyin;
	FILE *tempFile;
	FILE *treeFile;
	char tempArr[100];
	char tempArr1[100];
	char tempArr2[100];
	char tempArr3[100];
	
	//for tree
    int expCount = 0;
	int childLevel = 100;
	bool checkTree[2000];
	
	char* Stack[100];
	int stI = 0;
	int interNo = 0;
	
	typedef struct node{
	    char parent[20];
	    char name[20];
	    struct node *childArrLink[20];
	    int nLink;
	    int temp;
	    int level;
	    bool isT;
        struct node *prev, *next, *newLink;

	}node;

    typedef struct List{
        node *head;
        node *tail;
    }list,listFunc[10], listLoop[10];

    int lf = 0,ll=0;

	int tl=0;
	node* treeLink[2000];
	int ScopeLevel = 0;
	
	
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
	//void insertNode(char *, char*, char *,char*,char*,bool); //for inserting node to a tree
	void CreateNode(char *, char*, int);    //Creating the node of given name, parent name
	node *getParent(char *name, int index); //getNode of given name
	void CreateTree();  //for Creating tree using the linkArr
	void Inorder(node *, int level); // inorder traversal of tree
	char *cat(char*, int); // concat two strings
	void AssignLink(int pNo); //
	void CreateExprNode(char*, char*);// 
	void AssignLinkRev(int);//
	void generateCode(int, char*, char*, char*);//
	void addLevelNo();//
