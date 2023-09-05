#include<stdio.h>
int main()
{
    int a,b,last,first,sum;
    printf("Enter the number= ");
    scanf("%d",&a);
    if(a>999 && a<10000)
    {
        last=a%10;
        {
            first=a;
            while(first>=10)
            {
                first=first/10;
            }
            sum=last+first;
            printf("the sum of the first and last digit=%d\n",sum);

        }
    }
    else
        printf("No operation");
    return 0;
}
