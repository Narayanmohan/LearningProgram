/*Program No-p289.c
dt-6-19-2022
Concept-Function
Next Program-Read text until $ is given and convert upper to lower
-----------------------------------------------------------------------------------------------*/
#include<stdio.h>
void read(char a[100]);
void convert(char a[100],char b[100]);
void display(char b[100]);

int main()
{

char a[100];

char b[100];

read(a);

convert(a,b);

display(b);


}
void read(char a[])
{

int i;

    for(i=0;(a[i]=getchar())!='$';i++);

    a[i]='\0';


}


void convert(char a[],char b[])
{

int i,j;

    for(i=0,j=0;a[i];i++,j++)
    {
    
        if(a[i]>=65 && a[i]<=90)
        {
    
            b[j]=a[i]+32;
        }
    
        else
        {
    
            b[j] =a[i];
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













