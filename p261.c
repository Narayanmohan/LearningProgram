/*Program No-p261.c
dt-2-22-2022
Concept-Function
Next Program-Find the biggest of Three numbers using Function and Ternary Operators
------------------------------------------------------------------------------------*/
#include<stdio.h>

int big3(int a,int b, int c);

int main()
{

int fn,sn,tn,r;

printf("---Enter value for fn,sn,tn---\n");

scanf("%d%d%d",&fn,&sn,&tn);

r = big3(fn,sn,tn);

printf("Biggest of Three Number is = %d\n",r);

}

int big3(int a, int b, int c)
{

    int t,s;
    
    t= a>b?a:b;
    
    s = t>c?t:c;
    
    return s;

    

}