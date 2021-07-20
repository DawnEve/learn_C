#include<stdio.h>
//静态变量，是程序运行期间一直存在的变量。

void increment(){
	static int a=0;
	int b=0;
	printf("a=%d(%p), b=%d(%p)\n", a++, &a, b++, &b);
}

int main(){
	increment();
	int b=100;
	increment();
	increment();
	return 0;
}
