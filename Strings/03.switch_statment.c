#include<stdio.h>
void main()
{
	int weekday;
	printf("Enter a weekday : ");
	scanf("%d",&weekday);
	switch(weekday)
	{
		case 0: printf("Monday\n");break;
		case 1: printf("Tuesday\n");break;
		case 2: printf("wednesday\n");break;
		case 3: printf("Thursday\n");break;
		case 4: printf("Friday\n");break;
		case 5: printf("Saturday\n");break;
		case 6: printf("Sunday\n");break;
		default: printf("Wrong input\n");
	}
}