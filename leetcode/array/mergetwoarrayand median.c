#include<stdio.h>
int main()
{
    int i,j,n,m,temp=0;
    scanf("%d%d",&m,&n);
    int a[n],b[m];
    float num=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<m;i++)
    {
        a[i+n]=b[i];
    }
    for(i=0;i<n+m;i++)
    {
        for(j=i+1;j<n+m;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    if((n+m)%2==1)
    {
        i=0;
        j=(n+m)-1;
        while(i!=j)
        {
            i++;
            j--;
        }
        num=a[i];
        printf("%f",num);

    }
    else
    {
        num=(a[(n+m)/2] + a[(n+m-1)/2])/(float)2;
        printf("%f",num);
    }
}