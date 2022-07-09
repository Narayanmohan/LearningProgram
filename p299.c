/*Program No-p299
dt-7-9-202
Concept-Function with File Handling-using Command Line Argument
Next Program-Read character from file until EOF and display on screen
-------------------------------------------------------------------------------*/
#include<stdio.h>
void displayOnScreen(FILE *fp);
int main(int argc, char *argv[])
{

    FILE *fp;

    if(argc<2)
    {
    
        printf("Invalid Argument");
        return 0;
    
    }

    fp=fopen(argv[1],"r");
    
    if(fp==NULL)
    {
        
        printf("File Opening Error");
        return 0;
    
    }

displayOnScreen(fp);

fclose(fp);

}

void displayOnScreen(FILE *fp)
{

    char ch;
    
    while(ch!=EOF)
    {
    
        putchar(ch);
        ch=getc(fp);
    
    }




}