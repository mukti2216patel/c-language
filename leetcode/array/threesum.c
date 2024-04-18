#include<stdio.h>
int main()
{
    int i,j,k,sum=1,temp=0,n,m=0;
    scanf("%d",&n);
    int a[n],b[12]={0};
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            for(k=j+1;k<n;k++)
            {
                
                    sum=a[i]+a[j]+a[k];
                    if(sum==0)
                    {
                        b[m]=a[i];
                        m++;
                        b[m]=a[j];
                        m++;
                        b[m]=a[k];
                        m++;
                       
                    }
            }
           
        }
    }
    for(i=0;i<m;i++)
    {
        printf("%d ",b[i]);
    }
}