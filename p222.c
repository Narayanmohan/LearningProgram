/*program No-p222.c
dt-12-15-2021
Concept-CommandlineArgument-FileHandling
Next Program- Read biodata from keyboard and write it to a file until b.name[0]!='$' using command line Argument
---------------------------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main( int argc, char *argv[])
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


scanf("%s",b.name);

while(b.name[0]!='$')
{

    scanf("%d%f",&b.age,&b.salary);
    
    fprintf(fp,"%s%d%f",b.name,b.age,b.salary);
    
    scanf("%s",b.name);

}

fclose(fp);


}