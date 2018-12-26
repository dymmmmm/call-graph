#include<stdio.h>
#include<stdlib.h>
int add(int a,int b,int c){
	if(a+b<c){
		sub(a+b,b,c);
	}
	return a+b;
}
int sub(int a,int b,int c){
	if(2*a-b<c){
		add(2*a-b,b,c);	
	}
	return 2*a-b;
}
int main(){
	int a=5;
	int b=3;
	int c=100;
	int d=0;
	
	return add(a,b,c);
}
