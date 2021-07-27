#include<stdio.h>
int main(){
	int *ptr, nVar=123;
	ptr=&nVar;
	printf("nVar=%d; ptr=%p, *point=%d\n", nVar, ptr, *ptr);	
	
	// 通过指针修改变量
	*ptr=1500;
	printf("nVar=%d; ptr=%p, *point=%d\n", nVar, ptr, *ptr);	
}
