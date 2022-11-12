/*Program No-P380.c
dt-11-12-2022
Concept-Dynamic Memory Allocation[malloc()], free 
Next Program-Read text from keyboard and display on the screen
--------------------------------------------------------------------------------------------------
Dynamic Memory Allocation

NOTE

Suppose if user declare int a[10] that means it has fixed size, if we want to resize
we can't.like wise

if user declare char a[100] and in that char Array if user enter string of 5 characters
then remaining space going to waste.

so that Dynamic Memory concept came into picture and when you implement dynamic memory allocation
none of the space will be wasted.

----------------------------------------------------------------------------------------------------*/
#include<stdio.h>
#include<stdlib.h>

int main()
{

    char *pa, *pb;
    int n;
    
        scanf("%d",&n);
        
        pa=(char *)malloc(n);
        
        pb=pa;
        
                for(; (*pa=getchar())!='$';pa++);
                
                *pa='\0';
                
                
                for(;*pb;pb++)
                {
                    putchar(*pb);
                } 

free(pa);

}
