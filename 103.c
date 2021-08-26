/*Program No- p103.c
dt 8-15-2023
Concept: FLAG
Next Program- Read 10 numbers  and given number is exist or Not
------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

 int i,a[10],j,flag;

 i=0;
 while(i<=9)
 {
 
     scanf("%d",&a[i]);

     i++;
 
 
 }

scanf("%d",&j);

flag=0;

i=0;
while(i<=9)
{

    if(j==a[i])
    {
    
        flag =1;
        i++;
    
    }
    else
    {
     i++;
    
    }


}    

if(flag==1)
{

 printf("Entered number exist in an array = %d",j);
 

}
else
{

 printf("Entered number does not exist in array");

}

}