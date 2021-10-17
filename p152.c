/*Program No- p152.c
dt-10-16-2021
Loop- For Loop
Concept: Array using For Loop
Next Program-Read 10 numbers and interchange the biggest and smallest number in the given array
-----------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i,big,small,swap,ps,pb,a[9];
big=0;
swap=0;
small=0;
ps=0;
pb=0;


    for(i=0;i<10;i++)
    {

        scanf("%d",&a[i]);

    }

 big = a[0];
 small = a[0];
    for(i=0; i<10; i++)
    {
    
        if(small >a[i])
        {
            small = a[i];
            ps =i;
            
        }
    
    }

    for(i=0;i<10;i++)
    {
         if(big <a[i])
         {
             big = a[i];
             pb=i;
         }
    
    }


    swap = a[pb];
    
    a[pb] = a[ps];

    a[ps] = swap;

    for(i=0;i<10;i++)
    {
        printf("%d", a[i]);

    }


}
