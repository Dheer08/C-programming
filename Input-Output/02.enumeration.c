#include<stdio.h>
void main()
{
    enum boole {NO,YES};
    int found = 1;
    if(found == YES)
    {
        printf("found\n");
    }
    printf("Size of int : %lu\n",sizeof(int));
    // sizeof() return type is long unsigned int
}