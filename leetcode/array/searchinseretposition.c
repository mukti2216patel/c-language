#include<stdio.h>
int main()
{
    int n,num,count=-1;
    scanf("%d%d",&n,&num);
    int i,j;
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(num==a[i])
        {
            count=i;
            break;
        }
    }
    if(count!=-1)
    {
        printf("%d",count);
    }
    else
    {
            for(i=0;i<n;i++)
            {
                if(num<a[i])
                {
                        count=i;
                        break;
                }
            }
            printf("%d",i);

    }
}