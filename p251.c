/*Program No-p251.c
dt-1-27-2022
Concept-Union
Concept-File Handling
Next Program-Display the nth line record along with payslip
-----------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main(int argc, char *argv[])
{

int i,nthrecord,offset;
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
        float salary;
    
    
    
    }b;
    
    char ch[sizeof(struct bio)];

};


union Biodata m;

FILE *fp;

if(argc<2)
{
    printf("Invaid Arguments");
    return 0;
}


fp = fopen(argv[1],"r");


if(fp==NULL)
{

    printf("File Opening Error");
    return 0;

}

scanf("%d",&nthrecord);


offset =(nthrecord-1)*(sizeof(struct bio));


fseek(fp,offset,0);


for(i=0;i<sizeof(struct bio);i++)
{

    m.ch[i] =getc(fp);
}

hra= m.b.salary*0.1;


da = m.b.salary*0.5;


pf = m.b.salary*0.2;


netsalary= m.b.salary*((hra+da)-(pf));


printf("Name =%s\n Age= %d\n Salary = %f\n",m.b.name,m.b.age,m.b.salary);


printf("\n------------------PAYSLIP--------------------------------------");


printf("Hra=%f\n da=%f\n pf=%f\n Netsalary =%f\n",hra,da,pf,netsalary);

fclose(fp);

} 
