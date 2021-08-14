/*program No p99.c
dt-8-14-2021
CONCEPT- Array
Next Program : Read 10 numbers and find the position of smallest Numbers :
---------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

 int i,a[10],c, ps;
 c=a[0];
 ps=0;
 i=0;

 while(i<10)
 {

  scanf("%d",&a[i]);
  i++;
 
 }
 

i=0;

while(i<10)
{

     if(c>a[i])
     {
     
      c= a[i];
      ps=i;
      i++;
     
     }
    else
    {  
      i++;
    } 

}

printf("%d",ps);


}


 

