/*program No p208.c
dt-11-26-2021
Concept-Typedef
Next Program - Read and Display two complex Numbers
-------------------------------------------------------------*/
#include<stdio.h>
int main()
{

typedef struct complex
{
    int a;
    int b;
    
}COMPLEX;

COMPLEX comp1,comp2;


scanf("%d%d%d%d",&comp1.a,&comp1.b,&comp2.a,&comp2.b);


printf("\n%d+i%d",comp1.a,comp1.b);


printf("\n%d+i%d",comp2.a,comp2.b);



}