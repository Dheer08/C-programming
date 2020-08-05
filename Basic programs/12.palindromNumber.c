#include <stdio.h>
void main()
{
	int num,num_copy,sum=0,remainder;
	printf("Enter a number : ");
	scanf("%d",&num);
	num_copy = num;
	while(num>0)
	{
		remainder = num%10;
		sum = sum *10 + remainder;	
		num = num/10;
	}
	if(sum == num_copy)
	{	
		//printf("sum value : %d\n",sum );
		printf("%d is a palindrome\n",num_copy);
	}
	else
	{
		//printf("sum value : %d\n",sum );
		printf("%d is not a palindrome\n",num_copy );
	}
		

}