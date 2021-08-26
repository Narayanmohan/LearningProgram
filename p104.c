/*program No- p104.c
dt-8-15-2021
Concept: Array
Next Program: Read 10 numbers and count no of times the given number is exist 
-----------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i,a[10], ctr, j;

i=0;
while(i<=9)
{

    scanf("%d",&a[i]);
    i++;


}

scanf("%d",&j);

ctr=0;

i=0;

while(j<=9)
{
    
    if(j==a[i])
    {
    
        ctr = ctr +1;
        i++;
    }

   else
   {
   
       i++;
       
   
   }

}

 printf("The number of times  the given number is exists  = %d",ctr); 


}
