/*Program No-p249.c
dt-1-25-2022
Concept-Union
Concept-File Handling Using Command Line Argument
Next Program-Read bio data from the file and display on the screen along with payslip until feof(fp)==0 using union and command Line Argument
---------------------------------------------------------------------------------------------------------------------------------------------*/
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
        float salary;
   
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

fp= fopen(argv[1],"r");

    if(fp==NULL)
    {
        
        printf("File Opening Error");

        return 0;
    
    }

while(feof(fp)==0)
{
      
    for(i=0;i<sizeof(struct bio);i++)
    {
    
        m.ch[i] = getc(fp);
    }
    
       
 hra=m.b.salary*0.2;

 da=m.b.salary*0.5;

 pf=m.b.salary*0.2;
 

netsalary = m.b.salary *((hra+da)-pf);


printf("\n Name=%s Age=%d\n  Salary=%f\n----- PAYSLIP------ \n HRA=%f\n da=%f\n,pf=%f\n Netsalary=%f\n", m.b.name,m.b.age,m.b.salary,hra,da,pf,netsalary);    

}

fclose(fp);
}  
   
