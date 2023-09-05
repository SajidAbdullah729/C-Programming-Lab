#include<stdio.h>
int main()
{
    int a,b,c=0,n;
    printf("enter the number of integars you want to add: ");
    scanf("%d",&n);
    for(a=1;a<=n;a++)
    {
        scanf("%d",&b);
        c=c+b;
    }

    printf("sum is %d",c);
    return 0;

}
