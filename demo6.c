#include <stdio.h>
/* 定义获取单词数量的函数 */
int getWordNumber(n)
{   
    if(n == 1)
    {
        return 1;    //回推墙
    }
    else{
        return getWordNumber(n-1)+n ;       //递推关系
    }
}
int main()
{
    int num = getWordNumber(10);     //获取会了的单词数量
    printf("小明第10天记了:%d个单词。\n", num);
    return 0;
}
