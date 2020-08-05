#include <stdio.h>
void arrays(int *b)
{
	printf("%d\n",b[0]);
	b[0] = 100;
	printf("b[0] : %d\n",b[0] );
}
void main()
{
	int a [] = {1,2,3};
	char name1[] = "Rakshith";
	char *name2 = "Rakshith"; 
	printf("%c\n",name1[3] );
	printf("%c\n",name2[3] );
	name1[3] = 'x';
	//name2[3] = 'x';
	printf("name1 : %s\n", name1);
	printf("name2 : %s\n",name2 );
	arrays(a);
	printf("a[0] : %d\n",a[0] );
}