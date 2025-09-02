#include <stdio.h>

int main (void){

    float amount ;
    int bill20 , bill10 , bill5, bill1;
    printf("Enter an amount  : ");
    scanf("%f",&amount);

    bill20 = amount / 20 ;
    bill10 = amount / 10 ;
    bill5 = amount / 5 ;
    bill1 = amount / 1 ;

    printf("Bills of $20 : %d\n",bill20);
    printf("Bills of $10 : %d\n",bill10);
    printf("Bills of $5 : %d\n",bill5);
    printf("Bills of $1 : %d\n",bill1);



    










    return 0;
}