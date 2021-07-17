#include<stdio.h>

//字符串 = 字符数组
//字符串的初始化

int main(){
	//使用字符串数组形式赋值
	char c1[]={'a', ' ', 'l','i','t','t','l','e', ' ', 'p','i','g', '\0'};
	//字符串形式
	char c2[]={"a little pig2"};
	char c3[]="a little pig3"; //省略花括号
	
	printf("c1=%s\n", c1);
	printf("c2=%s\n", c2);
	printf("c3=%s\n", c3);

	return 0;
}