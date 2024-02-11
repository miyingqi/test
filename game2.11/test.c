#include"game_2.h"
int main()
{ 
    srand((unsigned int)time(NULL));
    chong();
    int input = 0;
    do
    {
        menu();
        scanf("%d",&input);
        switch (input)
        {
        case 1:
            printf("游戏开始\n");
            game();
            break;
        case 2:
            printf("退出游戏\n");
            break;
        default:
            printf("请重新选择\n");
            break;
        }
    } while (input-2);
   ret();
    return 0;
}