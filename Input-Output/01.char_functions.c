#include<stdio.h>
void main()
{
    int c;
    c = getchar(); // Buffer concept applies here 
    // It can take more than one character at a time and stores in buffer one by one   
    while(c!=EOF) // EOF value is -1
    {
        putchar(c);
        c = getchar();
    }
}