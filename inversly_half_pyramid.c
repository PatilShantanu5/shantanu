#include<stdio.h>

int main(){
int i,j;
/*printf("enter any number:");
scanf("%d",&rows);*/

for(i=1;i<=5;i++)    // rows
{
      for(j=5;j>=i;j--)
     {
          printf("*");

     }

         printf("\n");



}







    return 0;
 }