/*Program No-p274.c
dt-5-10-2022
Concept-Function
Next Program - Interchange biggest and smallest number in the array
-------------------------------------------------------------------------------------*/
#include<stdio.h>
void Read(int a[]);// Function Definition
int Big(int b[]);// Function Definition
int small(int c[]); // Function Definition
void Interchange(int m[],int posbig,int possmall);// Function Definition
void Display(int p[]);// Function Definition
int main()
{

int a[10];

int g,h,v;

Read(a);

g=Big(a);

h=small(a);

Interchange(a,g,h);

Display(a);


}


void Read(int a[])
{

int i;

for(i=0;i<10;i++)
{

    scanf("%d",&a[i]);

}


}

int Big(int b[])
{

 int Biggestnum,j,pb;
 
 Biggestnum = b[0]; 
 
 pb =0;
  
 for(j=0;j<10;j++)
 {
        
       if(Biggestnum < b[j])
       {     
    
           Biggestnum = b[j];  
           pb = j;    	
       }
       
 } 
 
 return pb; 

}


int small(int c[])
{

int smallestnum,k,ps;

smallestnum = c[0];

ps =0;

for(k=0;k<10;k++)
{
    if(smallestnum > c[k])
    {
    
        smallestnum = c[k];
        ps = k;

    }

}

return ps;

}


void Interchange(int m[],int posbig,int possmall)
{


 int swap;
 
 swap = m[posbig];
 
 m[posbig]=m[possmall];
 
 m[possmall]=swap;

 
}

void Display(int p[])
{

  int l;
  
  for(l=0;l<10;l++)
  {
     printf("%d",p[l]);
  
  }


}