/* Program No-p300.c
Dt-7-12-2022
Concept-Function with File Handling
Next Program-CAT All files using command Line Argument
-----------------------------------------------------------------------*/
#include<stdio.h>

void catAllFiles(FILE *fp);

int main(int argc, char *argv[])
{

FILE *fp;

int i;

    if(argc<2)
    {
        printf("Invalid Argument");
        return 0;

    }


    for(i=1;i<argc;i++)
    {

        fp= fopen(argv[i],"r");
    
    
        if(fp==NULL)
        {
    
            printf("File Opening Error");
       
            return 0;
           
        }

       catAllFiles(fp);

       fclose(fp);

    }
}

void catAllFiles(FILE *fp)
{

    char ch;
    
    while((ch=getc(fp))!=EOF)
    {
    
        putchar(ch);
    }



}



