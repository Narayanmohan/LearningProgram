/*Program No-P372.c
dt-10-20-2022
Concept-The Arrow(->) operator exists to access the members of the structure or the unions using pointers.
Concept-Typedef Structure with Function Pointers
Next Program-Area of Circle using Function Pointers with Arrow Operator
---------------------------------------------------------------------------------------------------------------------*/
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

    scanf("%d",&acir->r);

}

void display(aoc *acir)
{

    acir->area = 3.14 * acir->r * acir->r;
    
    printf("%f",acir->area);

}