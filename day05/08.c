#include<stdio.h>
// puts()与printf()的区别

int main(){
	char name[]="Tom Hanks";
	char country[]="China";
	
	puts(name); //函数puts()一次只能输出一个字符串。输出后换行。
	puts(country);
	printf("name = %s, country = %s (by printf)\n", name, country);
	return 0;
}
