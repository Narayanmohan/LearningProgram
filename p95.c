/*Program No- P95.c
dt - 7/15/2021
Concept- Matrix
Program Name-Find the column sum of the Matrix*/

#include<stdio.h>
int main()
{
 int i,j,sum,col,a[3][3];
 i=0;
 while(i<3)
 {
     j=0;
     while(j<3)
     {
         scanf("%d",&a[i][j]);
         j++;
     
     }
 i++;
 
 }


sum=0;
scanf("%d",&col);

i=0;

while(i<3)
{
    
    sum = sum+a[i][col];
    i++;
    

}

printf("%d",sum);


}