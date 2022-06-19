/*Program No-p290.c
dt-6-19-2022
Concept-Function
Next Program-Read text until $ is given and convert comma to semicolon
--------------------------------------------------------------------------------------*/
#include<stdio.h>
void read(char a[100]);
void convertsemi(char a[100],char b[100]);
void display(char b[100]);

int main()
{
    char a[100];
    char b[100];
    
    read(a);

    convertsemi(a,b);

    display(b);


}

void read(char a[])
{
    int i;

    for(i=0;(a[i]=getchar())!='$';i++);
    
    a[i]='\0';
   

}


void convertsemi(char a[], char b[])
{

    int i,j;
    
    for(i=0,j=0;a[i];i++,j++)
    {
    
        if(a[i]==',')
        {
            b[j]=';';
        
        } 
        else
        {
        
            b[j] = a[i];
        }
        
    }

b[j]='\0';


}

void display(char b[])
{


    int j;
    
    for(j=0;b[j];j++)
    {
    
        putchar(b[j]);
    
    }


}











