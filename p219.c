/*Program No-p219.c
dt-12-15-2021
Concept-FileHandling
Next program-Read char from file and display on the screen using getc()
-------------------------------------------------------------------------------------
Note-

-fscanf()- will be replace by getc()

ch = getc(fp);


printf()- will be replace by putchar(ch);


ch = getc(fp);

while(ch!=EOF)
{
    putchar(ch);
    ch= getc(fp);
}

File pointer *fp moves to next character automatically by using getc(fp)
--------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

char ch;
FILE *fp;

fp=fopen("Readch.txt","r");

if(fp==NULL)
{

    printf("File Opening Error");
    return 0;
    
}


ch = getc(fp);

while(ch!=EOF)
{

     putchar(ch);
     ch= getc(fp);

}

fclose(fp);

}

