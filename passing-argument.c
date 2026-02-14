#include<stdio.h>
int sum(int a , int b);
int main(){
    int a,b;
    printf("Enter the 1st number");
    scanf("%d",&a);
    printf("Enter the 2nd Number");
    scanf("%d",&b);
    int s = sum(a,b);
    printf("Sum :%d",s);
    return 0;
}

int sum(int a, int b){
    return a+b;
}