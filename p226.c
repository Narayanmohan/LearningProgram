 /*Program No-p226.c
dt-12-16-2021
Concept-CommandLineArgument
Concept-CAT -> Concatenation
Next Program-CAT all files using command line Argument
---------------------------------------------------------------------------
CAT:

    When running the program plase execute the steps as below
        
        - cc p228.c
        ./a.out p1.c p2.c Readch.txt
        
        
Note:
        Here we can't use cat command.

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

while(ch != EOF)
{
    putchar(ch);
    ch=getc(fp);

}

fclose(fp);


}



}