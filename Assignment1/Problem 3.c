#include<stdio.h>
#include<math.h>
int main()
{
    float h,l,r,areacirc,perimeter,arearect,circum;
    printf("Enter the height: ");
    scanf(" %f",&h);
    printf("Enter the length: ");
    scanf(" %f",&l);
    printf("Enter the radius: ");
    scanf(" %f",&r);
    perimeter=2*(h+l);
    printf("Perimeter: %f\n",perimeter);
    arearect=h*l;
    printf("Area of the rectangle: %f\n",arearect);
    areacirc=3.1416*r*r;
    printf("Area of the circle: %f\n",areacirc);
    circum=2*3.1416*r;
    printf("Circumference: %f\n",circum);
    return 0;

}
