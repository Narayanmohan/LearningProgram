/*Program No-p221.c
dt-12-15-2021
Concept- Command Line Argument
Next Program- Read biodata from file and display on the screen using command line argument
---------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main(int argc, char *argv[])
{

    typedef struct biodata
    {
        char name[100];
        int age;
        float salary;
    
    }Bio;
    
Bio b;

FILE *fp;

    if(argc<2)
    {
    printf("Invalid Arguments");
    return 0;
    }


    fp=fopen(argv[1],"r");
    
    if(fp==NULL)
    {
    
        printf("File Opening Error");
        return 0;
        
        
    }

 fscanf(fp,"%s%d%f",b.name,&b.age,&b.salary);
 
 printf("%s%d%f",b.name,b.age,b.salary);
 
 fclose(fp);


}
