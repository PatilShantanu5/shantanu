#include<stdio.h>
#include<math.h>
int main(){
    int n,i,count=0;
    printf("enter number:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
        if(count==2)
        {
            printf(" the number is prime number \n");

        } 
   else
   {
    printf(" the number is not prime number \n");
   }
        
    return 0;
 }