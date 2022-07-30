/*Program No-p312.c
dt-7-30-2022
Concept-Function with File Handling
Concept-Passing Searchable pattern using Command Line Argument
Next Program-Display the line if pattern does not exist(Give the pattern in Cmd Line Argument)
---------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int read(FILE *fp,char a[100]);
 
int displayNonPatMatchedLine(char a[100],char b[100]);

int flag;

int main(int argc, char *argv[])
{


    int s,lineno,c;
    
    FILE *fp;
    
    lineno=0;
        
    char a[100];

    char b[100]; 

        if(argc<2)
        {
            printf("Invalid Argument");
            return 0;
        }


       fp=fopen(argv[1],"r");
       
       if(fp==NULL)
       {
           printf("File Opening Error");
           return 0;
       } 
       
       
   s=read(fp,a);
   
       while(s==1)
       {
              
           lineno++;
           
           c=displayNonPatMatchedLine(a,argv[2]);
           
       
           if(c==1)
           {
               printf("Lineno:=%d,%s\n", lineno,a);
                   
           }
       
       s=read(fp,a);    
           
       }

}

int read(FILE *fp,char a[])
{

    int i,j,flag;

    flag=0;
    
    i=0;
    
        while((a[i]=getc(fp))!=EOF)
        {
        
            if(a[i]=='\n')
            {
            
                flag=1;

                a[i]='\0';

                return flag;
            
            }
        
           i++;       
        
        }

return flag;

}

int displayNonPatMatchedLine(char a[],char b[])
{

    int i,j,k,flag;
    
     flag=1;
    
        for(i=0;a[i]!='\0';i++)
        {
        
           for(k=i,j=0;a[k]==b[j]&& b[j]!='\0';k++,j++);
            
              
              
                if(b[j]=='\0')
                {
                
                    i=k;
                    
                    flag=0;
                
                }	                                 
        
        }  
        
return flag;        
   
}



