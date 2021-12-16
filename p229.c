/*Program No-p229.c
dt-12-16-2021
Concept-CommandLineArgument
Concept-FileHandling
NextProgram-Read character from file and display the encrypted file on screen
----------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main(int argc, char *argv[])
{

char ch;
FILE *fp1;
FILE *fp2;

if(argc<3)
{

    printf("Invalid Argument");
    return 0;
    
}

fp1 =fopen(argv[1],"r");
fp2 =fopen(argv[2],"w");


if(fp1==NULL ||fp2==NULL)
{
    
    printf("File Opening Error");
    return 0;

}


ch = getc(fp1);

while(ch!=EOF)
{

    ch = ch+1;
    
    putc(ch,fp2);
    ch = getc(fp1);

}

ch =getc(fp2);
while(ch!=EOF)
{

putchar(ch);
ch = getc(fp2);
}

fclose(fp1);
fclose(fp2);

}