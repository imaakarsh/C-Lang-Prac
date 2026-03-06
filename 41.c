// Ques - WAP to enter price 3 items print final cost with gst

#include <stdio.h>
int main(){
    float price[3];
    printf("Enter the 3 Price : ");
    scanf("%f",&price[0]);
    scanf("%f",&price[1]);
    scanf("%f",&price[2]);
    printf("totalPrice1 : %f \n",price[0]+(0.18*price[0]));
    printf("totalPrice2 : %f \n",price[1]+(0.18*price[1]));
    printf("totalPrice3 : %f \n",price[2]+(0.18*price[2]));
    return 0 ;
}