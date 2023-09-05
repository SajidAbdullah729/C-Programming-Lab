#include<stdio.h>
int main()
{
    int a,b,n,c=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(b=1;b<=n;b++)
    {
        c=c+pow(-1,b-1)*b;
    }
    printf("sum is %d",c);
    return 0;
}
