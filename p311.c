/*Program No-p311.c
dt-7-26-2022
Concept-Function with File Handling
Concept-Passing the Searchable Pattern in the command Line
Next Program-Read text from multiple file and display the line where pattern exists
Note - This is called as Grep All Files in UNIX
--------------------------------------------------------------------------------------
When run the Program follow the below step:

-apple is the searchable pattern text.
-MultipleFile.txt is the first text file.
-linebyline.txt is the second text file.

steps to run:
cc p311.c
./a.out apple MultipleFile.txt linebyline.txt

Output should be displayed as below:

File:=MultipleFile.txt,Lineno:=3,MatchedPatterLine= 1,Banana Mango apple
File:=linebyline.txt,Lineno:=1,MatchedPatterLine= 1,apple ball car apple pineapple mango
File:=linebyline.txt,Lineno:=2,MatchedPatterLine= 1,pineapple cat apple
File:=linebyline.txt,Lineno:=4,MatchedPatterLine= 1,apple cherry Blueberry apple
--------------------------------------------------------------------------------------*/
#include<stdio.h>
int read(FILE *fp,char a[100]);

int displayPatMatchedLine(char a[100],char c[100]);

int main(int argc, char *argv[])
{

int s,lineno,i,v;

FILE *fp;

lineno=0;

char a[100];
char b[100];
char c[100];


    if(argc<3)
    {
       
        printf("Invalid Argument");        
        return 0;    
    }
    
    
    for(i=2;i<argc;i++)
    {
    
          fp=fopen(argv[i],"r");
        
          lineno=0;        

    if(fp==NULL)        
     {
        
            printf("File Opening Error");
            return 0;            
     }  
    
s=read(fp,a);

 while(s==1)
 {        
  
    lineno++;
    
    v=displayPatMatchedLine(argv[1],a);
                
    if(v==1)
    {
         printf("File:=%s,Lineno:=%d,MatchedPatterLine= %d,%s\n",argv[i],lineno,v,a);
     
    }
 
   s=read(fp,a);
 
 }      
   

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

int displayPatMatchedLine(char c[],char a[])
{

    int i,j,k,flag;
    
    flag=0;
    
    for(i=0;a[i]!='\0';i++)
    {
 
        for(k=i,j=0; a[k]==c[j] && c[j]!='\0';k++,j++);
        
            if(c[j]=='\0')
            {            
                i=k;                
                
                flag=1;            
            }
    
    }
    
  
return flag;
}