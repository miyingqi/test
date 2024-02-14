#include"game.h"
//菜单主体
void menu1()
{
    printf("*********************\n");
    printf("***1. piay  0. out***\n");
    printf("*********************\n");

}
//模式主体
void menu2()
{
    printf("*********************\n");
    printf("***1. 人机  0. 双人***\n");
    printf("*********************\n");
}
//功能主体
void founction()
{
    system("chcp 65001");
    int input =0;
    do
    {
        menu1();
        printf("请选择:>");
        scanf("%d",&input);
        switch (input)
        {
        case 1:
        printf("开始游戏\n");
        game1();
        
            break;
        case 0:
        printf("结束游戏\n");
            break;
        default:
        printf("重新选择\n");
            break;
        }
    } while (input);
    
}
//游戏代码主体
char game1()
{
    char ret =0;
    char board[ROW] [COL]={0};
    Initialize(board,ROW,COL);
    prboard(board,ROW,COL);
   while(1)
   {
    playermove(board,ROW,COL);
    ret = win1(board,ROW,COL);
    if(ret !='c')
    {
        break;
    }
    
    computermove(board,ROW,COL);
    ret = win1(board,ROW,COL);
    if(ret !='c')
    {
        break;
    }
    prboard(board,ROW,COL);
   }
   if(ret =='*')
   {
    printf("*******************\n");
    printf("***** 玩家赢！*****\n");
    printf("*******************\n");
   }
   else if(ret=='#')
   {
    printf("*******************\n");
    printf("***** 电脑赢！*****\n");
    printf("*******************\n");
   }
   else
   {
    printf("平局!\n");
   }
    prboard(board,ROW,COL);
}
void game2()
{
    char board[ROW] [COL]={0};
    Initialize(board,ROW,COL);
    prboard(board,ROW,COL);
   while(1)
   {
    playermove1(board,ROW,COL);
    prboard(board,ROW,COL);
    playermove2(board,ROW,COL);
    prboard(board,ROW,COL);
   }
}
//初始化棋盘
void Initialize(char arr[ROW][COL],int row,int col)
{
    int i=0;
    int j=0;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        arr[i][j]=' ';
    }
}
//打印棋盘
void prboard(char arr[ROW][COL],int row,int col)
{
    int i=0;
    int j=0;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf(" %c ",arr[i][j]);
            if(j<col-1)
            {
                printf("|");
            }
        }
        printf("\n");
        if(i<row-1)
        {
            for(j=0;j<col;j++)
            {
                printf("---");
                if(j<col-1)
                {
                printf("|");
                }
            }
            printf("\n");    
        }
    }
}
//玩家移动
void playermove(char arr[ROW][COL],int row,int col)
{
    int x=0;
    int y=0;
    printf("玩家回合\n");
    while(1)
    {
        printf("请输入:>");
        scanf("%d%d",&x,&y);
        if(x>=1 && x<=row && y>=1 && y <=col)
        {
            if(arr[x-1][y-1]==' ')
            {
            arr[x-1][y-1]='*';
            break;
            }
            else
            {
            printf("坐标被占用，请重新选择\n");
            }
        }
        else
        {
            printf("坐标非法，请重新输入\n");
        }
    }
}
void computermove(char arr[ROW][COL],int row,int col)
{
    printf("电脑回合:>\n");
    int x=0;
    int y=0;
    while(1)
    {
        x= rand()%row;
        y= rand()%col;
        if(arr[x][y]==' ')
        {
            arr[x][y]='#';
            break;
        }
    }
}
void playermove1(char arr[ROW][COL],int row,int col)
{
    int x=0;
    int y=0;
    printf("玩家回合\n");
    while(1)
    {
        printf("请输入:>");
        scanf("%d%d",&x,&y);
        if(x>=1 && x<=row && y>=1 && y <=col)
        {
            if(arr[x-1][y-1]==' ')
            {
            arr[x-1][y-1]='*';
            break;
            }
            else
            {
            printf("坐标被占用，请重新选择\n");
            }
        }
        else
        {
            printf("坐标非法，请重新输入\n");
        }
    }
}
void playermove2(char arr[ROW][COL],int row,int col)
{
    int x=0;
    int y=0;
    printf("玩家回合\n");
    while(1)
    {
        printf("请输入:>");
        scanf("%d%d",&x,&y);
        if(x>=1 && x<=row && y>=1 && y <=col)
        {
            if(arr[x-1][y-1]==' ')
            {
            arr[x-1][y-1]='#';
            break;
            }
            else
            {
            printf("坐标被占用，请重新选择\n");
            }
        }
        else
        {
            printf("坐标非法，请重新输入\n");
        }
    }
}
//判断输赢
char win1(char arr[ROW][COL],int row,int col)
{
    int i=0;
    for(i=0;i<row;i++)
    {
        if(arr[i][0] == arr[i][1] &&arr[i][1]==arr[i][2] && arr[i][1]!=' ')
        {
            return arr[i][1];
        }
    }
    int j=0;
    for(i=0;j<col;j++)
    {
        if(arr[0][j] == arr[1][j] &&arr[1][j]==arr[2][j] && arr[1][j]!=' ')
        {
            return arr[1][j];
        }
    }
    
    
    if(arr[0][0] == arr[1][1] &&arr[1][1]==arr[2][2] && arr[1][1]!=' ')
    {
            return arr[1][1];
    }  
    if(arr[0][2] == arr[1][1] &&arr[1][1]==arr[2][0] && arr[1][1]!=' ')
    {
            return arr[1][1];
    } 
    if(full(arr,row,col)) 
    {
        return 'q';
    }
    return 'c';

}
int full(char arr[ROW][COL],int row,int col)
{
    int i=0;
    int j=0;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(arr[i][j]==' ')
            {
                return 0;
            }
            
        }
    }
    return 1;
}
void ret()
{
    printf("按任意键结束*****\n");
    int p =getch();
}