/*Program No-P354.c
dt-9-27-2022
Concept-Function-Pointers
Next Program-Read text until '$' is given and Merge the text
---------------------------------------------------------------
Note:

  -Array size is different.
  -Array Length is different.
char c[100] => char  C Array

      c= |null |null |null |null| null| null| null |null |null |null |
 Address  1000  1001  1002   1003  1004  1005  1006  1007  1008  1009

Here in the c Array we did not store any value at very first time and 
each address should have only null value.

char * len(char *pc) -> so, this len function returns the first Address ie 1000 

When the below function runs:

char * len(char *pc)
{

  for(pc;*pc!='\0';pc++);

  return pc;

}


since the array char c[100] did not have value at very first time and having Null in all the Address

 *pc!='\0'

  null!=null

so,that it return the very first Address 1000.



for(pc=len(pc);*pa!='\0';pa++)
{ 
 *pc=*pa;
  pc++;
}

Now the Pc=len(pc) should have the address= 1000

When Run the Merge Two Text Function,user gives the first text - Meera'\0'

so,
1000 = M
1001 = e
1002 = e
1003 = r
1004 = a

pc++ moved the address to 1005

When user gives the second text as - Mohan'\0' for to merge the second text in the char c[] array
1005 = M
1006 = o
1007 = h
1008 = a
1009 = n


when run the program type as below:

cc p354.c

./a.out p354.c

MEERA$MOHAN$

O/p =>MEERAMOHAN

--------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
void read(char *pa);
void merge(char *pa, char *pc);
void display(char *pc);
char * len(char *pc);
int main()
{

    char a[100];
    
    char b[100];
    
    char c[100];
    
        read(a);
        read(b);
        merge(a,c);
        merge(b,c);
        display(c);

}

void read(char *pa)
{
    
    for(;(*pa=getchar())!='$';pa++);
    
    *pa='\0';
        
}

char * len(char *pc)
{
 
  for(pc;*pc!='\0';pc++);
  
  return pc;

}


void merge(char *pa, char *pc)
{
                 
        
    for(pc=len(pc);*pa!='\0';pa++)
    {
                       
        *pc=*pa;
         
         pc++;    
    
    }    
        
 *pc='\0';     
  
}

void display(char *pc)
{

    for(;*pc!='\0';pc++)
    {
    
        putchar(*pc);
        
    }


}




