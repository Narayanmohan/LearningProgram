/*Program No-p301.c
dt-7-13-2022
Concept-Function with File Handling[CMD Line Argument]
Next Program-Copy the contents from one file to another
---------------------------------------------------------------------*/
#include<stdio.h>
void copyOneFileToAnother(FILE *fp1,FILE *fp2);

int main(int argc, char *argv[])
{

    FILE *fp1;
    FILE *fp2;
    
    if(argc<2)
    {

        printf("Invalid Argument");

        return 0;
    
    }

    fp1= fopen(argv[1],"r");
        
     if(fp1==NULL)
     {
         
         printf("File Opening Error");
         return 0;
     
     }

    fp2 = fopen(argv[2],"w"); 
    
    if(fp2==NULL)
    {
        printf("File2 Opening Error");
        return 0;
    
    }
    
    copyOneFileToAnother(fp1,fp2);
    
    fclose(fp1);
    fclose(fp2);
    
    
}

void copyOneFileToAnother(FILE *fp1,FILE *fp2)
{

    char ch;
    
    while((ch=getc(fp1))!=EOF)
    {
    
        putc(ch,fp2);
    }



}
    
    
   
    
        

