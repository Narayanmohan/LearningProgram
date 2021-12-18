/*Program No-p217.c
dt-12-15-2021
Concept-File Handling
Next Program-Read char from keyboard and write it to the file until '$' is given
------------------------------------------------------------------------------------------
"W"-> if it is a Write mode then we have to give a new filename while running the program,


-----------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

 char a;
 FILE *fp;
 
 scanf("%c",&a);
 
 fp=fopen("Readcha.txt","w");
 
      if(fp==NULL)
      {
      
         printf("File Opening Error");
         return 0;
         
      }
      
 while(a!='$')
 {
 
     fprintf(fp,"%c",a);
     
     scanf("%c",&a);
  
 }     
 

 fclose(fp);     
      
 }

