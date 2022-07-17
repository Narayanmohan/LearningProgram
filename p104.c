/*program No- p104.c
dt-8-15-2021
Concept: Array
Next Program: Read 10 numbers and count no of times the given number is exist 
-----------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i,a[10], ctr, j,num;

i=0;

while(i<=9)
{

    scanf("%d",&a[i]);

    i++;


}

 scanf("%d",&num);

ctr=0;

j=0;

while(j<=9)
{
    
    if(num==a[j])
    {
    
        ctr = ctr + 1;
        
        j++;   
        
    }

   else
   {
  
       j++;
       
   
   }

}

 printf("The number of times  the given number is exists  = %d",ctr); 


}
