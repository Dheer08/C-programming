#include <stdio.h>
void main()
{
	int num;
	printf("Enter a number : ");
	while(1)
	{
		scanf("%d",&num);
		if (num > 0)
			break;
	}

}