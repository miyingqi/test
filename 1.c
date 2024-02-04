#include<stdio.h>
extern void suiji();
extern void menu();
extern void game();
int main()
{
    int input = 0;  
    suiji();
    do
    {   
        menu();
        printf("请选择\n");
        scanf("%d",&input);
        switch (input)
        {
        case 1:
        printf("开始游戏\n");
        game();
            break;
        case 0:
            break;
        default:
        printf("请重新选择\n");
            break;
        }
    }
    while(input);
    printf("游戏结束！\n");
    return 0;
}
