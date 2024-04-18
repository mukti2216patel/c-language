#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    gets(a);
    puts(a);
    int i,j,count=0;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='O' || a[i]=='U'||a[i]=='I')
        {
            count++;
            for(j=i;a[j]!='\0';j++)
            {
                a[j]=a[j+1];
            }
    }
    for(i=0;a[i]!='\0';i++)
    {
        printf("%c",a[i]);
    }
}