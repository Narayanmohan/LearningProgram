/*Program No-p314.c
dt-8-7-2022
Concept-Pointers
Next Program-Product of Two Real Numbers
-----------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

  float a, b,*pa,*pb,*pc;
      
               
              scanf("%f",&a);           
              
              pa=&a;         
              
       

              scanf("%f",&b);
              
              pb=&b;
              
          

             *pc= *pa * *pb;
               

             printf("%f",*pc);          


}