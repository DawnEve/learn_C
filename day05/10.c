#include<stdio.h>
#include "string.h"
// 字符串拷贝 strcpy(str1, str2)
//本函数要求字符数组1应有足够的长度，否则不能全部装入所拷贝的字符串。
// 如果str1太短呢？为什么也能完整复制呢？

int main(){
	char str1[1], str1_2[2]="AB"; //old name
	char str2[15]="Tom Robinson"; //new name
	printf("(%p)str1=%s, str2=%s (before cp)\n", &str1, str1, str2);
	
	strcpy(str1, str2);
	printf("(%p)str1=%s, str2=%s (after cp)\n", &str1, str1, str2);

	return 0;
}
