/*program No- p150.c
dt-10-16-2021
Loop Concept- For Loop
Array- Array in For Loop
Next Program-Read 10 numbers and find the position of the biggest number in the given array
---------------------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i,a[10],c,pb;
c=0;
c=a[0];
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        
    }

    for(i=0;i<10;i++)
    {
    
         if(c<a[i])
         {
             c=a[i];
             pb=i;
     
         }     
    
    }
printf("Position of the biggest Number is = %d",pb);




}