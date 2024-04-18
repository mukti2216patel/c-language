#include<stdio.h>
int swap(int *p,int *q)
{
    int temp=*p;
    *p=*q;
    *q=temp;
}
int main()
{
    int n,i,j;
    int a[3][3];
    int b[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    j=0;
    for(i=0;i<3;i++)
    {
        swap(&a[i][j],&a[i][j+2]);
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
               b[j][i]=a[i][j];
        }
    }
    j=0;
    
    for(i=0;i<3;i++)
    {
        swap(&b[i][j],&b[i][j+2]);
    }
    i=0;
    for(j=0;j<3;j++)
    {
        swap(&b[i][j],&b[i+2][j]);
    }
    printf("new array: \n\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
}
