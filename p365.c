/*Program No-P365.c
dt-10-15-2022
Concept-TypeDef-Structure-Function
Next Program-Area of Circle using Typedef Structure using Function
--------------------------------------------------------------------

Note:

Here we can not user read function because it is pass by Value
so we used only scanf function.

-------------------------------------------------------------------*/
#include<stdio.h>
typedef struct areaofcircle
{

    float area;
    int r;

}aoc; 

void read(aoc ao);

float displayAoc(aoc ao);

int main()
{
    aoc ao;

    float ac;
    
    scanf("%d",&ao.r);    
    
    ac = displayAoc(ao);
   
    printf("Area of Circle=%f",ac);
                        
}
   


float displayAoc(aoc ao)
{
        
    ao.area=3.14* ao.r * ao.r;    
    
    return ao.area;    
    
}

