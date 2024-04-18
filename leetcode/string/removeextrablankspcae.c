#include<stdio.h>
#include<string.h>
int main()
{
    char a[200];
    gets(a);
    int i,j,count=0;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ' )
        {
            if(a[i+1]==' ')
            {
                for(j=i+1;a[j]!='\0';j++)
                {
                    a[j]=a[j+1];
                }
                i=i-1;
            }
        }
    } 
    puts(a);
}