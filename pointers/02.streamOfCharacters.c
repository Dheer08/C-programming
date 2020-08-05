#include <stdio.h>
#include <stdlib.h>

# define DEFAULT 100

int resize(char*p,int count);

void main()
{
	int count = 0,capacity = DEFAULT;
	char *input;
	char ch;
	input = (char*)malloc(DEFAULT);
	while((ch=getchar())!=EOF)
	{
		if(count==capacity)
		{
			input = resize(input,capacity);
			capacity = capacity + DEFAULT;
		}
		input[count++] = ch;
	}
	puts(input);
} 

char resize(char* p ,int capacity)
{
	return realloc(p,capacity+DEFAULT);
}