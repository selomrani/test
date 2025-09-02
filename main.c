#include <stdio.h>
#include <math.h>
int main(void) {
float amount = 0 ; 
float tax = 0.05;
float total = 0;

printf("Enter an amount in $ : ");
scanf("%f",&amount);

total = amount + (amount * tax ) ;

printf("Your total after tax is : $%2.f",total);

return 0; 
}