/*Program No-p305.c
dt-7-20-2022
Concept-Function with File Handling(CMD-Line Argument)
Next Program-Display the file line by line along with its line number
------------------------------------------------------------------------*/
#include<stdio.h>

int displayLineByLineWithLineNo(FILE *fp,char a[100]);

int main(int argc, char *argv[])
{
    int s,lineno;
    
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


    s=displayLineByLineWithLineNo(fp,a);
    
    
        while(s==1)
        {
        
            printf("%d %s \n", ++lineno,a);
            
            s=displayLineByLineWithLineNo(fp,a);
        
        }
    
    fclose(fp);
    
}

int displayLineByLineWithLineNo(FILE *fp,char a[])
{

int i,flag;
flag =0;
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


