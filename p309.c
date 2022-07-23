/*Program No p309.c
dt-7-23-2022
Concept-Function with File Handling(CmdLineArgument)
Concept-Function with File Handling(Pass the pattern in the Command Line Argument)
Next Program-Read from file and count no of times the given pattern exists Line by Line
------------------------------------------------------------------------------------------------------
[0][1][2]

./a.out means => p309.c exist will be in the 0th Index

argv[1]=> has File name (ie) linebyline

argv[2]=> will have the given pattern

so, if we take the array index

0th position the Program Name will be exist

1st position File Name will be exixt (ie.. linebyline)

2nd Position is the given pattern

-----------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int read(FILE *fp,char a[100]);
int countofTimesPatternExist(char b[100]);
int count;
int main(int argc, char *argv[])
{

int s,lineno,c;

count=0;

FILE *fp;

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
        
        c=countofTimesPatternExist(b);
        
        printf("Lineno:=%d, CountofTimesPatternExist:=%d,%s\n",++lineno,c,a);
        
        s=read(fp,a);
    
    
    }


}

int read(FILE *fp,char a[])
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

int countofTimesPatternExist(char b[])
{
    
    char *argv[2];

    int i,j,k,count;
    
        for(i=0,count=0;b[i];i++)
        {
        
            for(k=i,j=0;b[k]==argv[2][j] && argv[2][j]!='\0';k++,j++);
            
                if(argv[2][j]=='\0')
                {
                
                    count= count+1;
                    
                }
        }

return count;

}
