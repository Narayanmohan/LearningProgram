/*Program No-P345.c
dt-9-20-2022
Concept-Function-pointers
Next Program-Find the biggest and Smallest of 3 Numbers
------------------------------------------------------------------------------------------------*/
#include<stdio.h>

void big3(int a, int b,int c, int *big3);

void small3(int a,int b, int c,int *small3);

int main()
{

int x,y,z,a,m;

        scanf("%d%d%d",&x,&y,&z);
    
    
        big3(x,y,z,&a);
        
    
        small3(x,y,z,&m);
        
    
        printf("Biggest Number is=%d Smallest Number is= %d",a,m);

}


void big3(int a,int b,int c,int *big3)
{
    int t;
    
    t=a>b?a:b;
    
    *big3=t>c?t:c;    
    
}

void small3(int a, int b,int c,int *small3)
{

     int s;
    
     s=a<b?a:b;
    
    *small3=s<c?s:c;    

}


