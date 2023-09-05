#include<stdio.h>
int main()
{
    float f,c;
    printf("Enter temperature(Farenheight): ");
    scanf("%f",&f);
    c=100*((f-32)/180);
    printf("Temperature(Centigrade): %f",c);
    return 0;
}
