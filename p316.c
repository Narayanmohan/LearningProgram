/*Program No-p316.c
dt-8-8-2022
Concept-Pointers
Next Program-Smallest of 3 Numbers using Pointers
------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

    int a,b,c,small3,*pa,*pb,*pc,*psmall3;
        
            
        scanf("%d%d%d",&a,&b,&c);
        
        
       pa=&a;
       
       pb=&b;
       
       pc=&c;
       
       
   
       *psmall3=*pa<*pb?(*pa<*pc?*pa:*pc):*pb<*pc?*pb:*pc;
       
       
       printf("Smallest of 3 Number is = %d \n",*psmall3); 
    







}