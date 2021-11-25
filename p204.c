/*Program No-p204.c
dt-11-25-2021
Concept- Typedef
Next Program -Read and Display bio-data using type-def
-------------------------------------------------------------------------
Meaning:
    We create New Data Type Names
    
------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

 typedef struct biodata
 {
 
     char name[100];
     int age;
     float salary;
 
 
 }Bio;      /*CamelCase */

Bio b;      /*-----Varialble---- */

scanf("%s%d%f",b.name,&b.age,&b.salary);

printf("Name:%s\n",b.name);
printf("Age:%d\n",b.age);
printf("Salary:%f\n",b.salary);


}    