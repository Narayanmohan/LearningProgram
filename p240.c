/*Program No-p240.c
dt-1-11-2021
Concept-FileHandling
Next Program-Read from file and Replace the given pattern if exist
---------------------------------------------------------------------------------
Example:

apple banana corn
apple orange mango
grape guava  apple

Replacable pattern - apple

strawberry

-----------------------------------------------------------------------------------*/
#include<stdio.h>
int main(int argc, char *argv[])
{
    int i ,j,k,l,m,n;
    
    char a[100];
    char b[100];
    char c[100];
    char d[100];
    
FILE *fp2;    
    
if(argc < 2)
{
    printf("Invalid Argument");
    return 0;

}

fp2= fopen(argv[1],"r");

if(fp2==NULL)
{

    printf("File Opening Error");
    return 0;
    
}



for(j=0;(b[j]=getchar())!='$';j++);
b[j]='\0';


for(k=0;(c[k]=getchar())!='$';k++);
c[k]='\0';


for(i=0;(a[i]=getc(fp2))!=EOF;i++)
{

        if(a[i]=='\n')
        {
        
            a[i]='\0';

             for(i=0,l=0;a[i];)
             {
 
                for(n=i,j=0;a[n]==b[j]&&b[j]!='\0';n++,j++);
                
                if(b[j]=='\0')
                {
            
                  
                     for(i=n,m=0;c[m]!='\0';m++,l++)
                     { 
                             
                    
                                d[l]=c[m]; 
                        
                     }



                } 
 
               else
                {
                   d[l]=a[i];
                   l++;
                   i++;
                }   
                
                
            }
            
           printf("%s",d); 
           i=-1;
            
          }
            
 
 }
fclose(fp2);
 
 }