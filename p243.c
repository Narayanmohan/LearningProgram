/*Program No p243.c
dt-1-16-2022
Concept-CommandLineArgument-FileHandling
Concept-Give the pattern in Command Line Argument
Next Program-Display the line if pattern does not exist(Give the pattern in command line Argument)
---------------------------------------------------------------------------------------------------------- 
Note:1 - The input read file(linebyline.txt)has the following content

apple ball car apple pineapple mango

pineapple cat apple

Baby God hat icecream


Note-2- When execute the program follow the below step

cc p243.c

./a.out linebyline.txt mango


Note-3 - Output should display as below

lineno3: Baby God hat icecream

--------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main(int argc,char *argv[])
{

    int i,j,k,lineno,flag;
    
    char a[100];
    
    char b[100];
    
    
FILE *fp2;
    
if(argc <3)
{
    
    printf("Invalid Argument");
    return 0;
}    

fp2= fopen(argv[1],"r");

if(fp2==NULL)
{
    
    printf("File opening Error");
    return 0;

}

lineno=0;
flag=1;

for(i=0;(a[i]=getc(fp2))!=EOF;i++)
{

    if(a[i]=='\n')
    {
    
        a[i]='\0';
        
            for(i=0;a[i];i++)
            {
                    for(k=i,j=0;a[k]==argv[2][j]&& argv[2][j]!='\0';k++,j++);
                        
                        if(argv[2][j]=='\0')
                        {
                            i=k;
                            flag=1;
                        
                        }
                    
            
           }
           
           
    if(flag==0)
    {
        printf("Lineno+%d,%s\n",++lineno,a);
        
    }       
            
   else
   {
   
      ++lineno;     
   } 

i=-1;
flag=0;
    
}

}

fclose(fp2);
}