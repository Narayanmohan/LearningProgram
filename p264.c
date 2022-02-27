/*Program No-p264.c
dt-02-25-2022
Concept-Function
Next Program-Find the Volume of Cylinder
-----------------------------------------------------------------------------*/
#include<stdio.h>
float volcyl(float a,float b);
int main()
{
     
    
    float r,h,y;
    
    scanf("%f%f",&r,&h);
          
    y=volcyl(r,h);
    
    printf("%f",y);


}


float volcyl(float a,float b)
{

    float r;
    
    r=3.14*a*a*b;
    
    return r;

}