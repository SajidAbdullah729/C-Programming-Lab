#include<stdio.h>
int main()
{
    float x,meter,feet,inch,centimeter;
    printf("Enter the distance between AUST campus to Rajshahi campus in Km: ");
    scanf("%f",&x);
    meter=x*1000;
    feet=x*3280.84;
    inch=x*39370.1;
    centimeter=x*100000;
    printf("Distance(metre): %f\n",meter);
    printf("Distance(feet): %f\n",feet);
    printf("Distance(inch): %f\n",inch);
    printf("Distance(centimeter): %f\n",centimeter);
    return 0;
}
