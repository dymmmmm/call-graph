#include <stdio.h>

//定义一个函数，输入第n天，返回该天剩下的桃子数
int getPeachNumber(n)
{
    int num;    //定义所剩桃子数
    if(n==10)
    {
       num=1;       //递归结束条件，即回推墙
       return num;
    }
    else
    {
        num = (getPeachNumber(n+1) + 1) * 2;   //递推关系
        printf("第%d天所剩桃子%d个\n", n, num); //天数，所剩桃子个数
    }
    return num;
}
int main()
{
    int num = getPeachNumber(1);
    printf("猴子第一天摘了:%d个桃子。\n", num);
    return 0;
}
