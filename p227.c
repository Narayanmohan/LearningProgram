/*Program No-p227.c
dt-12-16-2021
Concept-CommandLineArgument-FileHandling
Concept- MergeTwoFiles
NextProgram-Merge Two Files and Display on the screen
---------------------------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main(int argc,char *argv[])
{

char ch;

FILE *fp1;
FILE *fp2;
FILE *fp3;

if(argc<4)
{

    printf("Invalid Argument");
    return 0;

}

fp1-fopen(argv[1],"r");
fp2=fopen(argv[2],"r");
fp3=fopen(argv[3],"a");


if(fp1==NULL ||fp2==NULL || fp3==NULL)
{
    
    printf("File Opening Error");
    return 0;

}        

ch=getc(fp1);
while(ch!=EOF)
{

    putc(ch,fp3);
    ch=getc(fp1);

}

ch = getc(fp2);
while(ch!=EOF)
{

    putc(ch,fp3);
    ch= getc(fp2);

}

ch= getc(fp3);
while(ch!=EOF)
{
    
    putchar(ch);
    ch= getc(fp3);
}

fclose(fp1);
fclose(fp2);
fclose(fp3);

}