/*Program No-p263.c
dt-2-23-2022
Concept-Function
Next Program-Find the Volume of sphere
--------------------------------------------------------------------------------*/
#include<stdio.h>
float vos(float num1);

int main()
{

    int r;

    float volsphere;
    
    printf("---Enter value for Radious---\n");
    
    scanf("%d",&r);
    
    volsphere = vos(r);
    
    printf("Volume of sphere =%f",volsphere);
    
}    


float vos(float num1)
{
    
    float t;
    
    t = (4.0/3.0)*3.14*num1*num1*num1;
    
    return t;


}







