#include<stdio.h>
// scanf() 输入字符串

int main(){
	char fName[15], lName[15];
	printf("intput your first Name and Last Name: \n");
	scanf("%s%s", fName, lName);
	// 当用scanf函数输入字符串时，字符串中不能含有空格，否则将以空格作为串的结束符。
	// 可以多定义几个 字符数组，来接收有空格的输入
	
	printf("first name/Given Name:%s\nlast name/Family Name: %s\n", fName, lName);
	return 0;
}
