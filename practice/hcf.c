#include<stdio.h>
#include<math.h>
int main() {
    int n1,n2,hcf=0;
    scanf("%d%d",&n1,&n2);
    int min;
    min=(n1<n2)?n1:n2;
    for(int i=0;i<=min;i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            hcf=i;
        }
    }
    printf("%d",hcf);
}