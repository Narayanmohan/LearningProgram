/*Program No-p225.c
dt-12-16-2021
Concept-FileHandlingwithCommandLineArgument
NextProgram-Read character from file until EOF and display on screen.
------------------------------------------------------------------------------------
Note:

cat <FileName>

cat p225.c

It will display the programs output in the screen.

------------------------------------------------------------------------------------*/
#include<stdio.h>
int main(int argc, char *argv[])
{

char ch;
FILE *fp;

if(argc<2)
{

    printf("Invalid Argument");
    return 0;


}

fp= fopen(argv[1],"r");

    if(fp==NULL)
    {
    
        printf("File Opening Error");
        return 0;
    }


ch =getc(fp);

while(ch!=EOF)
{

    putchar(ch);
    ch = getc(fp);


}

fclose(fp);

}