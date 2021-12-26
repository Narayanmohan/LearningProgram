/*Program No-p235.c
dt-12-25-2021
Concept-FileHandling
Next Program-Display the file page by page
---------------------------------------------------------
Note:

If linecount = 24 then one page is complete

use : page.txt file as arg2

./a.out page.txt

--------------------------------------------------------*/
#include<stdio.h>
int main(int argc, char *argv[])
{
int i,lineno,m;

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


lineno=0;

for(i=0;(a[i]=getc(fp2))!=EOF;i++)
{

        if(a[i]=='\n')
        {
        
            a[i]='\0';
            lineno++;
        
                   
               printf("%d %s \n",lineno,a);              
          
               if(lineno % 24 == 0)
               {
               
                scanf("%d",&m);
               }            


   
         i=-1;    
      }
    

}
    
fclose(fp2); 
    
}



