/*Program No-p216.c
dt-12-15-2021
Concept-File Handling with FEOF(FP)=0
Next Program-Read biodata from the file till end Feof(fp)and display on the screen
---------------------------------------------------------------------------------------
Note - Feof() returns Non-Zero when fp reaches end of the file.

--------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

    typedef struct bio
    {
    
        char name[100];
        int age;
        float salary;    
    
    }Bio;
    
    
Bio b;

FILE *fp;

fp= fopen("Bio1.txt","r");

if(fp==NULL)
{

    printf("File Opening Error");
    return 0;
}

while(feof(fp)==0)
{
    fscanf(fp,"%s%d%f",b.name,&b.age,&b.salary);
    
    printf("%s%d%f",b.name,b.age,b.salary);

}

fclose(fp);


}