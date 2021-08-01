//返回指针值的函数: 返回最大值
#include<stdio.h>
int larger1(int, int);
int *larger2(int*, int*);

int main(){
	int a,b, bigger1,*bigger2;
	printf("input 2 numbers, separate by blank:\n");
	scanf("%d %d", &a, &b);
	
	bigger1=larger1(a, b);
	printf("a=%d, b=%d, larger is %d\n", a, b, bigger1);
	
	bigger2=larger2(&a, &b);
	printf("a=%d, b=%d, larger is %d\n", a, b, *bigger2);
	return 0;
}

int larger1(int x, int y){
	return x>y?x:y;
}
int *larger2(int *x, int *y){
	return *x>*y?x:y;
}