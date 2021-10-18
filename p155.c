/*Program No- p155.c
dt-10-17-2021
Loop Concept- For Loop
Concept- Array in For Loop
Nerx Program,-Read 10 numbers and the given number is exist or NOT
-------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i, a[10],j,flag;
    
    for(i=0;i<10;i++)
    {    
        scanf("%d",&a[i]);
    }

    scanf("%d",&j);
    flag = 0;

    for(i=0;i<10;i++)
    {
    
        if(j==a[i])
        {
        
            flag = 1;
        }
    }

    if(flag==1)
    {
    
        printf("Entered no exist in an array  = %d",j);
    }
    else
    {
    
        printf("Entered no does not exist in an array");
    }

}