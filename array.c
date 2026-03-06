#include <stdio.h>
int main(){
    int marks[3];
    printf("Enter the marks of phy: ");
    scanf("%d",&marks[0]);
    printf("Enter the marks of chem: ");
    scanf("%d",&marks[1]);

    printf("Phy = %d, Chem = %d",marks[0],marks[1]);
    return 0;
    
}