/* Program No - P21.c
dt 4-15-2021
IF CONTROL STRUCTURE
Biggest of 3 numbers */

#include<stdio.h>
int main()
{

 int a,b,c;
 scanf("%d%d%d", &a,&b,&c);
 
     if(a > b)
         if (a >c)
         
            printf("a is biggest = %d ", a);
            
          else
          
             printf("c is biggest = %d ", c);
          
                  else if(b>c)
                  
                      printf("b is biggest= %d ",b);
                      
                   else 
                       
                      printf("c is biggest = %d ",c);


}