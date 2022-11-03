/*Program No-P375.c
dt-11-2-2022
Concept-Typedef Structure with Function Pointer
Concept-Typecast
Next Program-Read bio data from file character by character and display on the Screen
---------------------------------------------------------------------------------------------------*/
#include<stdio.h>
typedef struct biodata
{

    char name[100];
    int age;
    float salary;
    
}Bio;

void read(FILE *fp,Bio *b);
void display(FILE *fp,Bio *b);

int main(int argc, char *argv[])
{

Bio b;
FILE *fp;

    char ch[sizeof(struct biodata)];
    
        if(argc <2)
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

}

void read(FILE *fp,Bio *b)
{    
    

    fscanf(fp,"%s%d%f",b->name,&b->age,&b->salary);

}

void write(FILE *fp,Bio *b)
{

 int i;
 
 char *px;
 
 px=(char *)b;
 
     for(i=0;i<sizeof(Bio);i++,px++)
     {
         putc(*px,fp);
     
     }




}



