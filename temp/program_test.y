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
%type<txt> exp exp1 lhs exp2 condExp condExp1
%type<txt> type assignList variable funcVariable ForName
%start program

%%
program : header  nextPart{
            CreateNode("Start", "nextPart", 2);
            CreateNode("Start", "header", 2);
            
            CreateNode("--", "Start", 2);
             
             displayTable();
             
             CreateTree();
             
             Inorder(treeLink[tl-1],0);
             
             addLevelNo();
             printf("\n\n");
             displayTree();             
         };

header : HEADER 
        {
            CreateNode("header", $1, 1);
        }
        |HEADER header 
        {
            CreateNode("header", $1, 2);
            CreateNode("header","header",2);
        }
       ;
       
       
       
nextPart 
    : declaration  nextPart 
    {
        CreateNode("nextPart","declaration",2);
        CreateNode("nextPart", "nextPart", 2);       
    }
    |function nextPart
    {
        CreateNode("nextPart", "function", 4);
        CreateNode("nextPart", "nextPart", 2);

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
                //
                strcpy(tempArr, "declaration");
                
                CreateNode(tempArr, "AssignList", 3);
                CreateNode(tempArr, $1, 0);
                
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
	    
        //
        
        CreateExprNode(strtok(exprToken,"!"), $3);
        CreateNode("AssignList",$3,exprCount);
        CreateNode("AssignList", "=", 0);
        CreateNode("AssignList",$1,0);
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
	

//

    
declarationLoop 
    :type assignListLoop SEMICOLON{
        
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
                //
                //strcpy(tempArr, "declarationLoop");
               // printf("%s\n",cat("declarationLoop",loopval));
                CreateNode(cat("declarationLoop",loopval), cat1("AssignListLoop", loopval), 3);
                CreateNode(cat("declarationLoop",loopval), $1, 0);
                
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

assignListLoop
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
	    
        //
        
        CreateExprNode(strtok(exprToken,"!"), $3);
        CreateNode(cat1("AssignListLoop", loopval),$3,exprCount);
        CreateNode(cat1("AssignListLoop", loopval), "=", 0);
        CreateNode(cat1("AssignListLoop", loopval),$1,0);
	}
	| variable COMMA assignListLoop
	{
	    comaflag = 1;   
	    strcpy(Tarr[ck++].name,$1);
	    Tarr[ck-1].dflag = 1;
	    
	}
	|variable ASSIGN exp COMMA assignListLoop{
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
	
//




type
    :INT 
    |CHAR { }
    |DOUBLE 
    |FLOAT 
    ;
variable   
    :IDE{
        
    }
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
         //generateCode(interNo, $1, $2, $3);
       
    }
    |exp SUB exp1 {
       $$ = operate($1, $3, 2);
      // generateCode(interNo, $1, $2, $3);
    }
    |exp1  {
        strcpy($$, $1);
       // generateCode(interNo, $1, $2, $3);
    }
    ;
    
exp1
    :exp1 MUL exp2 {
       $$ = operate($1, $3, 3);  
    }
    |exp1 DIV exp2 {
       $$ = operate($1, $3, 4);
    }
    |lhs {
       
        strcpy($$,$1);
    }
    
    |OP exp CP {
       
        strcpy($$, $2);
    }
    ;
    
exp2
    :lhs {
       
        strcpy($$, $1);
        
    }
    | OP exp CP {
       
        strcpy($$,$2);
        
    }
    ;

function
    :type funcVariable OP funcPara CP OB stateTemp returnFunc CB 
    {
        
        insert($1,$2,"--",3 );
        CreateNode("function","Statement", 2);
        CreateNode("function", "funcPara", 4);
        CreateNode("function", $2, 0);
        CreateNode("function", $1,0);
        funcFlag = false;
       
    }

funcVariable
    :IDE{funcFlag = true;
        
    }
    ;
returnFunc
    :RETURN lhs SEMICOLON
    |
    ;

funcPara
    :type variable ASSIGN lhs{
        CreateNode("funcPara",$4,0);
        CreateNode("funcPara","=",0);
        CreateNode("funcPara", $2, 0);
        CreateNode("funcPara", $1, 0);
    } 
    |type variable {
        CreateNode("funcPara",$2,0);
        CreateNode("funcPara", $1, 0);
    }
    |nextPara{
        CreateNode("funcPara","nextPara",6);
    }
    |
    ;
nextPara
    :type variable ASSIGN lhs COMMA funcPara{
        CreateNode("nextPara","funcPara",3);
        CreateNode("nextPara", ",", 0);
        CreateNode("nextPara", $4,0);
        CreateNode("nextPara", "=",0);
        CreateNode("nextPara",$2, 0);
        CreateNode("nextPara", $1, 0);
    }
    |type variable COMMA funcPara{
        CreateNode("nextPara","funcPara",3);
        CreateNode("nextPara", ",", 0);
        CreateNode("nextPara",$2, 0);
        CreateNode("nextPara", $1, 0);
    }
    ;

stateTemp
    :statements{
        
    }
    |
    ;    
statements
    :declaration stateTemp
    {
        CreateNode("Statement", "Statement", 2);
        CreateNode("Statement", "declaration", 2);
        
    }
    |forExp stateTemp
    {
        CreateNode("Statement", "Statement", 2);
        CreateNode("Statement", "forExp", 5);
    }
    |whileExp stateTemp
    {
        CreateNode("Statement", "Statement", 2);
        CreateNode("Statement", "whileExp", 5);
    }
    |ifElse stateTemp
    {
        CreateNode("Statement", "Statement", 2);
        CreateNode("Statement", "ifElse", 7);
    }
    ;

loopStatement
    :declarationLoop loopStatement{
        
        strcpy(tempArr2, cat1("declarationLoop",loopval));
        
        CreateNode(cat("LoopStatement",loopval), cat("LoopStatement",loopval), 2);
        CreateNode(cat("LoopStatement",loopval), tempArr2, 2);
        printf("%s\n",tempArr2);
    }
    |forExp loopStatement
    {
        CreateNode(cat("LoopStatement",loopval), cat("LoopStatement",loopval), 2);
        CreateNode(cat("LoopStatement",loopval),"forExp",5 );
    }
    |whileExp loopStatement
    {
        CreateNode(cat("LoopStatement",loopval), cat("LoopStatement",loopval), 2);
        CreateNode(cat("LoopStatement",loopval), "whileExp", 5);
    }
    |ifElse loopStatement
    {
        CreateNode(cat("LoopStatement",loopval), cat("LoopStatement",loopval), 2);
        CreateNode(cat("LoopStatement",loopval), "ifElse", 7);
    }
    |
    ;
    
    
wloopStatement
    :declarationLoop wloopStatement{
        CreateNode(cat("wLoopStatement",loopval), cat("wLoopStatement",loopval), 2);
        CreateNode(cat("wLoopStatement",loopval), cat1("declarationLoop",loopval), 2);
    }
    |forExp wloopStatement
    {
        CreateNode(cat("wLoopStatement",loopval), cat("wLoopStatement",loopval), 2);
        CreateNode(cat("wLoopStatement",loopval),"forExp",5 );
    }
    |whileExp wloopStatement
    {
        CreateNode(cat("wLoopStatement",loopval), cat("wLoopStatement",loopval), 2);
        CreateNode(cat("LoopStatement",loopval), "whileExp", 5);
    }
    |ifElse wloopStatement
    {
        CreateNode(cat("wLoopStatement",loopval), cat("wLoopStatement",loopval), 2);
        CreateNode(cat("wLoopStatement",loopval), "ifElse", 7);
    }
    |
    ;
    
    
ifloopStatement
    :declarationLoop ifloopStatement{
        CreateNode(cat("ifLoopStatement",loopval), cat("ifLoopStatement",loopval), 2);
        CreateNode(cat("ifLoopStatement",loopval), "declarationLoop", 2);
    }
    |forExp ifloopStatement
    {
        CreateNode(cat("ifLoopStatement",loopval), cat("ifLoopStatement",loopval), 2);
        CreateNode(cat("ifLoopStatement",loopval),"forExp",5 );
    }
    |whileExp ifloopStatement
    {
        CreateNode(cat("ifLoopStatement",loopval), cat("ifLoopStatement",loopval), 2);
        CreateNode(cat("ifLoopStatement",loopval), "whileExp", 5);
    }
    |ifElse ifloopStatement
    {
        CreateNode(cat("ifLoopStatement",loopval), cat("ifLoopStatement",loopval), 2);
        CreateNode(cat("ifLoopStatement",loopval), "ifElse", 7);
    }
    |
    ;    
    
condExp
    :exp AND exp {
       strcpy(tempArr, $1);strcpy(tempArr, $2);strcpy(tempArr, $3);
     }
    |exp LAND exp{ strcpy(tempArr, $1);strcpy(tempArr, $2);strcpy(tempArr, $3);
    }
    |exp OR exp{strcpy(tempArr, $1);strcpy(tempArr, $2);strcpy(tempArr, $3); 
    }
    |exp LOR exp
    {strcpy(tempArr, $1);strcpy(tempArr, $2);strcpy(tempArr, $3);
    }
    |exp LE exp
    {
    strcpy(tempArr, $1);strcpy(tempArr, $2);strcpy(tempArr, $3);
    }
    |exp GE exp{strcpy(tempArr1, $1);strcpy(tempArr2, $2);strcpy(tempArr3, $3);}
    |exp L exp{strcpy(tempArr1, $1);strcpy(tempArr2, $2);strcpy(tempArr3, $3);}
    |exp G exp{strcpy(tempArr1, $1);strcpy(tempArr2, $2);strcpy(tempArr3, $3);}
    |exp INC{strcpy(tempArr1, $1);strcpy(tempArr2, $2);strcpy(tempArr3, " ");}
    |exp DEC{strcpy(tempArr1, $1);strcpy(tempArr2, $2);strcpy(tempArr3, " ");}
    |INC exp{strcpy(tempArr1, $1);strcpy(tempArr2, $2);strcpy(tempArr3, " ");}
    |DEC exp{strcpy(tempArr1, $1);strcpy(tempArr2, $2);strcpy(tempArr3, " ");}
    |exp XOR exp{strcpy(tempArr1, $1);strcpy(tempArr2, $2);strcpy(tempArr3, $3);}
    |exp EQ exp {strcpy(tempArr1, $1);strcpy(tempArr2, $2);strcpy(tempArr3, $3);}
    |exp NEQ exp{strcpy(tempArr1, $1);strcpy(tempArr2, $2);strcpy(tempArr3, $3);}
    |exp ASSIGN exp{strcpy(tempArr1, $1);strcpy(tempArr2, $2);strcpy(tempArr3, $3);}
    |type variable ASSIGN exp {strcpy(tempArr1, $1);strcpy(tempArr2, $2);strcpy(tempArr3, $3);}
    {
        insert($1, $2, $4, 4);
        {strcpy(tempArr1, $1);strcpy(tempArr2, $2);strcpy(tempArr3, $3);}
    }
    
    ;
    
//for loop
condExp1
    :exp AND exp {
        strcpy(tempArr1, $1);strcpy(tempArr2, $2);strcpy(tempArr3, $3);
     }
    |exp LAND exp{strcpy(tempArr1, $1);strcpy(tempArr2, $2);strcpy(tempArr3, $3);}
    |exp OR exp{strcpy(tempArr1, $1);strcpy(tempArr2, $2);strcpy(tempArr3, $3);}
    |exp LOR exp{strcpy(tempArr1, $1);strcpy(tempArr2, $2);strcpy(tempArr3, $3);}
    |exp LE exp{strcpy(tempArr1, $1);strcpy(tempArr2, $2);strcpy(tempArr3, $3);}
    |exp GE exp{strcpy(tempArr1, $1);strcpy(tempArr2, $2);strcpy(tempArr3, $3);}
    |exp L exp{strcpy(tempArr1, $1);strcpy(tempArr2, $2);strcpy(tempArr3, $3);}
    |exp G exp{strcpy(tempArr1, $1);strcpy(tempArr2, $2);strcpy(tempArr3, $3);}
    |exp INC{strcpy(tempArr1, $1);strcpy(tempArr2, $2);strcpy(tempArr3, "--");}
    |exp DEC{strcpy(tempArr1, $1);strcpy(tempArr2, $2);strcpy(tempArr3, "--");}
    |INC exp{strcpy(tempArr1, $1);strcpy(tempArr2, $2);strcpy(tempArr3, "--");}
    |DEC exp{strcpy(tempArr1, $1);strcpy(tempArr2, $2);strcpy(tempArr3, "--");}
    |exp XOR exp{strcpy(tempArr1, $1);strcpy(tempArr2, $2);strcpy(tempArr3, $3);}
    |exp EQ exp {strcpy(tempArr1, $1);strcpy(tempArr2, $2);strcpy(tempArr3, $3);}
    |exp NEQ exp{strcpy(tempArr1, $1);strcpy(tempArr2, $2);strcpy(tempArr3, $3);}
    |exp ASSIGN exp{strcpy(tempArr1, $1);strcpy(tempArr2, $2);strcpy(tempArr3, $3);}
    |type variable ASSIGN exp 
    {
        insert($1, $2, $4, 4);
        strcpy(tempArr1, $1);strcpy(tempArr2, $2);strcpy(tempArr3, $3);
    }
    
    ;
    
    
//for loop ... 
forExp
    :ForName OP for1 SEMICOLON for2 SEMICOLON for3 CP OB loopStatement CB
    {
        CreateNode("look", "forOpen", 0);
        CreateNode("forExp", cat("LoopStatement",loopval), 2);
        CreateNode("forExp", "for3", 6);
        CreateNode("forExp", "for2", 6);
        CreateNode("forExp", "for1", 6);
        CreateNode("forExp", "for", 0);
        loopFlag = false;
    }
    ;

ForName
    :FOR{loopFlag = true; 
        ++loopval;
     }
    ;

for1
    :type variable ASSIGN lhs COMMA for1
    {
        insert($1, $2, $4, 4);
        CreateNode("for1", "for1", 6);
        CreateNode("for1", ",", 0);
        CreateNode("for1", $4, 0);
        CreateNode("for1", "=", 0);
        CreateNode("for1", $2, 0);
        CreateNode("for1", $1, 0);       
    }
    | type variable ASSIGN lhs
    {
         insert($1, $2, $4, 4);
        CreateNode("for1", $4, 0);
        CreateNode("for1", "=", 0);
        CreateNode("for1", $2, 0);
        CreateNode("for1", $1,0);
    }
    |variable ASSIGN lhs COMMA for1
    {
        if(checkTableToAccess($1)){}
        else
            printf("ERROR : undefined variable \'%s\' in line No %d\n",$1, lineNo);
        CreateNode("for1", "for1", 6);
        CreateNode("for1", ",", 0);
        CreateNode("for1", $3, 0);
        CreateNode("for1", "=", 0);
        CreateNode("for1", $1, 0);
    }
    |variable ASSIGN lhs
    {
        if(checkTableToAccess($1)){}
        else
            printf("ERROR : undefined variable \'%s\' in line No %d\n",$1, lineNo);

        CreateNode("for1", $3, 0);
        CreateNode("for1", "=", 0);
        CreateNode("for1", $1, 0);
    }
    |
    ;

for2
    :
    condExp{
        CreateNode("for2", tempArr3, 0);
        CreateNode("for2", tempArr2, 0);
        CreateNode("for2", tempArr1, 0);
    }
    |
    ;
for3
    :condExp1
    {
        CreateNode("for3", tempArr3, 0);
        CreateNode("for3", tempArr2, 0);
        CreateNode("for3", tempArr1, 0);
    }
    |
    ;
    
//while loop .. 
whileExp
    :whileName OP condExp CP OB wloopStatement CB{
        CreateNode("whileExp", cat("wLoopStatement", loopval), 2);
        CreateNode("whileExp", tempArr3, 0);
        CreateNode("whileExp", tempArr2, 0);
        CreateNode("whileExp", tempArr1, 0);
        printf("%s\n", tempArr1);
        CreateNode("whileExp", "while", 0);
    }
    ;

whileName
    :WHILE{loopval++;}
    ;

ifElse
    :ifName OP condExp CP OB ifloopStatement CB {
        CreateNode("ifElse", "ifLoopStatement", 2);
        CreateNode("ifElse", tempArr3, 0);
        CreateNode("ifElse", tempArr2, 0);
        CreateNode("ifElse", tempArr1, 0);
        CreateNode("ifElse", "if",0 );
    }
    |ifName OP condExp CP OB ifloopStatement CB ELSE ifElse{
        CreateNode("ifElse", "ifElse", 7);
        CreateNode("ifElse", "else", 0);
        CreateNode("ifElse", "ifLoopStatement", 2);
        CreateNode("ifElse", tempArr3, 0);
        CreateNode("ifElse", tempArr2, 0);
        CreateNode("ifElse", tempArr1, 0);
        CreateNode("ifElse", "if",0 );
    }
    |OB ifloopStatement CB{
        CreateNode("ifElse", "ifLoopStatement", 2);
    }
    ;
ifName
    :IF{loopval++;}
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

