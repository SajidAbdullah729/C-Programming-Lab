#include<stdio.h>
int main()
{
    float a,b,c,d,e,agm,perm;
    printf("Enter marks of five subjects consecutively: ");
    scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
    agm=(a+b+c+d+e)/5;
    perm=((a+b+c+d+e)/500)*100;
    printf("agregate marks = %f\n ",agm);
    printf("percentage =%f%%",perm);
    return 0;

}
