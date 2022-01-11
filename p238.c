/*Program No-p238.c
dt-12-26-2021
concept-FileHandling
NextProgram-Read from file and count number of times the given pattern is exist line by line
----------------------------------------------------------------------------------------------
Note:

cc p238.c

./a.out patterenexist

        }

   printf("line:%d times-%d %s\n " ,++lineno,count,a);

   j=-1;

   if (a[i]='\n')
---------------------------------------------------------------------------------------------
Example :

linebyline file has the following Text as like below:

apple          ball    car        apple       pineapple          mango

pineapple      cat     apple

Baby           God     hat       icecream 



pattern : apple


output:

Line1 - 3 Times

Line2 - 2 Times

Line3 - 0 Times
  

When run the program

cc p238.c

./a.out linebyline

apple$

   
---------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main(int argc, char *argv[])
{

   int i,j,k,count,lineno;

     char a[100];	
     char b[100];

     FILE *fp2;

     if(argc <2)
      {
        printf("Invalid Argument");

        return 0;


      }  

      fp2= fopen(argv[1],"r");

      if(fp2==NULL)
      {

        printf("File Opening Error");

        return 0;

     }



   for(j=0;(b[j]=getchar())!='$';j++);

   b[j]='\0';
   
   lineno=0;

   count=0;

   for(i=0;(a[i]=getc(fp2))!=EOF;i++)
   {
   
       if(a[i]=='\n')
        {
       
          a[i]='\0';
        
  
         for(i=0,count=0;a[i];i++)
         {
    
               for(k=i,j=0;a[k]==b[j]&&b[j]!='\0';k++,j++);
         
           
               if(b[j]=='\0')
               {
                count =count+1;
                   
               }
                       
             
         }     
        
        printf(" LineNo: %d Timesexist = %d,%s\n",++lineno,count,a);           
       
        i=-1;           
      }
   
     
    }

fclose(fp2);

}

          
       




























































