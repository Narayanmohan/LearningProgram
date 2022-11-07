/*Program No-P377.c
dt-11-6-2022
Concept-Typedef Structure with Typecast and Function Pointers
Concept-Typecast
Next Program-Read bio data from File Till End of File ->Feof(fp)and display on screen character by character
---------------------------------------------------------------------------------------------------------------
Note:

When run the program

1-cc p377.c
2-./a.out BI.TXT

Output should be displayed as follow:

RAM
 17
 170000.000000
ANAND
 18
 180000.000000
MOHAN
 19
 190000.000000

--------------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
typedef struct biodata
{

    char name[100];
    int age;
    float salary;
    

}Bio;

void read(FILE *fp,Bio *b);

void display(Bio *b);

int main(int argc, char *argv[])
{

    Bio b;
    FILE *fp;
    
    char ch[sizeof(struct biodata)];
    
        if(argc <2)
        {
            printf("Invalid Argument");
            return 0;
        
        }

        fp=fopen(argv[1],"r");
        
        if(fp==NULL)
        {
        
            printf("File Opening Error");
            return 0;
        }

        
        read(fp,&b);

        while(feof(fp)==0)
        {
        
            display(&b);
            
            read(fp,&b);
        
            
        }    

fclose(fp);
}


void read(FILE *fp,Bio *b)
{

int i;

char *px;

px=(char *)b;

    for(i=0;i<sizeof(Bio);i++,px++)
    {
        *px=getc(fp);

    }

}

void display(Bio *b)
{

   printf("\n%s\n %d\n %f",b->name,b->age,b->salary);

}

