/*Program No-P341.c
dt-9-15-2022
Concept-Function Pointers
Next program- Area of Circle using Function Pointers
----------------------------------------------------------------------*/
#include<stdio.h>

float aoc(float *fp);

int main()
{

    float x,a;    

    x = aoc(&x);

    printf("Area of Circle is = %f \n",x);

}

float aoc(float *fp)
{


 float t;
 
 *fp =7;
 
 t= 3.14* *fp * *fp;

 return t;

}
