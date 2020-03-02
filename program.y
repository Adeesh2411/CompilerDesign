%{
    #include "programServer.c"

%}
%union{
	char* txt;
}

%token<txt> IDE NUM HEADER REAL CHARVALUE
%token<txt> CHAR INT FLOAT DOUBLE VOID RETURN
%token<txt> EQ LE GE AND OR XOR ASSIGN L G NEQ
%token<txt> IF ELSE SWITCH BREAK WHILE CASE DEFAULT FOR 
%token<txt> ADD SUB MUL DIV INC DEC
%token<txt> SEMICOLON COMMA 
%token<txt> OP CP OB CB LOR LAND
%type<txt> exp exp1 lhs exp2 condExp
%type<txt> type assignList variable
%start program



%%
program : header  nextPart{
             strcpy(treeArr[tk++].Parent,"Start");
             strcpy(treeArr[tk-1].child, "header");
             strcpy(treeArr[tk++].Parent,"Start");
             strcpy(treeArr[tk-1].child, "nextPart");

             printf("\nDone\n");
             displayTable();
             displayTree();             
         };
             


header : HEADER 
        {
            strcpy(treeArr[tk++].Parent,"header");
            strcpy(treeArr[tk-1].child, $1);
        }
        |HEADER header 
        {
            strcpy(treeArr[tk++].Parent,"header");
            strcpy(treeArr[tk-1].child, $1);
        }
       ;
       
       
       
nextPart 
    :declaration  nextPart 
    {        
        strcpy(treeArr[tk++].Parent,"nextPart");
        strcpy(treeArr[tk-1].child, "declarations");
        strcpy(treeArr[tk++].Parent,"nextPart"); 
        strcpy(treeArr[tk-1].child, "nextPart"); 
    }
    |function nextPart
    {
        strcpy(treeArr[tk++].Parent,"nextPart");
        strcpy(treeArr[tk-1].child, "declarations");
    }
    |
    ;


    
declaration 
    :type assignList SEMICOLON{
        
            if(!comaflag){
                if(T.dflag == 4){
                    insert($1, T.name, "--",1);
                }
            
                else if(checkType($1, T.value)){
                    insert($1, T.name, correct(T.value,$1), 1);
                }
                
                else if(checkTableToAccess(T.value)){  
                                 
                    insert($1,T.name,getValue(T.value), 1);
                }
                  
                else{
                    printf("undefined %s assigned in line No %d\nline => %s\n",T.value,lineNo,prevToken);
                }
            }
            else{
                for(int i=0;i<ck;i++){
                    if(checkType($1, Tarr[i].value)){
                        insert($1,Tarr[i].name, Tarr[i].value, 1);
                    }
                }
                if(checkType($1, T.value)){
                    insert($1, T.name, T.value, 1);
                    ck=0;comaflag=0;
                }
                else if(checkTableToAccess(T.value)){
                    insert($1,T.name,getValue(T.value), 1);
                    ck=0;comaflag=0;
                }          
            }
    strcpy(treeArr[tk++].Parent,"declarations");
    strcpy(treeArr[tk-1].child, "int x=0;");
    strcpy(treeArr[tk++].Parent,"declarations");
    strcpy(treeArr[tk-1].child, $2);
    }
    
    | variable ASSIGN exp SEMICOLON
    {
        if(!checkTableToAccess($1)){
            printf("ERROR : Undclared Type \'%s\' in Line No %d\n",$1, lineNo);
        }
        else{
            insert("", $1, $3, 2); // flag 2 for updating variable.
        }
    } 
    
    
    |error SEMICOLON {strcpy(prevToken, curToken); strcpy(curToken, "");}
    
    ;

assignList
	: variable ASSIGN exp { 
	    if(!comaflag){
      	    strcpy(T.name,$1);
	        strcpy(T.value,$3);
	        T.dflag=2;
	        
	    }
	    else{
	        strcpy(Tarr[ck++].name , $1);
	        strcpy(Tarr[ck-1].value, $3);
	        Tarr[ck-1].dflag = 2;
	    }   
	    
	}
	| variable COMMA assignList
	{
	    comaflag = 1;   
	    strcpy(Tarr[ck++].name,$1);
	    Tarr[ck-1].dflag = 1;
	    
	}
	|variable ASSIGN exp COMMA assignList{
	    comaflag = 1;
	    strcpy(Tarr[ck++].name,$1);
	    strcpy(Tarr[ck-1].value, $3);
	    Tarr[ck-1].dflag = 1;
	}
	
	| variable {
	    if(!comaflag){
    	    strcpy(T.name , $1);
	        T.dflag = 4;
	    }
	    else{
	        strcpy(Tarr[ck++].name ,$1);
	        Tarr[ck-1].dflag = 4;
	    }    
	    }
	
	;
	

