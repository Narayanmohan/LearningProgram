/*Program No-P364.c
dt-10-14-2022
Concept-Structure-Typedef-Function
Next Program-Read and Display a Biodata using Typedef
----------------------------------------------------------------------*/
#include<stdio.h>
typedef struct biodata
{
    char name[100];
    int age;
    float salary;    

}Bio;

void read(Bio b);

void display(Bio b);

int main()
{

    Bio b;
    
    scanf("%s%d%f",b.name,&b.age,&b.salary);
            
    display(b);

}

void read(Bio b)
{

  scanf("%s%d%f",b.name,&b.age,&b.salary);

}

void display(Bio b)
{
    
    printf("Name:%s\n",b.name);
    
    printf("Age:%d\n",b.age);
    
    printf("Salary:%f\n",b.salary);
    
}
