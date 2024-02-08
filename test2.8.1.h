#include<stdio.h>
#include<conio.h>
#include<string.h>
void ret()
{
    printf("按任意键结束*****\n");
    int p =getch();
}
void ch(int x[],int y)
{
    int i =0;
    int p =0;
    int tm =0;
    for(i =0;i<=y-1;i++)
    {
        for(p =0;p<y-1-i;p++)
        {
            if(x[p] > x[p+1])
            {
                int tm =x[p];
                x[p]=x[p+1];
                x[p+1]=tm;
            }
        }
    }
}
void print(int x[],int y)
{
    int i =0;
    for(i=0;i<=y-1;i++)
    {
        printf("%d",x[i]);
    }
}