/*Program NO-P367.c
Dt-10-17-2022
Concept-Typedef-Structure-Function
Next Program-Read and Display a bio-data using Typedef structure-Function
-----------------------------------------------------------------------------------*/
#include<stdio.h>
typedef struct biodata
{
    char name[100];
    int age;
    float salary;

}Bio;

void read(Bio *b);

void display(Bio *b);

int main()
{

Bio b;

read(&b);

display(&b);

}


void read(Bio *b)
{

   scanf("%s%d%f",(*b).name,&(*b).age,&(*b).salary);

}

void display(Bio *b)
{

 printf("%s\n",(*b).name);
 
 
 printf("%d\n",(*b).age);
 
 
 printf("%f\n",(*b).salary);

}


