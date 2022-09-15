/*Program No-P339.c
dt-9-15-2022
Concept-FunctionPointers
Next Program-Store the Two values and swap the two values using Function Pointers
-----------------------------------------------------------------------------------------------
Note
-Store two values in one function and swap the Two values in another Function.
-Print the values in main after swapping.
-----------------------------------------------------------------------------------------------*/
#include<stdio.h>


void storeTwoValues(int *pa,int *pb);
void swap(int *pa,int *pb);
int *pa,*pb,temp;

int main()
{

    int x,y,z;
    
    storeTwoValues(&x,&y);
    swap(&x,&y);
    printf("pa value= %d,pb value= %d \n",x,y);

}

void storeTwoValues(int *pa,int *pb)
{

    *pa=100;
    
    *pb =7;
}


void swap(int *pa,int *pb)
{
    temp=*pa;
    *pa=*pb;
    *pb=temp;



}