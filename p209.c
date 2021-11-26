/*Program No-p209.c
dt-11-26-2021
Concept-Typedef
Next Program-Sum of Two complex Number
---------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

typedef struct Complex
{

    int a;
    int b;
    int c;
    

}COMPLEX;


COMPLEX comp1,comp2,comp3;


scanf("%d%d%d%d",&comp1.a,&comp1.b,&comp2.a,&comp2.b);

comp3.a = comp1.a+comp2.a;
comp3.b = comp2.a+comp2.b;


printf("Sum of Two Complext Number is = %d+i%d",comp3.a,comp3.b);



}