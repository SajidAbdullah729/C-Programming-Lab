#include<stdio.h>
int main()
{
    float a,b;
    printf("cost price: ");
    scanf("%f",&a);
    printf("sell price: ");
    scanf("%f",&b);
    if(a>b)
    {
        printf("the seller has made loss\n");
        printf("loss amount : %f",a-b);
    }
    else if(b>a)
    {
        printf("the seller has made profit\n");
        printf("profit amount: %f",b-a);
    }
    else if(a=b)
    {
        printf("No operation");
    }
    return 0;

}
