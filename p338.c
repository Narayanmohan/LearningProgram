/*Program No-p338.c
dt-9-14-2022
Concept-Function-Pointer
Next Program-Store the value of a two variables in a function and Display in main
--------------------------------------------------------------------------------------*/
#include<stdio.h>
void displayTwoValues(int *pa,int *pb);

int main()
{

    int a,b;
    
    displayTwoValues(&a,&b);

    printf("%d %d \n",a,b);


}

void displayTwoValues(int *pa,int *pb)
{

    *pa=100;
 
    *pb=7;



}

