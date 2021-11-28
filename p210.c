/*Program No- p210.c
dt-11-26-2021
Concept-Typedef with Structure
Next Program-Product of Two Complex Number
----------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

    typedef struct Complex
    {
    
        float a;
        float b;
          
    
    }COMPLEX;


COMPLEX comp1,comp2,mul;


scanf("%f%f",&comp1.a,&comp1.b);
scanf("%f%f",&comp2.a,&comp2.b);


mul.a= comp1.a*comp2.a - comp1.b*comp2.b;

mul.b = comp1.a*comp2.b+comp2.a*comp1.b;



printf("Product of two Complex Number is = %0.2f+i%0.2f",mul.a,mul.b);


}