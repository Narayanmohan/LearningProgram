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
           
           char a[100];
           int age;
           float salary;
       
       
       }b[3];


for(i=0;i<3;i++)
{

    scanf("%s%d%f",b[i].name,&b[i].age,&b[i].salary);
}


for(i=0;i<3;i++)
{

    printf("Name%s\n,Age:%s\n,Salary%s\n",b[i].name,b[i].age,b[i].salary);


}

}
