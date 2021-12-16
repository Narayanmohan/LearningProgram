/*Program No-p226.c
dt-12-16-2021
Concept-CommandLineArgument
Concept-CAT -> Concatenation
Next Program-CAT all files using command line Argument
---------------------------------------------------------------------------*/
#include<stdio.h>
int main(int argc, char *argv[])
{

    char ch;
    FILE *fp;
    int i;
    
for(i=1;i<argc;i++)
{

fp=fopen(argv[i],"r");

if(fp==NULL)
{

    printf("File Opening Error");
    return 0;

}

ch= getc(fp);

while(ch < argc)
{
    putchar(ch);
    ch=getc(fp);

}

fclose(fp);


}



}