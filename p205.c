/*Program No-p205.c
dt-11-25-2021
Concept-Typedef
Next Program-Read and Display biodata with address and dob using type-def
--------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

    struct biodata
    {
    
        char name[100];
        int age;
        float salary;
    
    };

typedef struct biodata Bio;

Bio b;


struct address
{
    char street[100];
    char city[100];
    int pincode;

};

typedef struct address Addr;

Addr a;


struct date
{
    int day;
    int mm;
    int year;

};
typedef struct date Dob;

Dob d;


scanf("%s%d%f%s%s%d%d%d%d",b.name,&b.age,&b.salary,a.street,a.city,&a.pincode,&d.day,&d.mm,&d.year);


printf("Name:%s\n",b.name);
printf("Age:%d\n",b.age);
printf("Salary:%f\n",b.salary);
printf("Street:%s\n",a.street);
printf("City:%s\n",a.city);
printf("Pincode:%d\n",a.pincode);
printf("Day:%d\n",d.day);
printf("MM:%d\n",d.mm);
printf("YEAR:%d\n",d.year);

}