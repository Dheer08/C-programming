/*
A square is made by bending a single piece of wire.
If we make a circle out of this wire, what will be radius and area of the circle?
Assume the value of "pi" to be 3.14.
input: length of one side of the square
output: Radius of the circle is:
Area of the circle is:
*/
#include <stdio.h>
void main()
{
	float lenSquare,radius,area,pi=3.14;
	printf("Enter length of one side of square : ");
	scanf("%f",&lenSquare);
	float CircumferenceSquare = 4*lenSquare;
	radius = CircumferenceSquare/(2*pi);
	area = pi*radius*radius;
	printf("Radius of a circle : %f\n",radius);
	printf("Area of a circle : %f\n",area);
}