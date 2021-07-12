#include<stdio.h>
//后面定义的函数如果提前用，则需要提前声明。
int multi(int, int); //只需要一个函数名即可
int add(); //相当于java的接口(更松散，连参数都可以省略)，后面是具体实现
int someFn(); //声明了不用、不定义也不报错。

int main(){
	printf("sum of 3 numbers: add( add(1,2), 100) = %d\n", 
		add( add(1,2),  100));
	printf("result of 2*3*4*5 = %d\n", 
		 multi( multi(2,3), multi(4,5) )  );
}


int add(int x, int y){
	return x+y;
}

int multi(int x, int y){
	return x*y;
}