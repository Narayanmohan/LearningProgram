/*Program No-P376.c
dt-11-6-2022
Concept-Typedef structure with Function Pointers
Concept-Typecast
Next Program-Read biodata from keyboard and write it to a file until n.name[0]!='$' is given using command Line Argument
------------------------------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
typedef struct biodata
{
    char name[100];
    int age;
    float salary;

}Bio;

int read(Bio *b);

void write(FILE *fp, Bio *b);

int main(int argc, char *argv[])
{

Bio b;

int k;

FILE *fp;

char ch[sizeof(struct biodata)];

    if(argc<2)
    {
        printf("Invalid Argument");
        return 0;
    
    }


   fp =fopen(argv[1],"w");
   
   if(fp==NULL)
   {
       printf("File Opening Error");
       return 0;
   
   }

   k=read(&b);

   while(k==1)
    {
         
     write(fp,&b);       
     
     k=read(&b);
    }
    
fclose(fp);
           
}

int read(Bio *b)
{
  
       scanf("%s",b->name);
        
        while(b->name[0]!='$')
        {
                         
            scanf("%d%f",&b->age,&b->salary);  
               
            return 1;                            
            
        }
        
  return 0;     

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









