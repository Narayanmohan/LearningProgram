/*Program No-p214.c
dt-14-14-2021
Concept-File Hangling
Next Program - Read biodata from file and display on the screen 
-------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

    typedef struct biodata
    {
    
        char name[100];
        int age;
        float salary;
        
    }Bio;
    
    Bio b;
    

FILE *fp;



fp = fopen("Bio1.txt","r");


    if(fp==NULL)
    {
        printf("File Opening Error");
        return 0;
    }


fscanf(fp,"%s%d%f",b.name,&b.age,&b.salary);

printf("%s%d%f",b.name,b.age,b.salary);

fclose(fp);





}
