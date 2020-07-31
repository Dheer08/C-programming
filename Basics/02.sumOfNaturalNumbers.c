#include <stdio.h>
void main()
{
	int num,sum=0;
	printf("Enter No. of Natural Numbers : ");
	scanf("%d",&num);
	for(int i=1;i<=num;i++)
	{
		sum = sum + i;
	}
	printf("%d is the sum of %d Natural Numbers\n",sum,num);
}