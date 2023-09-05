#include<stdio.h>
int main()
{
    int a,b,reverse=0;
    printf("enter a five digit number: ");
    scanf("%d",&a);
    b=a;
    if(b>9999 && b<=99999){
    while(b!=0)
    {
       reverse=reverse*10;
       reverse=reverse+b%10;
       b=b/10;
    }



     printf("reverse number: %d\n",reverse);
    }
    else
        printf("No operation");
    {if(reverse==a)
    {
        printf("original number is equal to reverse number\n");
    }
    else
        printf(" original number is not equal to reverse number\n");
    }
    return 0;


}
