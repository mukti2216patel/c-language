#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    gets(a);
    char b[100];
    gets(b);
    int i,j,count=0;
    for(i=0;a[i]!='\0';i++)
    {
        for(j=0;b[j]!='\0';j++)
        {
            if(a[i]==b[j])
            {
                    count++;
            }
        }
    }
    printf("%d",count);
}