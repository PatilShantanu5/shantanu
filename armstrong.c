#include<stdio.h>
 
int main(){
int n,rem,arm=0,c;

printf("enter any number:");
scanf("%d",&n);
c=n;
while(n>0)
{
       rem=n%10;
       arm=(rem*rem*rem)+arm;
         n=n/10;
 }                                     //153=1*1*1+5*5*5+3*3*3=153
      if(c==arm)
      {
          printf("\nits armstrong number");
    
      }
     else
     {
        printf("\nits not armstrong number\n");
     }


    return 0;
 }