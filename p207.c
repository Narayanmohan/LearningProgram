/*Program No-p207.c
dt-11-26-2021
Concept-Typedef
Next Program- Read and Display a complext number
Formula->a+ib;
----------------------------------------------------------------*/
#include<stdio.h>
int main()
{

typedef struct complex
{
    int a;
    int b;

}Complexx;

Complexx comp;

scanf("%d%d",&comp.a,&comp.b);

printf("%d+i%d",comp.a,comp.b);



}


