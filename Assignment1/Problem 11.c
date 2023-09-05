#include<stdio.h>
int main()
{
    int a,b;
    int num=0;
    printf("Enter the number= ");
    scanf("%d",&a);
    if(a>9999 && a<100000)
    {
    while(a!=0)
    {
       num=num*10;
       num=num+a%10;
       a=a/10;
    }
    printf("Reverse of the number =%d",num);
    }
    else
        printf("No operation");
    return 0;
}
