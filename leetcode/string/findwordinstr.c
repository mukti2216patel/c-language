#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,flag=0;
    scanf("%d",&n);
    char a[n][100];
    for(i=0;i<n;i++)
    {
        scanf("%s",a[i]);
    }
    for(i=0;i<n;i++)
    {
        flag=0;
            for(j=0;a[i][j]!='\0';j++)
            {
                    if(a[i][j]=='e')
                    {
                        flag=1;
                        break;
                    }
            }
            if(flag==1)
            {
                printf("%d\n",i);
            }
    }
}