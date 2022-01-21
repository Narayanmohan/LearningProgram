/*program No-p244.c
dt-1-20-2022
Concept-UNION with File Handling
Next Program-Read bio-data from the keyboard and write it to the file using Union and Command Line Argument
----------------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main(int argc,char *argv[])
{
    
    int i;

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

scanf("%s%d%f",m.b.name,&m.b.age,&m.b.salary);


for(i=0;i<sizeof(struct bio);i++)
{
    
    putc(m.ch[i],fp);

}

fclose(fp);
}

