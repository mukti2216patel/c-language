#include<stdio.h>
int main()
{
    int i,j,temp=0,k=0;
    int n;
    scanf("%d",&n);
    int a[n+1];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(a[n-1]==9)
    {
       a[n-1]=1;

       a[n]=0;
        for(i=0;i<=n;i++)
        {
            printf("%d  ",a[i]);
        }

    }
    else{
        a[n-1]+=1;
         for(i=0;i<n;i++)
        {
            printf("%d  ",a[i]);
        }

    }
   
}