/*Program No-P374.c
dt-11-2-2022
Concept-Typedef-Structure with Function Pointers
Next Program-Read bio-data and write it to the file character by character using Command Line Argument
-------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
typedef struct biodata
{

    char name[100];
    int age;
    float salary;

}Bio;


void read(Bio *b);
void write(FILE *fp, Bio *b);

int main(int argc , char *argv[])
{

    Bio b;
    
    FILE *fp;
    
    char ch[sizeof(struct biodata)];
    
        if(argc <2)
        {
        
            printf("Invaild Argument");
            return 0;
        }

        fp= fopen(argv[1],"w");
        
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

    scanf("%s%d%f",b->name,&b->age,&b->salary);

}

void write(FILE *fp, Bio *b)
{

    int i;
    
    char *px;
    
    px=(char *)b;
    
        for(i=0;i<sizeof(Bio);i++,px++)
        {
        
            putc(*px,fp);
        
        }
        
    




}