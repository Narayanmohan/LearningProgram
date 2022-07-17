/*program No-p304.c
dt-7-15-2022
Concept-Function with File Handling(CMD-Line Argument)
Concept-Using Character Array
Next Program-Read from file and display on screen line by line
---------------------------------------------------------------------------
Readch.txt File has the below content

This is Mohanraj
This is Meera
This is Arvindar    

When Run the program we have to Run a below

cc p304.c
./a.out Readch.txt


Output should be as follow:

This is Mohanraj
This is Meera
This is Arvindar

---------------------------------------------------------------------------*/
#include<stdio.h>
void displayLineByLine(FILE *fp,char a[100]);
int flag;
int main(int argc, char *argv[])
{

    FILE *fp;
  
    char a[100];
    
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
   
      
        displayLineByLine(fp,a);


        fclose(fp);        


}

 void displayLineByLine(FILE *fp,char a[])
{
    
    int i,flag;
    
    while((a[i]=getc(fp))!=EOF)
    {
    
                    if(a[i]=='\n')
                        {                 
                            a[i]='\0';
           
                                                  
                            printf("\n%s",a);
                
                           i=-1;
                        }       
    }


}



