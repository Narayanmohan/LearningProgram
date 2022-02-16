/*Program No-p256.c
dt-2-14-2022
Concept-FileHandling with Union
Next Program-Display the nth record with declaring accountnumber inside the structure
---------------------------------------------------------------------------------------------------------------------------------
Example:

if user enters value 1 then first record of biodata will be displayed and First record of Account Number should be displayed.
-------------------------------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main(int argc,char *argv[])
{

int i,j,nthrecord,offset,ctr,offset2;


union Biodata
{
    struct bio
    {
        char name[100];
        int age;
        float salary;
        int accountnumber;
     
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

printf("Enter NthRecord");

scanf("%d",&nthrecord);

offset =(nthrecord-1)*(sizeof(struct bio));

fseek(fp,offset,0);

for(i=0;i< (sizeof(struct bio));i++)
{
    m.ch[i]=getc(fp);

}

offset2=(nthrecord-1)*(sizeof(struct bio));

fseek(fp1,offset2,0);

printf("Name=%s\n Age=%d\n Salary=%f\n",m.b.name,m.b.age,m.b.salary);


      fscanf(fp1,"%d",&m.b.accountnumber);
   
      printf("AccountNumber=%d",m.b.accountnumber);

fclose(fp);

fclose(fp1);
}
