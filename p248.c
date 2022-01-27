/*Program No-p248.c
dt-1-24-2022
Concept-Struture with Union
Concept-File Handling
Next Program-Read bio data from file and display on the screen along with payslip
----------------------------------------------------------------------------------------------------------
When run the script

1-cc p248.c
2-./a.out Anand.txt

-----------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main(int argc,char *argv[])
{
    
    int i;
    float hra;
    float da;
    float pf;
    float netsalary;
    char payslip;


union Biodata
{  
    struct bio
    {
        char name[100];
        int age;
        float  salary;

    }b;

    char ch[sizeof(struct bio)];

};

union Biodata m;

FILE *fp;

if(argc<2)
{
 printf("Invalid Argument");
 return 0;
}

fp=fopen(argv[1],"r");

if(fp==NULL)
{

 printf("File opening Error");
 return 0;

}

for(i=0;i<sizeof(struct bio);i++)
{
 m.ch[i]=getc(fp);

}

hra= m.b.salary*0.1;

da= m.b.salary*0.5;

pf= m.b.salary*0.2;

netsalary = m.b.salary*((hra+da)-(pf));

printf("Name=%s\n Age=%d \nsalary=%f\n",m.b.name,m.b.age,m.b.salary);

printf("\n--------------Payslip----------------------");

printf("\n Hra=%f \n da=%f \n pf=%f \n NetSalary=%f\n ",hra,da,pf,netsalary);


}
