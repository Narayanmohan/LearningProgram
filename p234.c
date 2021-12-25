/*Program No-p234.c
dt-12-20-2021
Concept-FileHandling
Next Program-Display the file line by line along with its line  number
---------------------------------------------------------------------------------
Example:

The Existing file has the following:

  this is Arvinder
  this is Meera
  this is mohanraj
--------------------------------------------------------------------------------*/
#include<stdio.h>
int main(int argc,char *argv[])
{

int i,lineno;
char a[100];
FILE *fp2;

if(argc<2)
{

    printf("Invaid Argument");
    return 0;
    
}


fp2 = fopen(argv[1],"r");

if(fp2==NULL)
{
    printf("File Opening Error");
    return 0;

}

lineno =0;

for(i=0;(a[i]=getc(fp2))!=EOF;i++)
{

    if(a[i]=='\n')
     {
        
        a[i]='\0';
         
        printf("%d %s\n", ++lineno,a);
        
        i=-1;
        
    }
}
fclose(fp2);



}

