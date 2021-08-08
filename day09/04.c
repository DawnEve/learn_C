//枚举变量的赋值
#include<stdio.h>
int main(){
	//定义和初始化
	enum weekday{Sun, Mon, Tue, Wed, Thu, Fri, Sat} a,b,c;
	a=Sun;
	b=Mon;
	c=Sat;
	printf("%d, %d, %d\n", a, b, c);
	
	//判断
	if(Sun == a){
		printf("today is Sunday\n");
	}
	
	//重新赋值
	a=2;
	b=(enum weekday)3;
	printf("%d, %d, %d\n", a, b, c);
	
	return 0;
}
