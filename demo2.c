#include<stdio.h>
#include<stdlib.h>
int Fact(int n)
{
    if(n==0) return 1; //递归出口
    return n*Fact(n-1); //n*Fact(n-1)就是递归式，其中n-1就是界函数
}
int main(){
	return Fact(10);
}
