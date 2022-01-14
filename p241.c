/*Program No-p241.c
dt-1-13-2021
Concept-CommandLineArgument
Next Program-Read from file and count the number of time the given pattern is exist line by line using Command Line Argument and 
Give the pattern as command line argument

--------------------------------------------------------------------------------------------------------------------------------

[0][1][2]

./a.out means => p241.c exist in the 0th Index

argv[1]=> means File name (ie) linebyline

argv[2]=> means is the given pattern

so, if we take the array index

0th position the Program Name will be exist

1st position File Name will be exixt (ie.. linebyline)

2nd Position is the given pattern

-------------------------------------------------------------------------------------------------------------------------------

When Run the Query:

    - ./a.out linebyline apple

-------------------------------------------------------------------------------------------------------------------------------*/

#include<stdio.h>
int main(int argc, char *argv[])
{

int i,j,k,count, lineno;


char a[100];
char b[100];

FILE *fp2;

if(argc < 2)
{
    
    printf("Invaid Argument");

    return 0;

}
   
   
fp2= fopen(argv[1],"r");

if(fp2==NULL)
{

    printf("File Opening Error");
    return 0;

}   
 
lineno=0;

count=0;

for(i=0;(a[i]=getc(fp2))!=EOF;i++)
{

    if(a[i]=='\n')

        {	
        
            a[i]='\0';

            
                for(i=0,count=0;a[i];i++)
                {
 
                    for(k=i,j=0;a[k]==argv[2][j]&& argv[2][j]!='\0';k++,j++);
                    
                    
                        if(argv[2][j]=='\0')
                        {
                        
                            count= count+1;
                        }                    
                        
                        
                }        
                        
         printf("lineno:%d Time Exist =%d,%s\n",++lineno,count,a);

          i=-1;            
                      
                        
      }
      
               

}


fclose(fp2);

} 