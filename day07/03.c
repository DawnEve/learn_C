#include<stdio.h>
//指针作为函数参数: 函数内交换指针指向的内容
//传地址(到门口)，解引用(进里面)，才能影响到main函数

int swap(int *p1, int *p2){
	int *t, a=0;
	t=&a; //避免野指针
	
	*t=*p1;
	printf("==> fn 1>> %d(%p), %d(%p), %d(%p)\n", *t,t, *p1,p1, *p2,p2);
	*p1=*p2;
	printf("==> fn 2>> %d(%p), %d(%p), %d(%p)\n", *t,t, *p1,p1, *p2,p2);
	*p2=*t;
	printf("==> fn 3>> %d(%p), %d(%p), %d(%p)\n", *t,t, *p1,p1, *p2,p2);
}

int main(){
	int x=1, y=200;
	int *p1, *p2;
	p1=&x;
	p2=&y;
	
	printf("main1|(p)>> x=%d(%p), y=%d(%p)\n", *p1, p1, *p2, p2);
	printf("main2(xy)>> x=%d(%p), y=%d(%p)\n", x, p1, y, p2);
	swap(p1, p2);
	printf("main3(xy)>> x=%d(%p), y=%d(%p)\n", x, p1, y, p2);
	printf("main4|(p)>> x=%d(%p), y=%d(%p)\n", *p1, p1, *p2, p2);
}
