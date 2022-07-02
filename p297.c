/*Program No-p297.c
dt-6-29-2027
Concept-Function
Next Program-Replace the Pattern
-----------------------------------------------------------------
Input - I Love India

Input - India

Input - America

Output - I Love America
----------------------------------------------------------------*/
#include<stdio.h>
void read(char a[100]);

void replacePattern(char a[100],char b[100],char c[100],char d[100]);

void display(char c[100]);

int main()
{
char a[100];
char b[100];
char c[100];
char d[100];

read(a);
read(b);
read(c);

replacePattern(a,b,c,d);

display(d);

}

void read(char a[])
{
    int i;
    
    for(i=0;(a[i]=getchar())!='$';i++);
    
    a[i]='\0';


}

void replacePattern(char a[],char b[], char c[],char d[])
{


    int i,j,n,m,l;
    
    for(i=0,l=0;a[i];)
    {
 
     
        for(n=i,j=0;a[n]==b[j] && b[j]!='\0';n++,j++);
        
        
            if(b[j]=='\0')
            {
            
                for(i=n,m=0;c[m]!='\0';m++,l++)
                {
                
                    d[l]=c[m];
                    
                }
            
            }
        
            else
            {
                d[l]=a[i];
                l++;
                i++;
            
            }        
    
    
    }
    
    
d[l]='\0';    
}

void display(char d[])
{

    int l;
    
    for(l=0;d[l];l++)
    {
        
        putchar(d[l]);
    
    }


}



