#include<stdio.h>
int main()
{
    int hl,ml;
    float amt,dis,total;
    int type,am;
    printf("1 : mill 2: handloom 3 : both\n");
    scanf("%d",&type);
    if(type==3)
    {
        scanf("%d%d",&hl,&ml);
        am=hl+ml;
    }
    else{
        scanf("%d",&am);
    }
    amt=am;
    am=am/100;
    switch(am)
    {
        case 0:
        if(type == 1)
        {
            dis=0;
        }
        else if(type==2)
        {
            dis=((float)5/100)*amt;
        }
        else{
            dis=((float)5/100)*ml;
        }
        break;
        case 1:
        if(type==1 )
        {
            dis=((float)5/100)*amt;
        }
        else if(type==2)
        {
            dis=((float)75/1000)*amt;
        }
        else{
            dis=((float)5/100)*hl + ((float)75/1000)*ml;
        }
        break;
        case 2:
        if(type==1)
        {
            dis=((float)75/1000)*amt;
        }
        else if(type==2)
        {
            dis=((float)1/10)*amt;
        }
        else{
            dis=((float)75/1000)*hl+((float)1/10)*ml;
        }
        break;
        case 3:
        if(type==1)
        {
            dis=((float)1/10)*amt ;
        }
        else if(type==2)
        {
            dis=((float)15/100)*amt;
        }
        else
        {
            dis=((float)1/10)*hl + ((float)15/100)*ml;
        }
        break;
    }
    total=amt-dis;
    printf("%f",total);
}