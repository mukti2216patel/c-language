#include<stdio.h>
int changecol(int q,int n,int m,int a[n][m])
{
    for(int i=0;i<n;i++)
    {
        a[i][q]=0;
    }
}
int changerw(int q,int n,int m,int a[n][m])
{
    for(int i=0;i<m;i++)
    {
       a[q][i]=0;
    }
}
int main()
{
    int i,j,n,m,k=0;
    scanf("%d%d",&n,&m);
    int a[n][m],b[100]={0};
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }

    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j]==0)
            {
                printf("%d   %d\n\n",i,j);
                b[k]=i;
                k++;
                b[k]=j;
                k++;
            }
            else{
                continue;
            }
        }
    }
    for(i=0;i<k;i++)
    {
        if(i%2==0)
        {
            changerw(b[i],n,m,a);
        }
        else
        {
            changecol(b[i],n,m,a);
        }
    }
     for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}