type
    :INT {typeValue = 1; }
    |CHAR { typeValue = 4;}
    |DOUBLE { typeValue = 3;}
    |FLOAT { typeValue = 2;}
    ;
variable   
    :IDE
    ;
    
lhs 
    :variable {
        if(!checkTableToAccess($1)){
            printf("ERROR : variable \'%s\' not defined in lineNo %d\n",$1,lineNo);
            defineflag = 0;
        }
        else{
            defineflag=1;
            strcpy($$, getValue($1));
        }
    } 
    |REAL
    |CHARVALUE
    |NUM {$$ = $1;}
    ;
    
exp 
    :exp ADD exp1 {
         $$ = operate($1, $3, 1);
        
    }
    |exp SUB exp1 {
        {
            $$ = operate($1, $3, 2);
        }
    }
    |exp1  {
        strcpy($$, $1);
    }
    ;
    
exp1
    :exp1 MUL exp2 {  $$ = operate($1, $3, 3);  }
    |exp1 DIV exp2 { $$ = operate($1, $3, 4);}
    |lhs { 
        strcpy($$,$1);
    }
    
    |OP exp CP {
        
        strcpy($$, $2);
    }
    ;
    
exp2
    :lhs {strcpy($$, $1);}
    | OP exp CP {strcpy($$,$2);}
    ;

function
    :type variable OP funcPara CP OB stateTemp returnFunc CB 
    {
        insert($1,$2,"--",3 );
    }

returnFunc
    :RETURN lhs SEMICOLON
    |
    ;

funcPara
    :type variable ASSIGN lhs
    |type variable
    |nextPara
    |
    ;
nextPara
    :type variable ASSIGN lhs COMMA funcPara
    |type variable COMMA funcPara
    ;

stateTemp
    :statements
    |
    ;    
statements
    :declaration stateTemp
    |forExp stateTemp
    |whileExp stateTemp
    |ifElse stateTemp
    ;

condExp
    :exp AND exp
    |exp LAND exp
    |exp OR exp
    |exp LOR exp
    |exp LE exp
    |exp GE exp
    |exp L exp
    |exp G exp
    |exp INC
    |exp DEC
    |INC exp
    |DEC exp
    |exp XOR exp
    |exp EQ exp 
    |exp NEQ exp
    |exp ASSIGN exp
    |type variable ASSIGN exp 
    {
        insert($1, $2, $4, 4);
    }
    
    ;
//for loop ... 
forExp
    :FOR OP for1 SEMICOLON for2 SEMICOLON for3 CP OB stateTemp CB
    ;

for1
    :type variable ASSIGN lhs COMMA for1
    {
        insert($1, $2, $4, 4);
    }
    | type variable ASSIGN lhs
    {
         insert($1, $2, $4, 4);
    }
    |variable ASSIGN lhs COMMA for1
    {
        if(checkTableToAccess($1)){}
        else
            printf("ERROR : undefined variable \'%s\' in line No %d\n",$1, lineNo);
    }
    |variable ASSIGN lhs
    {
        if(checkTableToAccess($1)){}
        else
            printf("ERROR : undefined variable \'%s\' in line No %d\n",$1, lineNo);
    }
    |
    ;

for2
    :
    condExp
    |
    ;
for3
    :condExp
    |
    ;
    
//while loop .. 
whileExp
    :WHILE OP condExp CP OB stateTemp CB
    ;

ifElse
    :IF OP condExp CP OB stateTemp CB
    |IF OP condExp CP OB stateTemp CB ELSE ifElse
    |OB stateTemp CB
    ;

%%



int main() 
{  
    yyin = fopen("program.c", "r");
    yyout = fopen("out.txt","w"); //for SymbolTable
    tempFile = fopen("token.txt","w");
    treeFile = fopen("tree.txt","w");
    
	yyparse(); 

	fclose(yyout);
	fclose(yyin);
	
	return 0;
} 

