/*Program No-P368.c
dt-10-18-2022
Concept-Typedef-Structure-FunctionPointers
Next Program-Area of Circle
---------------------------------------------------------------------*/
#include<stdio.h>
typedef struct areaofcircle
{

    float area;
    int r;
}aoc;

void read(aoc *acir);
void display(aoc *acir);

int main()
{

aoc acir;

read(&acir);

display(&acir);

}

void read(aoc *acir)
{
    scanf("%d",&(*acir).r);

}

void display(aoc *acir)
{

 (*acir).area = 3.14* (*acir).r * (*acir).r;
 
  printf("%f",(*acir).area);

}

