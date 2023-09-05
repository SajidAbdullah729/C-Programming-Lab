#include<stdio.h>
int main()
{

    int y,total,i,count=0,c=0;
    printf("Enter the year: ");
    scanf("%d",&y);

        if(y>1900)
        {

           {

            for(i=1900;i<y;i++)
           {
            if((i%4==0 && i%100!=0)|| i%400==0)
                 {
                  count++;
                 }
           }
                  total=((y-1900)*365)+count;
           }


        if(total%7==0)printf("monday\n");
        if(total%7==1)printf("tuesday\n");
        if(total%7==2)printf("wednesday\n");
        if(total%7==3)printf("thursday\n");
        if(total%7==4)printf("friday\n");
        if(total%7==5)printf("saturday\n");
        if(total%7==6)printf("sunday\n");
  }











     if(y==1900)
        printf("monday");
     return 0;
}
