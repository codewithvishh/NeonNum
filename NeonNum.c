#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("enter number");
    scanf(" %d",&n);
    int x=n*n;
    while(x!=0)
    {
        sum=sum+x%10;
        x=x/10;
    }
    if(n==sum)
    {
        printf(" neon number ");
    }
    else{
        printf("not neon number");
    }
    return 0;
}