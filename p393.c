/*Program No-393.c
dt-11-26-2022
Concept-Function Pointers[Assign the Entire Function to Pointer Function]
Next Program-Area of Circle using function Pointers
--------------------------------------------------------------------------------------*/
#include<stdio.h>
float area(int r);
int main()
{

    float areaofcir;
    int r;
    
    printf("Enter the Value for Radious\n");
    
    float area();
    
    float (*ptaoc)();
    
    scanf("%d",&r);
    
    ptaoc=area;
    
    areaofcir=(*ptaoc)(r);
    
  printf("The Radious is = %f\n",areaofcir);

}

float area(int r)
{

    return 3.14 * r * r;

}