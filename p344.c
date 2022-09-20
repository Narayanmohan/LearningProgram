/*Program No-P344.c
dt-9-20-2022
Concept-Function Pointers
Concept-Passing The address from the Main to Function
Next Program-Biggest of 3 Numbers
--------------------------------------------------------------------------*/
#include<stdio.h>

void big3(int a,int b,int c, int *big3);

int main()
{

int x,y,z,p;

scanf("%d%d%d",&x,&y,&z);


big3(x,y,z,&p);


printf("Biggest of 3 Number is = %d",p);


}

void big3(int a, int b,int c,int *big3)
{

    int t;
    
    t=a>b?a:b;
    
    *big3=t>c?t:c;


}
