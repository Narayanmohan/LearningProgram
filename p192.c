/*Program No- p192.c
dt-11-10-2021
Concept- Char Array
Loop- For Loop
Next program - Delete the pattern
----------------------------------------------------------------------------*/
#include<stdio.h>
int main()
    {
    
        int i,j,k,l;
        char a[100];
        char b[100];
        char c[100];
    
                for(i=0;(a[i]=getchar())!='$';i++);
                               
                a[i]='\0';
                
                for(j=0;(b[j]=getchar())!='$';j++);  
    
                b[j]='\0';
                
                for(i=0,j=0;a[i];l++,i++)
                {
            
                    for(k=i,j=0;a[k]==b[j] && b[j]!='\0';k++,j++);
                    
                    
                        if(b[j]=='\0')
                        {
                            i=k;
                            
                        }
                        else
                        {
                            c[l]=a[i];
                        
                        }
                    
                             
                }    
                
                
                    c[l]='\0';
                    
                    for(l=0;c[l];l++)
                    {
                    
                        putchar(c[l]);
                    
                    }
                

    

    }
