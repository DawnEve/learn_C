#include<stdio.h>
#include "string.h"
// 字符串连接函数 strcat(字符数组名1，字符数组名2); 合并到arr1

int main(){
	char str1[]="This is a good book!";
	char str2[]="Which book?";
	
	printf("%s, %s\n", str1, str2);
	strcat(str1, str2);
	printf("%s, %s\n", str1, str2);
	
	return 0;
}
