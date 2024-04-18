#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n,temp=0,num=1;
    scanf("%d",&n);
    if(n%2==0)
    {
        temp=(n/2);
    }
    else{
        temp = (n+1)/2;
    }
    for(i=0;i<n;i++)
    {
        num=0;
        if(i<temp)
        {
            for(j=0;j<2*i+1;j++)
            {
                if(j <= i)
                {
                    num++;
                    printf("%d",num);
                    
                }
                else{
                    num--;
                    printf("%d",num);
                }
            }
        }
        else{
            temp--;
            for(j=0;j<2*temp-1;j++)
            {
                
               
                if(j < temp)
                {
                    num++;
                    printf("%d",num);
                    
                }
                else
                {
                    num--;
                    printf("%d",num);
                }
            }

            }
            printf("\n");
        }
        
       
       
    }
