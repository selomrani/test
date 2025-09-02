#include <stdio.h>
#include <math.h>
int main(void) {
    int Rayon = 10;
    const double PI = 3.1415926535897;
    float volume = 0 ;

    volume = (4.0 / 3.0) * PI * pow(Rayon,3);

    printf("The volume of the sphere is : %f",volume);




return 0; 
}