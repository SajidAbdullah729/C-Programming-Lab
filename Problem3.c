#include<stdio.h>
int main()
{
    double a,b=0,c,n;
    printf("Enter the number: ");
    scanf("%lf",&n);
    for(a=1;a<=n;a++)
    {
        b=b+(1/a);
    }
    printf("sum is %lf",b);
    return 0;
}
