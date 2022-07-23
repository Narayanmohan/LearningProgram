/*Program No-p308.c
dt-7-21-2022
Concept-Function with File Handling(CMDLineArgument)
Next Program-Read from File and count number of Words,Lines and characters Line by Line
------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int read(FILE *fp,char a[100]);

void count(char a[100]);

int cw,cl,cc;

int main(int argc, char *argv[])
{

    
    int s,lineno;
    
    cl=0;
    
    FILE *fp;
    
    char a[100];
    
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
                   
        count(a);
    
    
        printf("countoflines:=%d,countofwords:=%d,countofcharacters:=%d,%s\n",cl,cw,cc,a);

        s=read(fp,a);
        
        
            
    }

fclose(fp);

}

int read(FILE *fp,char a[])
{

    int i,flag,cl;
    
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

void count(char a[])
{
    int i;

    cw=cc=0;
        
                       
        for(i=0;a[i]!='\0';i++)
        {
                     
            if(a[i]==' ')
            {
                cw=cw+1;
            
            }
            
           else
           {
               cc=cc+1;
           
           } 
                    
        }      
        
cl++;
}

