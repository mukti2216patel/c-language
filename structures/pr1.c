#include<stdio.h>
#include<string.h>
struct st
{
    int s1;
    int s2;
    int total;
    char name[100];
}s[3];

struct st pass(int n, struct st a[n]);
int main()
{
    int i,j;
    for(i=0;i<3;i++)
    {
        scanf("%d%d",&s[i].s1,&s[i].s2);
        scanf("%[^\n]s",s[i].name);
        s[i].total=s[i].s1+s[i].s2;
    }
    pass(3,s);
}
struct st pass(int n,struct st a[n])
{
    int i,j,d=1,temp=0;
    struct st *p[n];
    char dummy[100]="ABC";
    for(i=0;i<n;i++)
    {
            p[i]=&a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            d=1;
            if(strcmp(p[i]->name,p[j]->name)>0)
            {
                d=0;
                strcpy(dummy,p[i]->name);
                strcpy(p[i]->name,p[j]->name);
                strcpy(p[j]->name,dummy);
            }
            if(d==0)
            {
                    temp=p[i]->total;
                    p[i]->total=p[j]->total;
                    p[j]->total=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%s\n%d",s[i].name,s[i].total);
    }
}