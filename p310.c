/*Program No-p310.c
dt-7-25-2022
Concept-Function with FileHandling(Cmd Line Argument)
ConCept-Passing the Searachable Pattern in the cmd Line Argument
Next Program-Read text from the file and Display the line where pattern exists
-------------------------------------------------------------------------------------*/
#include<stdio.h>
int read(FILE *fp,char a[100]);

int displayPatMatchedLine(char a[100],char b[100]);

int patMatchLine;

int main(int argc,char *argv[])
{

  int s, lineno,c;

  patMatchLine=0;
  
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
        

      c=displayPatMatchedLine(a,argv[2]);
        
       if(c==1)
       {  
          
         printf("Lineno:=%d,MatchedPatternLine:=%d,%s\n",++lineno,c,a);
          
       }
       else
       {
       
       ++lineno;
       
             
       }
          
    
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

int displayPatMatchedLine(char a[100],char b[100])
{
  
  int i,j,k,patMatchLine,flag;
 
  flag=0;
  
  for(i=0,patMatchLine=0;a[i]!='\0';i++)
  {
  
  
    for(k=i,j=0;a[k]==b[j] && b[j]!='\0';k++,j++);
    
        if(b[j]=='\0')
        {
        
          i=k;   
                        
          flag=1;
          
        }      
  
  }
return flag;

}
