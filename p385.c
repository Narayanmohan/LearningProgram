/*Program No-P385.c
dt-11-17-2022
Concept-Malloc
Next Program-Area of Circle using Malloc
-----------------------------------------------------------------------------*/
#include<stdio.h>
#include<stdlib.h>
int main()
{

typedef struct areaofcircle
{
    float area;
    int r;

}aoc;



aoc *paoc;

paoc=(aoc *)malloc(sizeof(aoc));


    scanf("%d",&paoc->r);
    
    paoc->area=3.14 *(paoc)->r *(paoc)->r;
    
    printf("Area of Circle =%f",(paoc)->area);


} 	