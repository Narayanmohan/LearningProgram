/*Program No-p260.c
dt-2-21-2022
Concept-Function
Next Program-Product of two real numbers using Function
------------------------------------------------------------*/
#include<stdio.h>

float  prodoftworealnumber(float a, float b);

int main()
{

float firstnumber, secondnumber,p;

printf("Enter First & Second Number");

scanf("%f%f",&firstnumber,&secondnumber);

p=prodoftworealnumber(firstnumber,secondnumber);

printf("Product of Two Real Number is = %f",p);

}


float prodoftworealnumber(float a,float b)
{

    float prod;
    
    prod= a*b;
    
    return prod;


}