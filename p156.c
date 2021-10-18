/*program No-p156.c
dt-10-17-2021
Loop - For Loop
Concept-Array in For Loop
Next Program - Read 10 numbers and count the number of times the given number is exits
-------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i,a[10],ctr, j;

for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
    
}

scanf("%d",&j);

ctr=0;

for(i=0;i<10;i++)
{
    
    if(j==a[i])
    {
        
        ctr= ctr+1;
    
    }


}

printf("The Number of times the given number is exit = %d", ctr);

}