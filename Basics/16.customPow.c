#include <stdio.h>

int power(int ,int);
void main()
{
	int x = 2,y=3;
	printf("power : %d\n",power(x,y) );

}
int power(int base,int n)
{
	int p;
	for(p=1;n>0;--n)
	{
		p = p*base;
	}
	return p;
}