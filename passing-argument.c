#include<stdio.h>
int sum(int a , int b);
void multiple(int n);
int main(){
    int a,b,n;
    printf("Enter number:");
    scanf("%d",&n);
    multiple(n);
    return 0;
}

int sum(int a, int b){
    return a+b;
}

void multiple(int n){
    for ( int i=1; i<=10; i++)
    {
        printf("%d",i*n);
    }
    
}