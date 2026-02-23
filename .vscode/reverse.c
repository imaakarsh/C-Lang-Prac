#include<stdio.h>
#include<string.h>
    void main(){
    char str[100], temp;
    int i=0,j=0;
    printf("Enter the String : ");
    gets(str);
    j=strlen(str);
    while(i<j){
        temp = str[i];
        str[i]=str[j];
        str[i]=temp;
        i++;
        j--;
    }
    printf("reverse");
    puts(str);
    }
