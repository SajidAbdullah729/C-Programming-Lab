#include<stdio.h>
void main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && b>=c)
    {
        printf("%d is the largest number",a);
    }
    else if(b>a && b>=c)
    {
        printf("%d is the largest number",b);
    }
    else if(c>a && c>=b)
    {
        printf("%d is the largest number",c);
    }
    else
    {
        printf("all are equal");
    }
}
