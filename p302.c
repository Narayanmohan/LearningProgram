/*Program No-p302.c
dt-7-14-2022
Concept-Function with File Handling(CMD Line Argument)-Merge Two Files
------------------------------------------------------------------------------------ 
Note-
In the code Repository we have the below File Name:
    -File.txt
        This file have the following contents.
            1
            2
            3
            4
            5
            
   - ft.txt
       This file have the following contents.
           a
           sum
           moon
           sun
           solar
           sun
          
cc p302.c
./a.out File.txt ft.txt Merged2File.txt

Then Type

joe Merged2File.txt - we can see both files Content into One File

------------------------------------------------------------------------------------*/
#include<stdio.h>

void mergeFile(FILE *fp1,FILE *fp3);

int main(int argc, char *argv[])
{

    FILE *fp1;
    FILE *fp2;
    FILE *fp3;
    
        if(argc<4)
        {
            
            printf("Invalid Argument");
            return 0;
        
        }
    
    
    fp1=fopen(argv[1],"r");
    fp2=fopen(argv[2],"r");
    fp3=fopen(argv[3],"a");
    
        if(fp1==NULL||fp2==NULL||fp3==NULL)
        {
        
            printf("File Opening Error");
            return 0;
        
        }    
    
    mergeFile(fp1,fp3);

    mergeFile(fp2,fp3);
    
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    

}

void mergeFile(FILE *fp1, FILE *fp3)
{
    char ch;
    
    while((ch=getc(fp1))!=EOF)
    {
        
        putc(ch,fp3);
    
    }




}
