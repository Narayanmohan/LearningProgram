/*Program No-p206.c
dt-11-25-2021
Concept-Typedef with Structure within structure
Next Program-Read and Display bio-data with address & dob using struct within struct and typedef
--------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

 typedef struct address
 {
 
     char street[100];
     char city[100];
     int pincode;
  
 }Addr;
 
 typedef struct date
 {
     int day;
     int mm;
     int year;
  
 }Dob;

typedef struct biodata
 {
     char name[100];
     int age;
     float salary;
     Addr a;
     Dob d;
  
 }Bio;

Bio b;

scanf("%s%s%d%d%d%d%s%d%f",b.a.street,b.a.city,&b.a.pincode,&b.d.day,&b.d.mm,&b.d.year,b.name,&b.age,&b.salary);

printf("Street:%s\n",b.a.street);
printf("City:%s\n",b.a.city);
printf("Pincode:%d\n",b.a.pincode);
printf("Day:%d\n",b.d.day);
printf("Month%d\n",b.d.mm);
printf("Year:%d\n",b.d.year);
printf("Name:%s\n",b.name);
printf("Age:%d\n",b.age);
printf("Salary:%f\n",b.salary);

}