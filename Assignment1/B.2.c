#include<stdio.h>
int main()
{
    int a;
    printf("Enter an year: ");
    scanf("%d",&a);
    if(a%4==0)
    {
        if(a%100==0 && a%400!=0)
        {
            printf("Not Leap Year");
        }
        else
            printf("Leap Year");
    }
    else
        printf("Not Leap Year");
    return 0;
}
