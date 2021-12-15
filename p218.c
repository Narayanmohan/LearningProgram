/*Program No-p218.c
dt-12-15-2021
Concept-File Handling
Read a character from keyboard & write it to the file until '$' is given using getchar() and Putc
---------------------------------------------------------------------------------------------------------------
Note:
    scanf()- will be replace by getchar()
    
    ch= getchar()
    
    fprintf() will be replace by putc(ch,fp);
    
    getchar() - Used for to read from keyboard
        
---------------------------------------------------------------------------------------------------------------*/ 
#include<stdio.h>
int main()
{


 char ch;
 FILE *fp;
 
 ch=getchar();
 
 fp=fopen("Readch.txt","w");
 
 if(fp==NULL)
 {
    printf("File Opening Error");
    return 0;
       
 
 }
 while(ch!='$')
 {
     putc(ch,fp);
     ch=getchar();
 
 }
fclose(fp);


}
    
    