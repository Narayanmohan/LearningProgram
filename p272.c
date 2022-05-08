/*program No-p272.c
dt-5-6-2022
Concept-Function
Next Program-Find the biggest of ten numbers 
--------------------------------------------------------*/
#include<stdio.h>
void Read(int a[]);
int Bigten(int b[]);
int main()
{

int a[10],s;

Read(a);  

s=Bigten(a); 

printf("%d",s);

}

void Read(int a[])
{
    int i;
   
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }


}

int Bigten(int b[])
{

    int j,Biggest;
    
    Biggest=b[0];


    for(j=0;j<10;j++)
    {
     
      if(Biggest < b[j])
      {
        Biggest=b[j];
     
        }
    }

return Biggest;
    
}