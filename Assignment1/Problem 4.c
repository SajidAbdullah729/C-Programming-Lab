#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,n,power,logarithom,trig,sqroot;
    printf("enter a number,a:  ");
    scanf("%lf",&a);
    printf("enter a number,b: ");
    scanf("%lf",&b);
    printf("enter the power of a: ");
    scanf("%lf",&n);
    power=a;
    for(b=1;b<n;b++)
    {
    power=a*power;
    }
    sqroot=sqrt(a);
    logarithom=log(a);
    trig=sin((a*3.1416)/180);
    printf("a^n: %lf\n",power);
    printf("square root of a: %lf\n ",sqroot);
    printf("log of a: %lf\n",logarithom);
    printf("sin of a: %lf\n",trig);
    return 0;
}
