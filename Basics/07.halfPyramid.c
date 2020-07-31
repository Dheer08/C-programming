#include <stdio.h>
void main()
{
	int NumOfRows = 4;
	for(int i=0;i<NumOfRows;i++)
	{
		for(int j=0;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}