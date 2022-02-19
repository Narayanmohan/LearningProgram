/*Program No-p257.c
dt-2-16-2022
Concept-File Handling
Next Program-Display the Nth record along with payslip
--------------------------------------------------------------------------------------------
Note:

When Execute the Program follow the below steps.

1-cc p257.c
2-./a.out Summer.txt ac.txt
3-Enter 1

--------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main(int argc,char *argv[])
{

int i,nthrecord,offset,offset1,ctr,accountnumber;
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
FILE *fp1;

if(argc<3)
{

    printf("Invalid Argument");
    return 0;

}

fp=fopen(argv[1],"r");
fp1=fopen(argv[2],"r");

if(fp==NULL || fp1==NULL)
{

    printf("File Opening Error");
    return 0;

}

printf("Enter Nthrecord");

scanf("%d",&nthrecord);

offset = (nthrecord-1)*(sizeof(struct bio));

fseek(fp,offset,0);

for(i=0;i<(sizeof(struct bio));i++)
{
m.ch[i]=getc(fp);
}


printf("Name =%s\n Age=%d\n Salary=%f\n",m.b.name,m.b.age,m.b.salary);


hra=m.b.salary*0.1;
da=m.b.salary*0.5;
pf=m.b.salary*0.2;

netsalary = m.b.salary *((hra+da)-(pf));

ctr=0;

while(feof(fp1)==0)
{

ctr =ctr+1;

fscanf(fp1,"%d",&accountnumber);


   if(ctr==nthrecord)
   {
   
       printf("AccountNumber=%d\n,Hra=%f\n  PF=%f\n DA= %f\n Netsalary=%f\n",accountnumber,hra,pf,da,netsalary);
  
   }
}
fclose(fp);
fclose(fp1);

}
