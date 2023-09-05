#include<stdio.h>
int main()
{
    int a,b,digitsum=0;
    printf("enter the number: ");
    scanf("%d",&a);
    if(a>9999 && a<100000)
    {
    b=a;
    while(a>0 && a<100000)
    {
        b=a%10;
        a=a/10;
        digitsum=digitsum+b;
    }
    printf("sum of the digits of the number is %d",digitsum);
    }
    else
        printf("No Operation");
    return 0;
}
