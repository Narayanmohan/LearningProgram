/*Program No-p313.c
dt-8-4-2022
Concept-Pointers
Next Program-Sum of Two numbers using pointers
-----------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

    int a,b,*pa,*pb,*pc;
    
    pa=&a;
    pb=&b;
    
    
        scanf("%d",pa);
    
        scanf("%d",pb);
    
    *pc = *pa+*pb;
    
    printf("%d",*pc);




}