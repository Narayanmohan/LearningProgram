/*Program No-p292.c
dt-6-19-2022
Concept-Function
Next Program-Read text until $ is given and Store the starting position of each line
--------------------------------------------------------------------------------------------------*/
#include<stdio.h>
void read(char a[100]);
void storestartingpos(char a[100],char b[100]);
void display(char b[100]);

int main()
{
    char a[100];
    char b[100];
    
    read(a);
    
    storestartingpos(a,b);
    
    display(b);


}

void read(char a[])
{

    int i;
    
    for(i=0;(a[i]=getchar())!='$';i++);
    
    a[i]='\0';

}

void storestartingpos(char a[],char b[])
{
    
    int i,j,po;
    
    b[j]=i;

    po=0; 
    
        for(i=0,j=0,b[j++]=i;a[i];i++)
        {
        
            if(a[i]=='\n')
            {
            
              po=i+1;
                                         
              b[j++]=po;  
            
            
            }
        
       }          
        

b[j]=-1;

}

void display(char b[])
{
  
  int j;

   
  for(j=0;b[j]!=-1;j++)
  {
  
      printf("%d",b[j]);    
  
  }


}
