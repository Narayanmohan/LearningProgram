/*Program No-P394.c
dt-11-27-2022
Concept-Assign the Function to the Pointer
Next Program - Find the number is even or Not using Function Pointers
-------------------------------------------------------------------------------------*/
#include<stdio.h>
int evenornot(int num);
int main()
{

    int a,b;
    
    printf("Enter Number to test Even or odd \n");
    
    int evenornot();
    
    int (*ptevenornot)();    
     
        
    scanf("%d",&a);
    
    ptevenornot = evenornot; 
       
    b =evenornot(a);  
    
    
        if(b==1)
        {
        
            printf("Entered Number is Even Number \n");           
        
        }
        else
        {
        
            printf("Entered Number is odd Number \n");
        
        }
        
}

int evenornot(int num)
{

    int flag;
    
        if(num%2==0)
        {
            flag=1;
        
        }
        else
        {
        
            flag=0;
        }
    
return flag;

        
}




