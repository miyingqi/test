#include<stdio.h>
#include<stdlib.h>
int main()
{
    int line =0;
    int cishu =0;
    printf("今天写的代码\n");
    scanf("%d",&line);
    while(line<25&&cishu<5)
        {
            cishu=cishu +1;
            int a =0;
            int b =25-line;
            printf("还要努力%d\n",b);
            printf("努力之后写了多少\n");
            scanf("%d",&a);
            line =line +a;
            printf("今天的代码量%d\n",line);
            printf("努力次数%d\n",cishu);
        }
    if(line>=25&&cishu<5)
        {
            printf("感谢你的努力\n");
        }
    else
        {
            printf("努力不够\n");
            printf("去挖白薯吧\n");
        }
    // char h ;
    // printf("请按任意键退出***\n");
    // scanf("%c",&h);
    // if(h == '\b')
    // {
    //     printf("退出\n");
    // }
    // else
    // {
    //     printf("退出\n");
    // }
    system("PAUSE");
    return 0;
}