#include"program.h"


void generateToken(char* name ,char *value, int nec){
    strcat(curToken, name);
    strcat(curToken, " ");
    //printf("%s\n",curToken);
    //printf("yytext = %s\n",yytext);
    fprintf(tempFile, "<%s %s>\n",name, value);
}

int yyclearin(char *s){
    printf("inside clear %s\n",s);
}

int yyerror(char *s){
    //yyless(3);
    semiFlag = 1;
    printf("%c[3m error in line No %d\n%c[0m",27,lineNo,27);
    printf("%c[4mLine = > %s\n%c[0m",27,curToken,27);
    //printf("%d. %s %s\n",lineNo, s, curToken);
}

void insert(char *type, char* name, char *value,int flag ){
    ++k;
    if(flag == 1){
        if(!checkTableToInsert(name)){
            
            strcpy(arr[k-1].type, type);
            strcpy(arr[k-1].name, name);         
            strcpy(arr[k-1].value, value);
            
            arr[k-1].lineNO = lineNo;

            arr[k-1].Bscope = Bscope;
            arr[k-1].scope = scope;
            if(scope == 0){
                arr[k-1].Gscope = 1;
                Gscope = 1;
            }
            else{
                arr[k-1].Gscope = 0;
                Gscope = 0;
            }

        }
        else {
            --k;
            printf("=>ERROR : Multiple declarations of \'%s\' in line No %d\n",name,lineNo);
        }
    }
    else if(flag == 2){
        --k;
        update(name, value);    
    }
    else if(flag == 3){
        if(!checkTableToInsert(name)){
            strcpy(arr[k-1].type, type);
            strcat(arr[k-1].type, "::func");
            strcpy(arr[k-1].name, name);         
            strcpy(arr[k-1].value, value);
            arr[k-1].lineNO = lineNo;

            arr[k-1].Bscope = Bscope;
            arr[k-1].scope = scope;
            if(scope == 0){
                arr[k-1].Gscope = 1;
                Gscope = 1;
            }
            else{
                arr[k-1].Gscope = 0;
                Gscope = 0;
            }
        }
        else{
            --k;
            printf("ERROR : Multiple declarations of function \'%s\' in line No %d\n",name,lineNo);
        }
    }
    else if(flag == 4){
            strcpy(arr[k-1].type, type);
            strcpy(arr[k-1].name, name);         
            strcpy(arr[k-1].value, value);
        
            arr[k-1].lineNO = lineNo;
            arr[k-1].Bscope = Bscope;
            arr[k-1].scope = scope;
            arr[k-1].Gscope = Gscope;
    }
}

void update(char *name, char* val){
    for(int i=0;i<k;i++){
        if(!strcmp(arr[i].name, name) && arr[i].scope<=scope){
            strcpy(arr[i].value, val);
            return;
        }
    }
    printf("Warning : Nothing to Update\n");
    return;
}

int checkTableToInsert(char *name){
    //1 = already in the table
    //0 = not present in the table
  
    for(int i=0;i<k;i++){
        if(!strcmp(arr[i].name,name)){
            
            if(arr[i].Gscope == Gscope){ // check for clash in global variable 
                return 1;
            }
            if(scope == arr[i].scope && arr[i].Bscope == Bscope){ //clash in local scope
                return 1;
            }
           
        }
        
    }
    return 0;
}


int checkTableToAccess(char *name){
    for(int i=0;i<k;i++){
        if(!strcmp(arr[i].name,name)){
            //printf("%s %d %d\n",name, scope, Bscope);
            if(scope >= arr[i].scope && Bscope == arr[i].Bscope){
                return 1;
            }            
        }
    }
    return 0;
}


int checkType(char *type, char* value){
    int dot = 0;
    //printf("len %d",strlen(value));
    if(!strcmp(type, "double") || !strcmp(type, "float")){
        for(int i=0; i<strlen(value)-1; i++){
            if(value[i] =='.') dot++;
            else if(dot == 2) return 0;
            else if(!(value[i]>='0' && value[i] <= '9')){
                return 0;
            }

        }
    }
    
    else if(!strcmp(type, "int")){
        for(int i=0;i<strlen(value); i++){
           
            if(!((value[i]>='0' && value[i] <= '9') || value[i] == '.') ){
                
                if(!checkTableToAccess(value)){
                    return 0;
                }
                else
                    return 1;
            }
        }
    }
    return 1;   
}


void displayTable(){
    fprintf(yyout, "line no\ttype\tname\tvalue\tbscope\tscope\tGscope\n");
    for(int i=0;i<k;i++){
        
            fprintf(yyout,"%d,%s,%s,%s,%d,%d,%d\n", arr[i].lineNO,arr[i].type, arr[i].name, arr[i].value, arr[i].Bscope, arr[i].scope,arr[i].Gscope);
    }
    
}

char* getValue(char *name){
    for(int i=0;i<k;i++){
        if(!strcmp(arr[i].name, name)){
            return arr[i].value;
        }
    }
    return "";    
}

double strToDouble(char *s){
    double temp;
    sscanf(s, "%lf", &temp);
    return temp;
}

char* operate(char *s1, char* s2, int val){
    double a1 = strToDouble(s1);
    double a2 = strToDouble(s2);
    //printf("a1 =%lf, a2 =%lf\n",a1,a2);
    if(val == 1)
        sprintf(tempArr, "%lf", a1+a2);
    else if(val == 2)
        sprintf(tempArr, "%lf", a1-a2);
    else if(val == 3){
        sprintf(tempArr, "%lf", a1*a2);}
    else if(val == 4)
        sprintf(tempArr, "%lf", a1/a2);
    return tempArr;
}

char *correct(char *val, char *type){
    
    if(!strcmp(type,"int")){
        int temp = atoi(val);
        sprintf(tempArr, "%d", temp);
        return tempArr;    
    }
    else if(!strcmp(type, "float") || !strcmp(type, "double")){
        char *end;
        float temp = strtof(val,&end);
        
        sprintf(tempArr, "%f", temp);
        return tempArr;
    }
}



void displayTree(){
    for(int i=tk-1; i>=0; i--){
        fprintf(treeFile, "%s,%s\n",treeArr[i].Parent, treeArr[i].child);
    }
}
