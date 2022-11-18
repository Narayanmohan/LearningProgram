/*Program No-P384.c
dt-11-17-2022
Concept-Malloc
Next Program-Read and Display a biodata
---------------------------------------------------------*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
  typedef struct biodata
  {
    char name[100];
    int age;
    float salary;     
 
  }bio;  

  
bio *pd; // Here bio is the type and *pd is the pointer variable.

  
pd=(bio * ) malloc(sizeof(bio));


scanf("%s",pd->name);
scanf("%d",&pd->age);
scanf("%f",&pd->salary);


printf("Name:%s\n",pd->name);
printf("Age:%d\n",pd->age);
printf("Salary:%f\n",pd->salary);

free(pd);
}

