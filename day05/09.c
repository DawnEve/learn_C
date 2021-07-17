#include<stdio.h>
// 函数gets()与scanf()的区别

int main(){
	char name[10];
	char country[10];
	
	printf("please input name and country:\n");
	gets(name); //一次输入一个字符串，可包含空格和TAB的全部字符，直到遇到回车为止
	scanf("%s", country); //以空格、TAB或回车作为一段字符串的间隔符或结束符
	
	printf("name=%s, country=%s\n", name, country);

	return 0;
}
