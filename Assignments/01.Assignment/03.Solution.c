#include <stdio.h>
#include <math.h>
void main()
{
	int a=30,b=20;
	printf("Enter a value : %d\n",a);
	printf("Enter b value : %d\n",b);
	a = a+b;
	b = a-b;
	a = a-b;
	printf("a : %d,b : %d\n",a,b);
}