/*program No-p304.c
dt-7-15-2022
Concept-Fusnction with File Handling(CMD-Line Argument)
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
int displayLineByLine(FILE *fp,char a[100]);

int main(int argc, char *argv[])
{
  
    int s;
  
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
   
     
      
       s=displayLineByLine(fp,a);

       while(s==1)
       {
       
          printf("%s \n",a);
          
          s=displayLineByLine(fp,a);
          
                   
       }
       
       
        fclose(fp);        


}

int displayLineByLine(FILE *fp,char a[])
{
     
int i,flag;

flag=0;

i=0;

while((a[i]=getc(fp))!=EOF)        
{                 
                    
                        if(a[i]=='\n')
                        {
                       
                             flag=1;
                       
                             a[i]='\0';                                                                                   
                             
                             return flag;
                                   
                         }                        
                        
               i++;                                
                         
}
        
return flag;        

}



