#include<stdio.h>

// 静态区
static int si_x=100;  //403xxx
int i_x=100;          //403
int i_x2;             //407

//栈
int fn(){ return 1;}  //401




int main(){
	// 堆
	int i_y=10;   // 22F 
	int i_y2;     // 22F
	
	// 打印 栈
	printf("stack:    &fn=%p \n", &fn);
	printf("\n");

	// 打印 堆
	printf("heap:    &i_y=%p \n", &i_y);
	printf("heap:   &i_y2=%p \n", &i_y2);
	printf("\n");
	

	// 打印 static
	printf("static: &si_x=%p \n", &si_x);
	printf("static: &i_x =%p \n", &i_x);
	printf("static: &i_x2=%p \n", &i_x2);
	printf("\n");
	
	
	
	
	//
	return 0;
}