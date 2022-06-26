/*Program No-p295.c
dt-6-25-2022
Concept-Function
Next Program-Count the number of times the given pattern exits
----------------------------------------------------------------*/
#include<stdio.h>

void read(char a[100]);
int TimesPatternExist(char a[100], char b[100]);
int main()
{

    char a[100];
    char b[100];
    int total;
    read(a);
    read(b);    
  
    total = TimesPatternExist(a,b);
  
    printf("Number of Times the Pattern Exist is = %d",total);

}

void read(char a[])
{

    int i;
    
    for(i=0;(a[i]=getchar())!='$';i++);
    
    a[i]='\0';

}


int TimesPatternExist(char a[],char b[])
{

      int i,j,k,count;
    
              
        for(i=0,count=0;a[i]!='\0';i++)
             {
               
                  for(k=i,j=0; a[k]==b[j] && b[j]!='\0'; k++,j++);
                

                      if(b[j]=='\0')
                      {
                           
                         count = count+1;
                       
                      }
                                      
                //return count;        
                
                //printf("The total count is = %d",count);

             }   

return count;
         
printf("the total count = %d",count);
   
}
