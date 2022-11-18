/*Program No-P386.c
dt-11-18-2022
Concept-Malloc
Next Program-Biggest of three numbers using Malloc
----------------------------------------------------------------------*/
#include<stdio.h>
#include<stdlib.h>
int main()
{

typedef struct bigof3num
{
    int a,b,c,t,big3;

}big3;

big3 *b3;


b3=(big3 *)malloc(sizeof(big3));


scanf("%d",&b3->a);
scanf("%d",&b3->b);
scanf("%d",&b3->c);


b3->t=b3->a > b3->b ? b3-> a: b3 -> b;

b3->big3=b3->t > b3->c ? b3->t:b3->c;

printf("Biggest of 3=%d",b3->big3);

free(b3);

}