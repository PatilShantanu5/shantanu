#include<stdio.h>

int main(){
int i,j,rows;

printf("enter no.of rows:");
scanf("%d",&rows);


for(i=0;i<=rows;++i)
{
    for(j=1;j<=i;++j)
    {
        printf("*");

    }

printf("\n");



}

    





    return 0;
 }