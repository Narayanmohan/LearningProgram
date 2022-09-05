/*Program No-P332.c
dt-9-4-2022
Concept-Pointers with CharArray
Next Program-Read txt until $ is given and Display the Last Nth line using pointers
------------------------------------------------------------------------------------
Note:

    When Run the program follow the below step:
    
cc p332.c
./a.out p332.c

sun
moon
cartoon
vishnu
brama
Shiv
laddoo$

5

Output should be displayed last 5 lines.

cartoon
vishnu
brama
Shiv
laddoo
------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

    char a[100];
    
    char *pa,*pd;
              
    char *b[100];
    
    int i,LastNLine,ctr;
    
    i=0;
    ctr=0;   
            for(pa=a;(*pa=getchar())!='$';pa++);
            
            *pa='\0';
            
            b[i]=a;
            
            i++;     
     
     
                for(pa=a;*pa;pa++)
                {               
                    if(*pa=='\n')
                    {
                        
                        b[i]=pa+1;
              
                        i++;                    
                    }                       
                           
                }              
                            
                b[i]=NULL;
                
                scanf("%d",&LastNLine);                                        
         
                               
                for(pa=b[i-LastNLine];*pa;pa++)
                {                
              
                    putchar(*pa);
                
                }                

}







