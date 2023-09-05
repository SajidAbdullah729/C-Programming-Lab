#include<stdio.h>
#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int a,b,c,i,j,k,l,m,n,temp;
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

     for(k=0;k<n;k++)
        for(l=0;l<n-1;l++)
      {
          if(s[l].cgpa<s[l+1].cgpa)
          {
              m=s[l].cgpa;
              s[l].cgpa=s[l+1].cgpa
          }
      }
      

return 0;
}
