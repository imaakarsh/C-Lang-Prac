
#include<stdio.h>
int main()
{
int matrix[3][3];
int i,j;
printf('\nEnter the elements');
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d", &matrix[i][j]);
}
}
printf('\nThe elements of the matrix are:\n');
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%2d", matrix[i][j]);
}

}
return 0;
}
