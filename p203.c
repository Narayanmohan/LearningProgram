/*Program No-p203.c
dt-11-25-2021
Concept-Structure with Array
Next Program-Read and Display three persons bio data using an Array
---------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

            
       struct biodata
       {
           
           char name[100];
           int age;
           float salary;
       
       
       }b[3];

int i;

for(i=0;i<3;i++)
{

    scanf("%s%d%f",b[i].name,&b[i].age,&b[i].salary);
}


for(i=0;i<3;i++)
{

    printf("Name:%s\n  Age:%d\n  Salary%f\n",b[i].name,b[i].age,b[i].salary);


}

}
