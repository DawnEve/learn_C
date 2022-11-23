#include<stdio.h>
#include<time.h> //日期时间作为种子 time(0);
#include<stdlib.h> //提供 rand() 函数

//b03.c 使用系统随机数，并设置时钟为种子
void demo1(){
	//1. 设置随机化种子
	srand((unsigned int)time(0));
	//2. 产生随机数: 是一个 0- INT_MAX 之间的数字
	int num;
	for(int i=0; i<5; i++){
		num=rand();
		printf("[%d] %d\n", i, num);
	}
}

// 获取指定范围的整数[from, to) 左闭右开区间，可以使用取余数操作：筛子 6面: 0-5
void demo2(int from, int to){
	printf("Close regin[%d, %d)\n", from, to);
	srand( (unsigned int) time(0) );
	int num;
	for(int i=0; i<5; i++){
		num=rand() % (to-from) + from;
		printf("[%d] %d\n", i, num);
	}
}

// 如何闭区间? [from, to] 两端闭区间
void demo3(int from, int to){
	printf("Close regin[%d, %d]\n", from, to);
	srand( (unsigned int) time(0) );
	int num;
	for(int i=0; i<10; i++){
		num=rand() % (to-from+1) + from; //多加一个1
		printf("[%d] %d\n", i, num);
	}
}

// 同理，产生概率数字，指定(小数点位数)精度
// 目测，这个随机效果不明显，有点依赖时间: 每个位置的大小相对固定
void demo4(int digit){
	int from=0, to=digit;
	printf("Close regin[%d, %d]\n", from, to);
	srand( (unsigned int) time(0) );
	int num;
	for(int i=0; i<10; i++){
		num=rand() % (to-from+1) + from;
		float ratio=(float)num/to;
		printf("[%d] %f %d\n", i, ratio, num);
	}
}


// 使用自定义随机数
// 超过1e5就很难出现0.9了，4个0是最理想的
# include "b01_rand1.c"
void demo5(int digit){
	int from=0, to=digit;
	printf("Close regin[%d, %d]\n", from, to);
	srand1( (unsigned int) time(0) );
	unsigned int num;
	for(int i=0; i<10; i++){
		num=rand1() % (to-from+1) + from;
		double ratio=(double)num/to;
		printf("[%d] %f %d\n", i, ratio, num);
	}
}


// 定义[0,1]的随机数，更一般的方法
void demo6(){
	srand( (unsigned int) time(0));
	for(int i=0; i<5; i++){
		float ratio= 1.0*rand()/RAND_MAX;
		printf("[%d] %f\n", i, ratio);
	}
}


int main(){
	//demo1();
	//demo2(0, 6);
	//demo3(10, 15);
	//demo4(10000);
	//demo5(10000); //自定义随机数
	demo6(); //更一般的随机数 [0, 1]
}
