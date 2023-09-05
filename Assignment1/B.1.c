#include<stdio.h>
int main()
{
    float a,b,max,min;
    printf("Enter the two numbers: ");
    scanf("%f %f",&a,&b);
    {

    if(b>a)
    {
        max=b;
        min=a;
        printf("maximum number is %f\n",max);
        printf("minimum number is %f\n",min);
    }
    else if(b>a)
    {
        max=b;
        printf("maximum number is %f\n",max);
        printf("minimum number is %f\n",min);

    }
    else
        printf("the numbers are equal");

    }

    return 0;
}
