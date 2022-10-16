/*Program No-P366.c
dt-10-16-2022
Concept-Typedef-Structure-Function
Next Program-Biggest of 3 Numbers using Typedef Function
-----------------------------------------------------------------*/
#include<stdio.h>
typedef struct Bigof3Num
{

    int a,b,c,t,big3;

}big3ter;

int display(big3ter b3);

int main()
{

    big3ter b3;
    int r;
    
    scanf("%d%d%d",&b3.a,&b3.b,&b3.c);
    
    r=display(b3);
    
    printf("Biggest of 3 Number is=%d",r);

}

int display(big3ter b3)
{

    b3.t=b3.a > b3.b ? b3.a:b3.b;
    
    b3.big3=b3.t > b3.c ?b3.t:b3.c;
    
    return b3.big3;

}