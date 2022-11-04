/*Program No-P375.c
dt-11-2-2022
Concept-Typedef Structure with Function Pointer
Concept-Typecast
Next Program-Read bio data from file character by character and display on the Screen
----------------------------------------------------------------------------------------------------
When run the file
1-cc p375.c
2-./a.out BIO.TXT

THEN THE THE BELOW OUTPUT SHOULD BE DISPLAYED.

ANAND
 47
 414744.000000

---------------------------------------------------------------------------------------------------*/
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
            printf("Invalid Arguments");
            
            return 0;
        
        }
        
        fp=fopen(argv[1],"r");
        
            if(fp==NULL)
            {
            
                printf("File Opening Error");
                return 0;
                            
            }
            
read(fp,&b);

display(&b);

}


void read(FILE *fp,Bio *b)
{   
     int i; 
     
     char *px;
     
     px = (char *)b;

     for(i=0;i<sizeof(Bio);i++,px++)
     {
      
       *px=getc(fp);
       
     }
        
            
}

void display(Bio *b)
{
  
     printf("%s \n %d \n %f",b->name,b->age,b->salary);  
   
}

