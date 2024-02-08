#include"test2.8.1.h"
int main()
{
    int arr[10]={0};
    int i=0;
   for(i=0;i<=9;i++)
   {
    scanf("%d",&arr[i]);
   }
    int a =sizeof(arr)/sizeof(int);
    ch(arr,a);
    print(arr,a);
    printf("%d\n",arr[3]);
    return 0;
}