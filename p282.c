
/*
Program No-p282.c
dt-5-28-2022
Concept-Function
Next Program-Read text and copy to another array
----------------------------------------------------------*/
#include<stdio.h>
void read(char a[100]);
void copy(char a[100],char b[100]);
void display(char a[100]);
int main()
{

   char a[100];

   char b[100];
   
   read(a);
   
   copy(a,b);
   
   display(b);
   

}

void read(char a[100])
{
    int i;
    
    for(i=0;(a[i]=getchar())!='$';i++);
    
    a[i]='\0';
    
}

void copy(char a[100],char b[100])
{
    int j;

    for(j=0;a[j];j++)
    {
    
        b[j]=a[j];
        
    }


}

void display(char b[100])
{
    int k;
    
    for(k=0;b[k];k++)
    {
    
        putchar(b[k]);    

    }


}
