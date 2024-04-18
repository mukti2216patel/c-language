#include<stdio.h>
int mat(int n,int a[n])
{
    int sum=0,b[100]={0},k=0,i,j,m=0,tn=0,max=-1,index=0;
    for(i=0;i<n;i++)
    {
        tn=n;
            for(j=i+1;j<n;j++)
            {
                for(k=tn-1;k>=i;k--)
                {
                    b[m]+=a[k];
                }
                m++;
                tn--;
            }
    }
    for(i=0;i<m;i++)
    {
        if(max<b[i])
        {
              max=b[i];
              index = i;
        }
    }
    printf("%d %d",max,index);
    tn=n-1;
    sum=0;
    index=index+1;
    for(i=0;;i++)
    {
        if(index<=n)
        {
            printf(" %d %d\n",tn,n);
            j=tn;
            k=n;
            break;
        }
        else{
            tn--;
           n = n+tn;
           sum++;
           
        }
    }
    if(sum!=0)
    {
         index=n-index;
    for(i=sum;i<index+sum+1;i++)
    {
            printf("\n%d",a[i]);
    }


    }
    else{
        for(i=0;i<=n-index;i++)
        {
            printf(" %d  ",a[i]);
        }
    }

}
int main()
{
    int i,j,n;
    scanf("%d",&n);
    int a[n],b[100],sum=0,k=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    mat(n,a);
}
//testcase -1  ;; 5 // 5 4 -1 7 8 ;; 5 4 -1 7 8
//testcase-2 ;; 9 // -2 1 -3 4 -1 2 1 -5 4 ;; 4 -1 2 1
//testcase-3 ;; 7//-1 2 4 -2 7 -5 1  ;; 2 4 -2 7