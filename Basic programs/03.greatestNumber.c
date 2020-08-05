#include <stdio.h>
int main()
{
	int a=1,b=2,c=3	;
	printf("Enter 3 numbers : ");
	scanf("%d %d %d ",&a,&b,&c);
	if(a>b && a>c)
		printf("%d is the greatest number\n",a);
	else if(b>a && b>c)
		printf("%d is the greatest number\n",b);
	else 
		printf("%d is the greatest number\n",c);
	return 0;
}	