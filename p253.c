/*Program No-p253.c
dt-2-8-2022
Concept-FileHandling with Union
Next Program-Read Account_Number and biodata from keyboard and write it to a file until Account_Number!=-1000
-------------------------------------------------------------------------------------------------------------
Note-

Write Account_Number in file1  and write biodata to file 2


putc - it will print character by character

fprintf-> Function write it on the file as well


When run the program follow the below step:

1-cc p253.c
2-./a.out bi.txt ac.txt

1 for Account Number

MEERA
17
170000

2 for Account Number
Mohanraj
17
170000

-1000 to comeout from the loop.

------------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main(int argc, char *argv[])
{


int AccountNumber,i,j;


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


fp= fopen(argv[1],"w");

fp1=fopen(argv[2],"w");

if(fp==NULL && fp1==NULL)
{
    printf("File Opening Error");

    return 0;

}


scanf("%d",&AccountNumber);


while(AccountNumber!=-1000)
{

fprintf(fp1,"%d\n",AccountNumber);

printf("----Enter the Bio------\n");


scanf("%s%d%f",m.b.name,&m.b.age,&m.b.salary);


for(i=0;i<sizeof(struct bio);i++)
{
    
    putc(m.ch[i],fp);    
}


printf("----Enter the AccountNumber ------\n");

scanf("%d",&AccountNumber);



}
fclose(fp);

fclose(fp1);

}