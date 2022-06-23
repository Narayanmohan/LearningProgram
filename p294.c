/*Program No-p294.c
dt-6-22-2022
Concept-Function
Next Program-Read text until $ is given and Display nthline from the mth line
----------------------------------------------------------------------------------------------*/
#include<stdio.h>
void read(char a[100]);
void nthlineFromMthline(char a[100],char b[100]);
void display(char a[100],char b[100],int m,int n);
int n,m;

int main()
{

    char a[100];

    char b[100];

    read(a);

    scanf("%d",&n);

    scanf("%d",&m);

    nthlineFromMthline(a,b);

    display(a,b,m,n);
    

}

void read(char a[])
{

    int i;
    
    for(i=0;(a[i]=getchar())!='$';i++);
    
    a[i]='\0';
    


}


void  nthlineFromMthline(char a[],char b[])
{

    int i,j,po;
    
    for(i=0,j=0,b[j++]=i,j++;a[i];i++)
    {
    
        if(a[i]=='\n')
        {
            po=i+1;
            
            b[j++]=po;
        
        }
    
    
    } 

b[j]=-1;

}

void display(char a[], char b[],int m,int n)
    {

    int i,limit;
    
    limit =0;
    
    limit = b[m+n];
    
    for(i=b[m-1];i<limit && a[i];i++)
    {

        putchar(a[i]);
    
    }



}