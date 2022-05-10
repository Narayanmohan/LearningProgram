/*Program No-p273.c
dt-5-9-2022
concept-Function
Next Program-Find the Position of biggest and position of smallest  in the array
--------------------------------------------------------------------------------------*/
#include<stdio.h>
void Read(int a[]);
int posBig(int b[]);
int possmall(int d[]);
int main()
{
int a[10],s,z;

Read(a);

s=posBig(a);

z=possmall(a);

printf("BiggestNumber's position in the Array is = %d\n ,SmallestNumber's position in the Array is =%d\n",s,z);

}


void Read(int a[])
{

    int i;
    
    for(i=0;i<10;i++)    
    {
    
        scanf("%d",&a[i]);
    
    }

    
}

int posBig(int b[])
{

 int j,BiggestposinArray,v;

 v=b[0];
 
 BiggestposinArray = 0;

for(j=0;j<10;j++)
{

    if(v< b[j])
    {
   
      v =b[j];
     
     BiggestposinArray = j;    
     
    }

}

return BiggestposinArray;
 
}


int possmall(int d[])
 {

   int k,smallestposinArray,f;

   f = d[0];
   
   smallestposinArray =0;

     for(k=0;k<10;k++)
     {

        if(f > d[k])
        {
 
          f=d[k];  

          smallestposinArray =k;
  
  
  
        }

    } 
     return smallestposinArray;
    

}


