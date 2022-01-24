/*Program No-p245.c
Concept-UNION
Concept-FileHandling
Next Program-Read biodata from file and display on the screen using Union and Command Line Arguments
-----------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main(int argc, char *argv[])
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

if(argc<2)
{
    
    printf("Invalid Argument");
    return 0;


}

fp =fopen(argv[1],"r");


if(fp==NULL)
{

printf("File Opening Error");
return 0;

}


for(i=0;i<sizeof(struct bio);i++)
{

    m.ch[i] = getc(fp);
}


printf("%s%d%f",m.b.name,m.b.age,m.b.salary);

fclose(fp);

}



















