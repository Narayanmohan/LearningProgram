/*Program No-p223.c
dt-12-15-2021
Concept-File Handling
Next Program-Read bio data from file till end and display on the screen using command line Argument
--------------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main(int argc, char *argv[])
{

typedef struct bio
{

char name[100];
int age;
float salary;
}Bio;

Bio b;

FILE *fp;

    if(argc<2)
    {

    printf("Invalid Argument");
    return 0;

    }

fp =fopen(argv[1],"r");

    if(fp== NULL)
     {
 
     printf("File Opening Error");
     return 0;
     }
 
while(feof(fp)==0)
{
 fscanf(fp,"%s%d%f",b.name,&b.age,&b.salary);
 
 printf("\n%s\n%d\n%f",b.name,b.age,b.salary);


}

fclose(fp);

}