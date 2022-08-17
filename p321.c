/*Program No-p321.c
dt-8-17-2022
Concept-Pointers with CharArray
Next Program-Read text until $ is given and copy the first N characters to another Array
----------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

    char a[100];
    
    char b[100];
    
        char *pa,*pb,*pc;
    
        int i,num;
        
        
            pa=a;
            pb=b;
            
            
                for(pa=a;(*pa=getchar())!='$';pa++);
                
                    *pa='\0';
                    
                    
                        scanf("%d",&num);                   
                                                                                                                          
                        for(i=0,pa=a;i<num,*pa!='\0';i++,pa++)
                        {
                           pc=&pa[num];
                                                        
                           *pb=*pc;

                            pb++;
                            
                        }
                                      
                         

                      *pb='\0';
                                           
                      for(pb=b;*pb!='\0';pb++)
                      {
                                 
                          putchar(*pb);
                              
                      }
                                

}