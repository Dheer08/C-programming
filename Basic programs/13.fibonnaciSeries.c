#include <stdio.h>
int main()
{
	int a=2,b=3,c;int n=5;
	printf("%d %d ",a,b );
	for(int i=1;i<=n;i++)
	{
		c = a+b;
		printf("%d ",c);
		a = b;
		b = c;
	}
	printf("\n");
}