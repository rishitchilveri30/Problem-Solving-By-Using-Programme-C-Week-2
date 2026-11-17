#include <stdio.h>
int main() 
{
    float p,r,a;
    printf("Enter radius: ");
    scanf("%f", &r);
    p=3.14;
    a= p*r*r;
    printf("Area of Circle = %f\n", a);
    return 0;
}
