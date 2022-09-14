/*Program No-p337.c
dt-9-14-2022
Concept-Function Pointer
Next Program-Store the value of a single variable in a function and Display in main
--------------------------------------------------------------------------------------*/
#include<stdio.h>

int *pa;

void displayvalue(int *pa);

int main()
{    
 
 int c;
 
 displayvalue(&c);
 
 printf("%d \n",c);     
      

}    

void displayvalue(int *pa)
{

          
    *pa=100;
  
    
}