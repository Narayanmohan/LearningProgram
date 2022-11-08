/*Program No-P379.c
dt-11-7-2022
Concept-Typedef with structure and with Funtion Pointers
Concept-Typecast
Next Program-Read from file and Edit the Nth Record using Function Pointers
----------------------------------------------------------------------------------------------
When Run
cc p379.c
./a.out BI.TXT

ENTER - 1 FOR FIRST RECORDS TO BE EDITED.

ENTER ONE MORE BIO DATA AS LIKE BELOW
MANGO
47
457777

After that cc p377.c
./a.out BI.TXT

YOU COULD SEE THE FIRST RECORD MODIFIED WITH MANGO.
---------------------------------------------------------------------------------------------*/
#include<stdio.h>
typedef struct biodata
{
    char name[100];
    int age;
    float salary;

}Bio;

void read(FILE *fp, Bio *b);

void displaynthrecord(Bio *b);

void write(FILE *fp,Bio *b);

int main(int argc, char *argv[])
{

    Bio b;
    FILE *fp;
    
    int nthrecord, offset;
    
    if(argc<2)
    {
        printf("Invalid Argument");
        return 0;
    
    }

    fp=fopen(argv[1],"r+");
    
    if(fp==NULL)
    {
        printf("File Opening Error");
        return 0;
        
    }
    
    scanf("%d",&nthrecord);
    
    offset=(nthrecord-1)*sizeof(Bio);
    
    fseek(fp,offset,0);
    
    read(fp,&b);
    
    displaynthrecord(&b);
    
    scanf("%s%d%f",b.name,&b.age,&b.salary);
    
    fseek(fp,offset,0);

    write(fp,&b);
    
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

void displaynthrecord(Bio *b)
{

    printf("\n%s\n%d\n%f",b->name,b->age,b->salary);

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

   
    