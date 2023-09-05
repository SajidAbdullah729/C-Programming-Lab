#include<stdio.h>
int checkPerfect(int num);
int main()
{
    int num,x;
    scanf("%d",&num);
    int checkPerfect(int num);
    return 0;

}
int checkPerfect(int num)
{
    int i,j,k=0;
    for(i=1;i<=num;i++)
    {
        for(j=2;j<num;j++){



        if(i%j==0)
        {
            k++;

        }
        if(k!=0)
            {
            printf("%d",i);

            }
            k=0;
        }

      int checkPerfect(int num);

    }


}

