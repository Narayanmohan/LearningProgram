/*Program No-p224.c
dt-12-15-2021
Concept-CommandLineArgument
Next Program-Read a character from keyboard and write it to a file using command line Argument

------------------------------------------------------------------------------------------------------
Note-1

argv[0]- Program No p224.c
argv[1]- Mohan.txt(File Name]

so, when give ./a.out -> itself defines the program Number , we do not have to give likethat

./a.out p224.c [ ./a.out is enough and it means filename itself] ->


------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main(int argc, char *argv[])
{
    
    char ch;
    FILE *fp;
    ch = getchar();
    
    if(argc < 2)
    {
        printf("Invalid Argument");
        return 0;
    
    }

   fp = fopen(argv[1],"w");
   
    if(fp==NULL)
    {
     printf("File Opening Error");
     return 0;
    }

    
    ch = getchar();
    while(ch!='$')
    {
    
        putc(ch,fp);
        ch = getchar();
    
    }


fclose(fp);

}