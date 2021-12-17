/*program No-p220.c
dt-12-15-2021
Concept-Command Line Argument
Next Program-Read biodata from keyboard and write it to the file using command line Argument
---------------------------------------------------------------------------------------------------
Introduction:
 - We pass the value before the program begins execute
 

int main(int argc , char *argv[])

1-argc -> count of argument

2-argv[0] ->p220.c (ie. file name)
3-argv[1] ->biodata.txt
----------------------------------------------------------------------------------------------------

When Execute follow the below steps:

 -  cc p220.c
 - ./a.out Bio2.txt
 - joe Bio2.txt

---------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main(int argc , char *argv[])
{

    typedef struct biodata
    {
    
        char name[100];
        int age;
        float salary;
        
    }Bio;
    
Bio b;


FILE *fp;

if(argc < 2)
{
    printf("Invalid Argument");
    return 0;
    
}

fp = fopen(argv[1],"w");

 if(fp==NULL)
 {
 
  printf("File Opening Error");
  return 0;    
 
 }

scanf("%s%d%f", b.name,&b.age,&b.salary);

fprintf(fp,"%s%d%f",b.name,b.age,b.salary);
fclose(fp);

}