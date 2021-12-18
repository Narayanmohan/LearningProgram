/*Program No-p228.c
dt-12-16-2021
Concept-CommandLineArgument
Concept-FileHandling
NextProgram-Convert Uppercase to Lowercase using CommandLindArgument and Display on the Screen
--------------------------------------------------------------------------------------------------------
Note:

  While running the program consider the below points
   
    - Take the Readch.txt program and update the text Using Capital Letters.
    - cc p228.c
    -./a.out Readch.txt saraswathi.txt

--------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main(int argc, char *argv[])
{

char ch;
FILE *fp1;
FILE *fp2;

if(argc< 3)
{
    printf("Invalid Argument");
    return 0;
}

fp1 = fopen(argv[1],"r");
fp2=  fopen(argv[2],"w");


if(fp1==NULL ||fp2==NULL)
{

    printf("File Opening Error");
    return 0;
}


ch = getc(fp1);
while(ch!=EOF)
{

    if(ch>=65 && ch<=90)
    {
        ch = ch+32;


    }

 putc(ch,fp2);
 ch = getc(fp1);
}


ch = getc(fp2);
while(ch!=EOF)
{

    putchar(ch);
    ch = getc(fp2);

}

fclose(fp1);
fclose(fp2);

}

