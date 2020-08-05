#include<stdio.h>
int main()
{
	int num,flag=0;
	printf("Enter a number : ");
	scanf("%d",&num);
	for(int i = 2; i<num;i++)
	{
		if(num%i==2)
		{
			flag= 1;
			break;
		}
	}
	if(flag==0)
		printf("%d is a prime number\n",num);
	else
		printf("%d is not a prime number\n",num);
	return 0;
}