/*Program No p201.c
dt-11-24-2021
Concept-Structure within Structure
Next program-Read and Display the bio-data using struct within struct
--------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{
    struct address
    {
    
        char street[100];
        char city[100];
        int pincode;
    
    };
    
    
    struct biodata
    {
        char name[100];
        int age;
        float salary;
        struct address addrs;
    
    
    
    }bio;
    



scanf("%s%d%f%s%s%d",bio.name,&bio.age,&bio.salary,bio.addrs.street,bio.addrs.city,&bio.addrs.pincode);


printf("\n%s",bio.name);
printf("\n%d",bio.age);
printf("\n%f",bio.salary);
printf("\n%s",bio.addrs.street);
printf("\n%s",bio.addrs.city);
printf("\n%d",bio.addrs.pincode);




}