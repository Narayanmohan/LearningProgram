/*Program No-P381.c
dt-11-12-2022
Concept-Dynamic Memory Allocation(malloc)
Next Program-Read text from keyboard and copy to Another Array(malloc)
-------------------------------------------------------------------------*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{

    char *pa, *pb,*temp, *temp1;

    int n,m;
    
       scanf("%d",&n);
          
        
    pa=temp=(char *)malloc(n);      
    
    pb=temp1=(char *)malloc(strlen(pa)+1);
 
        
        for(; (*pa=getchar())!='$';pa++);
        
        *pa='\0';
         
        
        for(pa=temp;*pa!='\0';pa++)
        {        
            *pb=*pa;
          
             pb++;                                          
              
        } 
          
                 
    
       *pb='\0';
       
       for(pb=temp1;*pb!='\0';pb++)
       {
       
           putchar(*pb);       
       }  
       
       printf("temp1=%ld",strlen(temp1));
       printf("temp=%ld",strlen(temp));
       
       
free(temp);
free(temp1);

}



