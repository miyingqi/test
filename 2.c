#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
    printf("*******************\n");
    printf("*******************\n");
    printf("*****1:play********\n");
    printf("*******************\n");
    printf("*****0:over********\n");
    printf("*******************\n");
    printf("*******************\n");
}
void suiji()
{
    srand((unsigned int)time(NULL));
}

    
void game()
{
    int need = rand()%100;
    printf("游戏开始\n");
    while(1)
    {
        printf("请输入\n");
        int guess = 0;
        scanf("%d",&guess);
        if(guess>need)
        {
            printf("猜大了");
        }
        else if (guess<need)
        {
            printf("猜小了");
        }
        else
        {
            printf("猜对了\n");
            break;
        }
        
    }

}






