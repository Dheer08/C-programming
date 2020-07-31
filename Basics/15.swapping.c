#include <stdio.h>

void swapping(int *a,int*b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void main()
{
	int x=10,y=20;
	swapping(&x,&y);
	printf("a: %d,b: %d\n",x,y );
}