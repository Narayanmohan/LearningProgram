/*Program No-p262.c
dt-2-23-2022
Concept-Function
Next program-Find the Area of circle using Function
------------------------------------------------------------*/
#include<stdio.h>
float aoc(float num1);
int main()
{



    int r;

    float areaofcir;
    
 
    printf("----Enter Value For Radious----\n");
    
    scanf("%d",&r);
   
    areaofcir = aoc(r);
    
    printf("Area of Circle = %f",areaofcir);



}


float aoc(float num1)
{

    float t;
    
    t=3.14 *num1 *num1;

    return t;

}