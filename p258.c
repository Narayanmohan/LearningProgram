/*Program No-p258.c
dt-2-19-2022
Concept-FileHandling
Next Program-Edit the Nth Record.
-----------------------------------------------------------------------------------------------------------
Note:

    1-Display the nth record
    2-Update  the nth record


While running the script:
1-cc p258.c
2-./a.out Summer.txt ac.txt

Try to Modify the name in the bio data and try to change the account number in the accountnumber file.

After that cat Summer.txt 
After that cat ac.txt
Look for the Modified value.
------------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main(int argc, char *argv[])
{

    int i,nthrecord,offset,ctr,accountnumber;
    
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

fp= fopen(argv[1],"r+");

fp1=fopen(argv[2],"r+");

if(fp==NULL || fp1==NULL)
{
    printf("File Opening Error");
    return 0;
}

printf("Enter NthRecord");

scanf("%d",&nthrecord);

offset=(nthrecord-1)*(sizeof(struct bio));

fseek(fp,offset,0);

for(i=0;i<(sizeof(struct bio));i++)
{
    m.ch[i]=getc(fp);
}


printf("Name=%s\n Age=%d\n Salary=%f\n",m.b.name, m.b.age,m.b.salary);

printf("--Enter Name - Age - Salary------\n");


scanf("%s%d%f",m.b.name,&m.b.age,&m.b.salary);

fseek(fp,offset,0);
for(i=0;i<(sizeof(struct bio));i++)
{

 putc(m.ch[i],fp);
 
}

hra=m.b.salary*0.1;

da=m.b.salary*0.5;

pf=m.b.salary *((hra+da)-(pf));
 
ctr=0;

while(feof(fp1)==0)
{

 ctr=ctr+1;
 
 fscanf(fp1,"%d",&accountnumber);
 
  if(ctr==nthrecord)
  {

    printf("Enter AcountNubmer\n");
       
    scanf("%d",&accountnumber);
    
    fprintf(fp1,"%d",accountnumber); 
   
    printf("AccountNumber=%d\n HRA=%f\n PF=%f\n,DA=%f\n Netsalary=%f\n",accountnumber,hra,pf,da,netsalary);
  
  }

}  
fclose(fp);
fclose(fp1);

}





































