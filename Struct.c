#include<stdio.h>
#include<string.h>
struct data
{
    char name[100];
    int class;
}; 

int main(){
    struct data s1;
    s1.class = 12; 
    // s1.name = "aakarsh";
    strcpy(s1.name,"aakarsh");


    printf("%s \n",s1.name);
    printf("%d \n",s1.class);

    return 0;
}
