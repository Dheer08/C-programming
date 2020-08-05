#include <stdio.h>
void main()
{
	int n,count=0,n_copy;
	printf("Enter a number : ");
	scanf("%d",&n);
	n_copy = n;
	while(n>0)
	{
		count = count + 1;
		n = n/10;
	}
	printf("%d is the number of digits in %d\n",count,n_copy);
}