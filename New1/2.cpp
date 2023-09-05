#include<stdio.h>
#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int a,b,c,i,j,k,l,m,n;
     struct student
     {
          char name[100];
          int roll;
          float cgpa;
     }s[5];

for(i=0;i<5;i++)
{
    printf("Name ");
    scanf("%s",s[i].name);
    printf("Roll No ");
    scanf("%d",&s[i].roll);
    printf("CGPA");
    scanf("%f",&s[i].cgpa);

}

for(i=0;i<5;i++)
{
    if(s[i].roll %2==0 && s[i].cgpa<3.5)
    {
        printf("%s\n",s[i].name);
    }

}

return 0;
}
