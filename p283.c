
/*program No-p283.c
dt-5-30-2022
Concept-Function
Next Program-Read text until '$' is given and copy the first 'Nthcharacter' to Another Array
----------------------------------------------------------------------------------------------------*/
#include<stdio.h>
void read(char a[100]);

void copy(char a[100],char b[100],int nthcha);

void display(char b[100]);

int main()
{

    int nthcha;
    
    nthcha=0;    
    
    char a[100];

    char b[100];


    read(a);
 

    printf("Enter Nthcha as number input\n");
     
    scanf("%d",&nthcha);
  

    copy(a,b,nthcha);
    

    display(b);


}


void read(char a[])
{

    int i;
    

    for(i=0;(a[i]=getchar())!='$';i++);
    

    a[i]='\0';


}


void copy(char a[],char b[],int nthcha)
{

    int j;
    
   
    for(j=0; j<nthcha;j++)
    {
        
        b[j] = a[j];
         
              
    } 
  
       b[j]='\0'; 
     

}


void display(char b[])
{

    int k;
    
     
    for(k=0;b[k]!='\0';k++)
    {
        
        putchar(b[k]);
    
    }


}
















