#include<stdio.h>
int main()
{
    int n,a,b,c=1,d=0,e=0;
    printf("Enter the number ");
    scanf("%d",&n);

    for(a=1; a<=n; a++)
    {


        for(b=1; b<=a; b++)
        {
            c=c*b;


        }

        e=e+c;
        c=1;

    }

    printf("sum is %d",e);
    return 0;
}
