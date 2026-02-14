#include<stdio.h>
void namaste();
void bonjure();
int main (){
    printf("Enter f for french & i for indian");
    char ch;
    scanf("%c",&ch);
    if(ch =='i'){
    namaste();}
    else{
    bonjure();}
    return 0;
}

void namaste(){
    printf("Usser is indian\n");
}

void bonjure(){
    printf("Usser is French\n");
}


