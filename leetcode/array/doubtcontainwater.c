#include<stdio.h>
int min(int m,int n)
{
    if(m>n)
    {
        return m;
    }
    else
    {
        return n;
    }
}
int maxArea(int* height, int heightSize) {
    int w=0,temp=0,area=0,max=-1,t1,t2;
    for(int i=0;i<heightSize;i++)
    {
        for(int j=i+1;j<heightSize;j++)
        {
            w = *(height+i) - *(height+j);
            temp=min(*(height+i) , *(height+j));
            if(w<0)
            area= (-w)*temp;
            else
            area= w*temp;
        }
        if(max<area)
        {
            t1=w;
            t2=temp;
            max=area;

        }
    }
    printf("%d  %d  %d",max,t1,t2);
}
int main()
{
    int n=9,i,j;
  
    int a[9]={1,8,6,2,5,4,8,3,7};
   
    maxArea(a,n);
}