#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    i=1;
    j=0;
    for(i=1;i<1000;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==a[j])
            {
                break;
            }
            else{
                continue;
            }
        }
        if(j==n)
        {
            printf("%d",i);
            break;
        }
    }
}