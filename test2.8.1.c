#include<stdio.h>
int foun(int x)
{
    int a =1;
    while(x>=1)
    {
    a*=x;
    x--;
    //a*=(x--);
    }
    return a;
}


int main()
{
    int b =0;
    scanf("%d",&b);
    int c =foun(b);
    printf("%d",c);
    return 0;
}