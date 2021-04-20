/* Program No-  p21.c
dt 4-15-2021
If control structure
Smallest of three numbers */

#include<stdio.h>
int main()
{

    int a, b, c;

    scanf("%d%d%d",&a,&b,&c);
    
    if(a<b)
        if(a<c)
            printf(" a is smallest = %d ", a);
        else
            printf( " c is smallest =%d ", c);

              else if(b<c)
              
                   printf(" b is smallest = %d ", b);
                   
              else
              
                  printf(" c is smallest = %d ", c);



}
