#include<stdio.h>
int main()
{
    int a;
    printf("enter the marks: ");
    scanf(" %d",&a);
    if(a>=0 && a<=100)
    {
        if(a>=80)printf("A");
        if(a>75 && a<=79){printf("A");}
        if(a>=70 && a<=74)printf("A-");
        if(a>=65 && a<=69)printf("B+");
        if(a>=60 && a<=64)printf("B");
        if(a>=55 && a<=59)printf("B-");
        if(a>=50 && a<=54)printf("C+");
        if(a>=45 && a<=49)printf("C");
        if(a>=40 && a<=44)printf("D");
        if(a<40)printf("F\n");
    }
    return 0;
}
