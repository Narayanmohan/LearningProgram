/*Program No- p151.c
dt-10-16-2021
Loop Concept- For Loop
Concept- Array in For Loop
Next Program - Read 10 numbers and Find the position of the Smallest number in the given array
--------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i,a[10],c,ps;


c=a[0];

    for(i=0;i<10;i++)
        {
        scanf("%d",&a[i]);
    
        }

        for(i=0;i<10;i++)
        {

            if(c>a[i])
            {
                c= a[i];
                ps =i;
            }

       }

printf("Position of the smallest number is = %d",ps);       

}