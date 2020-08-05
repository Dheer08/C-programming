#include<stdio.h>
int sum(int ,int,int);
void main()
{
    int n,firstTerm,diff,sumValue;
    printf("Enter First term : ");
    scanf("%d",&firstTerm);
    printf("Enter Common Difference : ");
    scanf("%d",&diff);
    printf("Enter n value : ");
    scanf("%d",&n);
    printf("nth term : %d",(firstTerm+(n-1)*diff));
    sumValue = sum(firstTerm,diff,n);
    printf("\nsum upto %dth integer : %d\n",n,sumValue);
    
}
int sum(int a,int d,int n)
{
    int i=1,sum=0;
    while(i<=n)
    {
        sum = sum + (a+(i-1)*d);
        i = i + 1;
    }
    return sum;
}
