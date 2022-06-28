/*Program No-p296.c
dt-6-26-2022
Concept-Function
Next program-Delete the pattern
----------------------------------------------------------
Example-

Input- i love india

Input- love

Output- i--india
------------------------------------------------------------

- cc p296.c
- ./a.out p296.c
-mon tue mon tue$tue$ enter
-----------------------------------------------------------*/
#include<stdio.h>
void read(char a[100]);
void deletePattern(char a[100],char b[100],char c[100]);
void display(char c[100]);
int main()
{

char a[100];

char b[100];

char c[100];


read(a);

read(b);

deletePattern(a,b,c);

display(c);

}

void read(char a[])
{

    int i;
    
    for(i=0;(a[i]=getchar())!='$';i++);
    
    a[i]='\0';
    

}


void deletePattern(char a[],char b[],char c[])
{
    
    int i,j,k,l;
    
        
    for(i=0,j=0,l=0;a[i];)

        {
    
        for(k=i,j=0;a[k]==b[j] && b[j]!='\0';k++,j++);
        
            if(b[j]=='\0')
            {
                
                i=k;
            
            }
            
          
            else
            {
      
                c[l]=a[i];
    
                l++;
    
                i++;
     
            
            }
           
                   
        }
        

c[l]='\0';

}



void display(char c[])
{


    int l;


    for(l=0;c[l];l++)
    {
          
        putchar(c[l]);
    
    }


}






