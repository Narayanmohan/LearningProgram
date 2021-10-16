/*program No- p139.c
dt-10-15-2021
loop- For Loop
Next Program- Classify the given number is positive, negative or zero until -1000 is given 
---------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int num;
scanf("%d",&num);

for(; num!=-1000 ;)
{

    if(num>0)
    {
         printf("Num is positive No = %d",num);
    }    
    
    else if(num<0)
    {
    
        printf("num is Negative No = %d",num);
    
    }
    else
    {
        printf("num is zero = %d",num);
    
    }
    
 scanf("%d",&num);
 
}



}