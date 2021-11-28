/*program No-p202.c
dt-11-24-2021
Concept-Structure within structure
Next program-Read and Display biodata(name,age, salary,address,dob)using struct within struct
dob - data,month,year
------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

    struct address
    {
        char street[100];
        char city[100];
        int pincode;

    
    };

    struct date
    {
        int day;
        int mm;
        int year;
    
    
    };

    struct biodata
    {
        char name[100];
        int age;
        float salary;
        struct date dob;
        struct address addrs;
      
    }bio;
    
    
scanf("%s%d%f%d%d%d%s%s%d",bio.name,&bio.age,&bio.salary,&bio.dob.day,&bio.dob.mm,&bio.dob.year,bio.addrs.street,bio.addrs.city,&bio.addrs.pincode);


printf("\n\t%s\n\t%d\n\t%f\n\t%d\n\t%d\n\t%d\n\t%s\n\t%s\n\t%d",bio.name,bio.age,bio.salary,bio.dob.day,bio.dob.mm,bio.dob.year,bio.addrs.street,bio.addrs.city,bio.addrs.pincode);


/*printf("Name:%s\n",bio.name);
printf("Age:%d\n",bio.age);
printf("Salary:%f\n",bio.salary);
printf("Day:%d\n",bio.dob.day);
printf("Month:%d\n",bio.dob.mm);
printf("Year:%d\n",bio.dob.year);
printf("Street:%s\n",bio.addrs.street);
printf("City:%s\n",bio.addrs.city);
printf("Pincode:%d\n",bio.addrs.pincode); */

}