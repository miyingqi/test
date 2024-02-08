#include<stdio.h>
int foun(int x)
{
    if(x<=1)
    {
        return x;
    }
    return x*foun(x-1);
}
int main()
{
    int a =0;
    scanf("%d",&a);
    int b =foun(a);
    printf("%d",b);
    return 0;

}