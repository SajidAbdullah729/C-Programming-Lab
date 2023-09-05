#include<stdio.h>
int main()
{
    char s1[50];
    int i,count=0;
    printf("enter the string: ");
    gets(s1);
    for(i=0;s1[i]!='\0';i++)
    {
        count++;
    }
    printf("%d",count);
}
