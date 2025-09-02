#include <stdio.h>
#include <math.h>
int main(void) {
    int Rayon = 0;
    const double PI = 3.1415926535897;
    float volume = 0 ;


    printf("Enter a value for R : ");
    scanf("%d",&Rayon);

    volume = (4.0f / 3.0f) * PI * pow(Rayon,3);

    printf("The volume of the sphere is : %f",volume);




return 0; 
}