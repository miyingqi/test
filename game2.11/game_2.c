#include"game_2.h"
//重新编码
void chong()
{
    system("chcp 65001");
}
//菜单
void menu()
{
    printf(" ---------------\n");
    printf("|    扫雷游戏   |\n");
    printf(" ---------------\n");
    printf("|    1.开始     |\n");
    printf(" ---------------\n");
    printf("|    2.退出     |\n");
    printf(" ---------------\n");
    printf("|请选择:>");

}
//模式选择
void founction()
{
}
//游戏主体
 void game()
{
    char board[HANG][LIE]={0};
    char boomer[HANG][LIE]={0};
    inboard(board,HANG,LIE);
    inboard1(boomer,HANG,LIE);
    boom(boomer);
    prboard(board,HANG,LIE);
    sao(boomer,board);
}
//初始化
void inboard(char arr[HANG][LIE],int hang,int lie)
{
    int i=0;
    int j=0;
    for(i=0;i<hang;i++)
    {
        for(j=0;j<lie;j++)
        {
            arr[i][j]='*';
        }
    }
}
void inboard1(char arr[HANG][LIE],int hang,int lie)
{
    int i=0;
    int j=0;
    for(i=0;i<hang;i++)
    {
        for(j=0;j<lie;j++)
        {
            arr[i][j]=' ';
        }
    }
}
//指定雷
void boom(char arr[HANG][LIE])
{
    int i=0;
    for(i=0;i<= 2*HANG;i++)
    {
    int hang=rand()%HANG;
    int lie=rand()%LIE;
    arr[hang][lie]='#';
    }
}
//扫雷
void sao(char arr1[HANG][LIE],char arr2[HANG][LIE])
{
    int input1=0;
    int input2=0;
    while(1)
    {
        printf("输入坐标:>");
        scanf("%d%d",&input1,&input2);
        if(arr1[input1-1][input2-1]==' '&& arr1[input1-1][input2-1]!='%')
        {
            arr1[input1-1][input2-1]='%';
            arr2[input1-1][input2-1]=' ';
            prboard(arr2,HANG,LIE);
            printf("此位置附近有雷%d个\n",saomiao(arr1,input1-1,input2-1));
        }
        else if (arr1[input1-1][input2-1]=='#')
        {
            prboard(arr2,HANG,LIE);
            prboard(arr1,HANG,LIE);
            printf("游戏结束\n");
            break;
        }
        else if(arr1[input1-1][input2-1]=='%')
        {
            printf("重新输入\n");
        }
    }
}
//检测
int saomiao(char arr[HANG][LIE],int x,int y)
{
    int a=0;
    int b=0;
    int c=0;
    int d=0;
    int e=0;
    int f=0;
    int g=0;
    int h=0;
    if(arr[x-1][y-1]=='#')
    a=1;
    if(arr[x][y-1]=='#')
    b=1;
    if(arr[x+1][y-1]=='#')
    c=1;
    if(arr[x-1][y+1]=='#')
    d=1;
    if(arr[x+1][y+1]=='#')
    e=1;
    if(arr[x][y+1]=='#')
    f=1;
    if(arr[x+1][y]=='#')
    g=1;
    if(arr[x-1][y]=='#')
    h=1;
    int P=a+b+c+d+e+f+g+h;
    return P;
}
//打印棋盘
void prboard(char arr[HANG][LIE],int hang,int lie)
{
    int cb[10]={1,2,3,4,5,6,7,8,9,10};
    int i=0;
    int j=0;
    printf("   ");
    for(i=0;i<lie;i++)
    {
        printf(" %d ",cb[i]);
        if(i<lie-1)
            {
                printf("|");
            }
    }
    printf("\n");
    for(i=0;i<hang;i++)
    {
        if(i<hang-1)
        printf(" %d ",cb[i]);
        else
        printf("%d ",cb[i]);
        for(j=0;j<lie;j++)
        {
            printf(" %c ",arr[i][j]);
            if(j<lie-1)
            {
                printf("|");
            }
        }
        printf("\n");
        if(i<hang-1)
        {
              printf("   ");
            for(j=0;j<lie;j++)
            {
                printf("---");
                if(j<lie-1)
                {
                printf("|");
                }
            }
            printf("\n");    
        }
    }
}
//退出操作
void ret()
{
    printf("按任意键退出*****\n");
    int p =getch();
}