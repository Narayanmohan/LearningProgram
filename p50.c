/*program No- p50.c
dt-4-18-2021
Next Program Name: Read a single digit number and print it in word
--------------------------------------------------------------------------
Analysis:
    input:num
    output: printitinword
    logic:
        check num==0
                T:print 'zero'
            F: check num==1
                T:print 'one'
            F: check num==2
                T:print 'two'
             -
             -
             -
            F: check num ==9
                T:print 'nine'
                F: Not a single digit and not able to print
-----------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

    int num;
    
    scanf("%d",&num);
        
            if(num==0)
                
                printf("Entered number is zero = %d ",num);

            else if(num==1)
                
                printf("Entered number is one = %d ",num);
                
            else if(num==2)
                
                printf("Entered number is two =%d ",num);
                
            else if(num==3)
                
                printf("Entered number is three =%d ",num);
                
            else if(num==4)
                
                printf("Entered number is four =%d ",num);
                
            else if(num==5)
            
                printf("Entered number is five =%d ",num);
            
            else if(num==6)
                
                printf("Entered number is six =%d ",num);
            
            else if(num==7)
            
                printf("Entered number is seven =%d ",num);
                
            else if (num==8)
            
                printf("Entered number is eight =%d",num);
            
            else if (num==9)
            
                printf("Entered number is nine =%d ", num);
                
            else
                
                printf("Not able to print in word =%d ",num);
            
            
     
                


}                   
                