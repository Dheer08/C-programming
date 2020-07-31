#include <stdio.h>
#include <math.h>
void main()
{
	int num,sum=0,digit,num_copy;
	printf("Enter a number : ");
	scanf("%d",&num);
	num_copy = num;
	while(num>0)
	{
		digit = num%10;
		sum += digit*digit*digit; // pow(digit,3)
		num = num/10;
	}
	if(num_copy == sum)
		printf("Armstrong number\n");
	else
		printf("Not a Armstrong number\n");
}