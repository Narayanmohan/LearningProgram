/*Program No-p293.c
dt-6-22-2022
Concept-Function
Next Program-Read text until $ is given and Display nth line
-----------------------------------------------------------------------------*/
#include<stdio.h>
void read(char a[100]);
void storeStartingPos(char a[100],char b[100]);
void display(char a[100],char b[100],int n);

int n;

int main()                                                                                             
{

char a[100];

char b[100];

read(a);

scanf("%d",&n);

storeStartingPos(a,b);

display(a,b,n);

}


void read(char a[])
{

    int i;
    
    for(i=0;(a[i]=getchar())!='$';i++);
    
    a[i]='\0';


}




void storeStartingPos(char a[],char b[])
{
    int i,j,n,po;
    
    b[j]=i;
    
    po =0;
    
    for(i=0,j=0,b[j++]=i;a[i];i++)
    {
    
    
        if(a[i]=='\n')
        {
        
            po=i+1;

            b[j++] = po;
        
        }
   
    
    }

b[j]=-1;

}

void display(char a[],char b[],int n)
{

    int i;
    
    for(i=0,i=b[n-1];a[i]!='\n'&& a[i];i++)
    {
    
        putchar(a[i]);
    
    }



}












