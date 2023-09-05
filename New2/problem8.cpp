#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100];
    int b[100];
    int c[201];
    int n,m,i,j,k,l,aa,bb,cc,d,length,f=0;
    printf("Number of elements in array a: ");
    scanf("%d",&n);
    printf("Number of elements in array b: ");
    scanf("%d",&m);
    length=m+n;

    printf("elements of array a: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("elements of array b: ");

    for(j=0;j<m;j++)
    {
        scanf("%d",&b[j]);
    }
    for(k=0;k<n;k++)
    {
        c[k]=a[k];
    }
    for(l=n;l<n+m;l++)
    {
        c[l]=b[l-n];
    }
    sort(c,c+(n+m));
    length=n+m;
    for(aa=0;aa<length;aa++){
        for(bb=aa+1;bb<length;bb++)
    {
        if(c[aa]==c[bb])
        {
            for(cc=bb;cc<length;cc++)
            {
                c[cc]=c[cc+1];



            }

          bb--;
          length--;
        }


    }

    }

    for(d=0;d<length;d++)
    {
        printf("%d\t",c[d]);
    }

    return 0;
}
