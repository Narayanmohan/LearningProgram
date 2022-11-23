/*Program No-P390.c
dt-11-22-2022
Concept-Function Pointers with Malloc
Next Program-Area of Circle using Function Pointers with Malloc
--------------------------------------------------------------------------*/
#include<stdio.h>
#include<stdlib.h>
typedef struct areaofcircle
{

    float area;
    int r;

}aoc;

void read(aoc *paoc);
void calculate(aoc *paoc);
int r;

int main()
{

    aoc *paoc;
    
    paoc=(aoc *)malloc(sizeof(aoc));
    
    read(paoc);

    calculate(paoc);

    printf("Area of Circle = %f",(paoc)->area);

free(paoc);

}

void read(aoc *paoc)
{
    
    scanf("%d",&paoc->r);

}

void calculate(aoc *paoc)
{

    paoc->area=3.14 * (paoc)->r * (paoc) ->r;

}