#include<stdio.h>
void main()
{
    float s,pi = 3.14;
    printf("Enter length of side of a square : ");
    scanf("%f",&s);
    float CircumSquare = 4*s;
    float radius = CircumSquare/(2*pi);
    float areaCircle = pi*radius*radius;
    printf("Radius of circle : %f\n",radius);
    printf("Area of cirlce : %f\n",areaCircle);
    
}