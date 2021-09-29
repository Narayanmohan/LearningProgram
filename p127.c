/*Program No-p127.c
dt-9-21-2021
Concept: Looping While
Next Program:check the given Pattern Exist or NOT
--------------------------------------------------------------------------------------
Example:
 
           0 1 2  3  4  5  6 7  8  9  10 11 12 
  Input=> [I] [L][O][V][E]  [I][N][D][I][A][\0] 
  
   
  Pattern : LOVE
  
  OUTPUT=> PATTERN EXISTS


     0  1  2  3  4
B=> [L][0][V][E][\0]


NOTE:

 $=> Means, in the last array it occupies "NULL" [ NULL = '\0']
 
 
------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i ,j,k,flag;
char a[100];
char b[100];
flag=0;

i=0;

scanf("%c",&a[i]);

while(a[i]!='$')
{

i++;

scanf("%c",&a[i]);

}
 a[i]='\0';
 
 j=0;
 
 scanf("%c",&b[j]);
 
 while(b[j]!='$')
 {
 
 j++;
 
 scanf("%c",&b[j]);
 
 }
 
 
b[j] = '\0';

i=0;

flag=0;

while(a[i]!='\0')
{

    k=i;
    j=0;
    
    
    while(a[k]==b[j] && b[j]!='\0')
    {
     
     k++;
     j++; 
    
    }


 if(b[j]=='\0')
 {
 
     flag=1;
     
 }


i++;

} 

if(flag==1)
{

  printf("Pattern Exists");

}

else
{
 printf("Pattern does not exist");

}

}