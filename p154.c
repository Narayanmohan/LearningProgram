/*Program No- p154.c
dt-10-17-2021
Loop Concept- For Loop
Concept - Array in For Loop
Next Program-Read 10 numbers and Interchange the second biggest and second smallest number
------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i,fbig,sbig,fbp,sbp,fsmall,ssmall,fsp,ssp,a[10],swap;

for(i=0;i<10;i++)
{

    scanf("%d",&a[i]);

}


    fbig = a[0];
    for(i=0;i<10;i++)
    {
    
        if(fbig<a[i])
        {
            fbig = a[i];
            fbp =i;
        
        }
    
    }	


    fsmall = a[0];
    
    for(i=0;i<10;i++)
    {
        if(fsmall > a[i])
        {
        
            fsmall = a[i];
            fsp = i;
        
        }
    
    }
    
    
    sbig= fsmall;
    for(i=0;i<10;i++)
    {
    
        if(sbig<a[i] && a[i]!=fbig)
        {
         
         sbp =i;
        
        }
    
    
    }
    
    ssmall = fbig;
    
    for(i=0;i<10;i++)
    {
    
        if(ssmall >a[i] && a[i]!=fsmall)
        {
        
            ssmall = a[i];
            ssp= i;
                
        }
        
    }
    
     swap = a[sbp];
     a[sbp]= a[ssp];
     a[ssp]= swap;
     
     
    for(i=0;i<10;i++)
    {
    
        printf("%d",a[i]);
    
    } 
        

}
