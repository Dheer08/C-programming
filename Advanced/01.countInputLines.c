#include <stdio.h>
void main()
{
	int linecount,c;
	while((c=getchar())!=EOF)
	{
		if(c=='\n')
			++linecount;
	}
	printf("No. of lines : %d\n",linecount);
}