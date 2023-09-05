#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100],b[100],u;
    int i,n,j,k,c=0,d=0,m,o,p,q,maximum=1,s,t;
    printf("Number of elements in array : ");
    scanf("%d",&n);
     printf("elements of array : ");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
     sort(a,a+n);
    printf("the maximum number in array is :%d\n",a[n-1]);
    printf("the minimum number in array is :%d\n",a[0]);
    if(n%2==1)
    {
        printf("the median of the number is :%lf\n",(double)a[n/2]);
    }
    else if(n%2==0)
    {
        printf("the median of the array of number is :%lf\n",(double)(a[(n-1)/2]+a[n/2])/2);
    }
    for(j=0;j<n;j++){
        for(k=0;k<n;k++)
    {
        if(a[j]==a[k])
        {
            c++;
        }
    }
    b[j]=c;
    c=0;

    }
     sort(b,b+n);
      printf("the mode is ");

    for(q=0;q<n;q++){
        for(p=0;p<n;p++)
    {
         if(a[q]==a[p])
         {
             d++;
         }

    }
    if(d==b[n-1] && a[q]!=a[q-1] && d!=1)
    {

        printf("%d\n",a[q]);
        d=0;
    }
    else
    {
        d=0;
    }
    }
    return 0;

}
