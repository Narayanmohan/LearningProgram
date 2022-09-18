/*Program No-P343.c
dt-9-17-2022
Concept-Function Pointers
Concept-Passing Address from the Main Function to Function
----------------------------------------------------------------------------*/
#include<stdio.h>

void aoc(float r, float *acircle);

int main()
{

    float r, acircle,ac;
    
    scanf("%f",&r);
    
    aoc(r,&acircle);
    
    printf("%f",acircle);
    
    

}



void aoc(float r,float *acircle)
{


    *acircle=3.14*r*r;




}