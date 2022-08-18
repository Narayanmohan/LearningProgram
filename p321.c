/*Program No-p321.c
dt-8-17-2022
Concept-Pointers with CharArray
Next Program-Read text until $ is given and copy the first N characters to another Array
-----------------------------------------------------------------------------------------------
When Run the Program follow the below step
1-cc p321.c
2-./a.out p321.c
3-I LOVE USA$
4-3

OUTPUT SHOULD BE=> I L

----------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

    char a[100];
    
    char b[100];
    
        char *pa,*pb;
    
        int num;
        
        
            pa=a;
            pb=b;
            
            
                for(pa=a;(*pa=getchar())!='$';pa++);
                
                    *pa='\0';
                    
                    
                        scanf("%d",&num);                   
                                                                                                                          
                        for(pa=a;pa<(a+num);pa++)
                        {
                                                                                   
                           *pb=*pa;

                            pb++;
                            
                        }
                                
                         

                      *pb='\0';
                                           
                      for(pb=b;*pb!='\0';pb++)
                      {
                                 
                          putchar(*pb);
                              
                      }
                                

}