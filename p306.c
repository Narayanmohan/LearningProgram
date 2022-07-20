/*program No-p306.c
dt-7-20-2022
Concept-FunctionwithFileHandling
Next Program-Display the file page by page
--------------------------------------------------------*/
#include<stdio.h>
int displaytheFilePagebyPage(FILE *fp,char a[100]);

int main(int argc,char *argv[])
{

    int s,lineno,pageno;

    lineno=0;

    pageno=0;

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

s=displaytheFilePagebyPage(fp,a);

    while(s==1)
    {
        
        if(lineno%24==0)
        {
        
            scanf("%d",&pageno);
        }
   
   
    printf("%d %s \n ",++lineno,a);

    s=displaytheFilePagebyPage(fp,a);    

    }

}

int displaytheFilePagebyPage(FILE *fp,char a[])
{

    int i,flag;
    
    i=0;
    
    flag=0;

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