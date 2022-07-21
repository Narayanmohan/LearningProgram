/*Program No-p307.c
dt-7-20-2022
Concept-FunctionwithFileHandling(cmd-Line Argument)
Next Program-Read text from file and count number of Upper/Lower/Singledigit/Special character Line by Line
--------------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int read(FILE *fp,char a[100]);
void count(char a[100]);
int uc,lc,sd,sc;
int main(int argc,char *argv[])
{
    int s, lineno;
    
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
          
     printf("Lineno:=%d Uppercase:=%d Lowercase:=%d Singledigit:=%d SpecialCharacter:=%d,%s\n",++lineno,uc,lc,sd,sc,a);
    
     s=read(fp,a);
     
     
   }

fclose(fp);

}

int read(FILE *fp,char a[])
{

    int i,flag;
    
    flag=0;

    i=0 ;
    
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

uc=lc=sd=sc=0;

for(i=0;a[i]!='\0';i++)
{

  if(a[i]>=65 && a[i]<=90)
  {

    uc=uc+1; 
    
  }

 else if(a[i]>=97 && a[i]<=122)
 {
   lc=lc+1;
 
 }
 else if(a[i]>=48 && a[i]<=57)
 {
  
   sd=sd+1;
   
 }
 
 else
 {
  sc=sc+1;
 
 } 
 

}

}
