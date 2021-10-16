/*program No- p140.c
dt-10-15-2021
Loop- For Loop
Next Program- Count number of positive, negative, zero until -1000 is given
-----------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int num, cp, cn, cz;

cp=0;
cn=0;
cz=0;

scanf("%d",&num);

            
            for(; num!=-1000 ;)
            {	
            
                    if(num >0)
                    {
                     
                        cp= cp+1; 
                    
                    }

                    else if(num<0)
                    {
                    
                        cn=cn+1;
                    
                    }
                    else
                    {
                
                        cz = cz+1;
                    }
                    
                    scanf("%d",&num); 
                     
                        
            }


  printf("%d%d%d",cp,cn,cz);           


}