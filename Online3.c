#include<stdio.h>
void main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    if(a%2==1 && b%2==1)
    {
        printf("%d+%d=%d",a,b,a+b);
    }
    if(a%2==0 && b%2==0)
    {
        printf("%d-%d=%d",a,b,a-b);
    }
    else
    {
        printf("no operation");
    }
}
