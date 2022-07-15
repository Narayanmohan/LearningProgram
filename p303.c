/*program No-p303.c
dt-7-14-2022
Concept- Character Array with File Handling(cmd-Line Argument) using Function
Next Program-Read from File and display on the screen using character Array
---------------------------------------------------------------------------------------------------*/
#include<stdio.h>

void read(FILE *fp,char a[100]);

void display(char a[100]);

int main(int argc, char *argv[])
{

    FILE *fp;

    char a[100];
       
        if(argc<2)
        {

            printf("Invalid Argument");
            return 0;

        }
    

   fp= fopen(argv[1],"r");
   
       if(fp==NULL)
       {
           printf("File Opening Error");
           return 0;
            
       }
       
       
   read(fp,a);

   display(a);        
   
   fclose(fp); 


}

void read(FILE *fp,char a[])
{

  int i;
  
  for(i=0;(a[i]=getc(fp))!=EOF;i++);
  
  a[i]='\0';
  
}


void display(char a[])
{
 
 int i;
 
 for(i=0;a[i]!='\0';i++)
 {
   
    putchar(a[i]);
   
 }


}


