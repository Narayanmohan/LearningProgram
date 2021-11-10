/*Program No-p190.c
dt-11-10-2021
Concept-Char Array
Loop-For Loop
Next Program-Check the given Pattern exist
---------------------------------------------------------------------------------------------------------
Example:

Input -> I love India

Pattern - > love

Output- > Pattern Exist

     
      0 1  2 3  4  5  6 7  8  9 10 11
a- > [I] [L][O][V][E]  [I][N][D][I][A]
        S            S    
        
        
        
B-> [L][O][V][E][\0]        
     0  1  2  3  4
 
 
 NOTE:
 After Entering love we are giving '$' to exist. ie.$ means in the array it should display '\0'
 '\0'  = NULL
---------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i,j,k,flag;

char a[100];
char b[100];

for(i=0;(a[i]=getchar())!='$';i++);

a[i]='\0';


for(j=0;(b[j]=getchar())!='$';j++);

b[j]='\0';


       for(i=0,flag=0;a[i];i++)
        {
         
          for(k=i,j=0;a[k]==b[j]&&b[j]!='\0'; k++,j++);
 
 
          if(b[j]=='\0')
           {
     
           flag =1;
      
           }

       }   
          if(flag==1)
          {
   
           printf("\n%d Pattern Exist",flag);
    
          } 
   
          else
          {
    
           printf("\n%dPattern does not exist",flag);
    
         }
       

} 






















