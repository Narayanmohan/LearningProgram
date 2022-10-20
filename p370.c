/*Program No-P370.c
dt-10-19-2022
Concept-Typedef-Structure-FunctionPointers
Next Program-Read Bio-Data from keyboard and Write to File using CMD-Line Argument
---------------------------------------------------------------------------------------
When Run the program Pass the CMD line Argument as below

cc p370.c
./a.out Structbio.txt
cat structbio.txt
---------------------------------------------------------------------------------------*/
#include<stdio.h>
typedef struct biodata
{
    
char name[100];
int age;
float salary;

}Bio;

void read(Bio *b);

void write(FILE *fp,Bio *b);

int main(int argc, char *argv[])
{

    Bio b;
    FILE *fp;
    
        if(argc <2)
        {
            printf("Invalid Argument");
            return 0;
        
        }


fp=fopen(argv[1],"w");

    if(fp==NULL)
    {
        
        printf("File Opening Error");
        return 0;
    
    }
    
read(&b);

write(fp,&b);                                

}

void read(Bio *b)
{

    scanf("%s%d%f",(*b).name, &(*b).age,&(*b).salary);


}

void write(FILE *fp,Bio *b)
{

    fprintf(fp,"%s%d%f",(*b).name,(*b).age,(*b).salary);
}