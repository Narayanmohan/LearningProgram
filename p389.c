/*Program No-P389.c
dt-11-22-2022
Concept-Malloc with Function Pointers
Next Program-Read and Display biodata using Function Pointers with Malloc
-------------------------------------------------------------------------*/
#include<stdio.h>
#include<stdlib.h>

    typedef struct biodata
    {
        char name[100];
        int age;
        float salary;    
    
    }bio;

void read(bio *pd);

void display(bio *pd);

int main()
{
   
bio *pd;

pd = (bio *)malloc(sizeof(bio));

read(pd);

display(pd);

free(pd);

}

void read(bio *pd)
{

    scanf("%s",pd->name);
    scanf("%d",&pd->age);
    scanf("%f",&pd->salary);
}

void display(bio *pd)
{

    printf("Name:%s\n",pd->name);
    
    printf("Age:%d\n",pd->age);
    
    printf("Salary:%f\n",pd->salary);

}