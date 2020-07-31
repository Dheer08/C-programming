#include <stdio.h>
void main()
{
		int rows = 4;
		for(int i=1;i<=rows;i++)
		{
			for(int j=i;j<rows;j++)
			{
				printf(" ");
			}
			for(int k=1;k<(i*2);k++)
			{
				printf("*");
			}
			printf("\n");
		}
}