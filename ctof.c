#include<stdio.h>
int clac(int science, int maths);
int main(){
    int sc = 98;
    int maths =59;

    printf("%d",clac( sc,  maths));
    return 0;
}

int clac(int science, int maths){
    return((science+maths)/2)*100;
} 