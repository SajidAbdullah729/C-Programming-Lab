#include<stdio.h>
int main()
{
    float h,c,t;
    printf("hardness: ");
    scanf("%f",&h);
    printf("carbon content: ");
    scanf("%f",&c);
    printf("tensile strength: ");
    scanf("%f",&t);
    if(h>60 && c<.7 && t>5000)
        printf("Grade is 10");
    else if(h>60 && c<.7)
        printf("Grade is 9");
    else if(c<.7 && t>5000)
        printf("Grade is 8");
    else if(h>60 && t>5000)
        printf("Grade is 7");
    else if(h>60 || c<.7 || t>5000)
        printf("Grade is 6");
    else
        printf("Grade is 5\n");
    return 0;

}
