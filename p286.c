/*Program No-p286.c
dt-6-5-2022
Concept-Funtion
Next Program-Read text Until '$' is given and copy the Last Nth Characters
------------------------------------------------------------------------------------------*/
#include<stdio.h>
void read(char a[100]);
void copy(char a[100],char b[100],int num);
void display(char c[100]);
int len(char d[100]);

int num,length;

int main()
{
    
    char a[100];
    char b[100];
    char c[100];
    char d[100];

    read(a);

    scanf("%d",&num);

    len(a);

    copy(a,b,num);
  
    display(b);
    

}


void read(char a[])
{
    
    int i;
 
    for(i=0;(a[i]=getchar())!='$';i++);
        
    a[i]='\0';

}


void copy(char a[],char b[],int num)
{
    
    int i,j;
    
    length=len(a);
    
    a[i]='\0';
        
    for (i=length-num,j=0;a[i];i++,j++)
    {
        
            
            b[j]=a[i];
        
    
    }
  
   b[j]='\0';  
  
   
   
}


void display(char c[])
{
    
    int n;
    
    for(n=0;c[n];n++)
    {
        
        putchar(c[n]);
        
    }

}


int len(char d[])
{
    
    int length;

    int l;

    length =0;
    
    for(l=0;d[l]!='\0';l++)
    {
        
        length= length+1;
        
    }
    
    return length;
    
}
