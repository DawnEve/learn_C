#include<stdio.h>

// 栈内，向下增长。右边参数最大，所以是最先传入的
void fn(int x, int y, int z){
	printf("&x:%p, &y:%p, &z:%p\n", &x, &y, &z);
	int i=0;
	printf("&i:%p\n", &i);
}

int a1=1;

int main(){
	int a2=2;
	int a3=3;

	fn(a1, a2, a3);
	return 0;
}