#include<stdio.h>
#include<stdlib.h>
int add(int a,int b,int c){
	return a+b+c;
}
int sub(int a,int b){
	return a-b;
}
int main(){
	int a=5;
	int b=3;
	int d=0;
	int c=sub(a,b);

	if(c>0){
		a=a-b;
		b=b-a;
		c=a+b;
		d=add(a,b,c);
	}else{
		
		d=d+10;
	}	
	return d;
}
