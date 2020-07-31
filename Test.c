#include <stdio.h>
void strcpy1(char *s,char *t){
	int i,j;i=0;j=0;
	while((s[i]=t[i])!='\0')
		i++;	
	return;
}
void main()
{
	char a[] = "Rakshith";
	char b[100];
	char *p = "Rakshith";
	a[3] = 'x';
	//*(p+3) = 'x';
	printf("a : %s\n",a );
	printf("%c\n",p[3] );
	strcpy1(b,a);
	printf("%s\n", a);
	printf("%s\n",b );
}

