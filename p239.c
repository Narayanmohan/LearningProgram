/*Program No-p239.c
dt-1-7-2022
Concept-File Handling
Next Program-Read from file and delete the given pattern if exist line by line
--------------------------------------------------------------------------------------------------
Example:

The patternexist file has the following

MOON
MEERA
SUN
MEERA

1- cc p239.c
2-./a.out patternexist
3-MEERA$


OUTPUT SHOULD BE:

MOON
SUN

NOTE:


In for loop if we have a[i] => that means a[0] so a[0] = M

so, the condition a[i] is non zero so the condition is true or 

we make a[i]!='\0';  this also correct.


---------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main(int argc,char *argv[])
{

    int i,lineno,j,k,l;
    
    char a[100];

    char b[100];

    char c[100];
    
    FILE *fp2;
    
    
    if(argc < 2)
    {
    
        printf("Invaild Argument");
        return 0;
        
    
    }
    
    
    
    fp2 = fopen(argv[1],"r");
    
    if(fp2== NULL)
    {
        
        printf("File Opening Error");

        return 0;
    
    }
    
    for(j=0;(b[j]=getchar())!='$';j++);

    b[j]='\0';
    
  
    
    l=0;
    for(i=0;(a[i]=getc(fp2))!=EOF;i++)
    {
                
                if(a[i]=='\n')
                {
                
                    a[i]='\0';
                                
                        
   
                for(i=0,j=0; a[i];)
                {
  
        
                           for(k=i,j=0;a[k]==b[j]&&b[j]!='\0';k++,j++); 
                              
        
                            if(b[j]=='\0')
                             {
                                i=k;
 
                             }                   
  
                            else
                            { 
                                 
                              c[l]= a[i];     
                                                            
                              l++;                    
                    
                              i++;
                   
                            }                             
                 
                 }
      
                         


        i=-1;
         
  
       } 
   
         

  }
  
 printf("%s\n",c); 

 fclose(fp2);

} 
 
 
         
