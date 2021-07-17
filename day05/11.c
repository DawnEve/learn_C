#include<stdio.h>
#include "string.h"
// 字符串比较函数strcmp

int main(){
	char str1[10]="Tom";
	char str2[15];
	
	printf("str1=%s, please input str2:", str1);
	gets(str2);
	printf("str1=%s, str2=%s\n", str1, str2);
	
	int nFlag=strcmp(str1, str2);
	printf("nFlag=%d\n", nFlag);
	
	return 0;
}
