/*
* 摘    要：输入十六进制数，输出十进制数字(用户界面的优化)
*/

#include <stdio.h>
#include <string.h>
#define MAX 1000
void main() {
	char  hexArr[MAX], c;
	int   i = 0, //16进制char数组的下标
		flag = 0, //
		flag1 = 1; //控制大循环继续: 可以循环转换，直到输入N或n
	int htoi(char s[]);

	printf("  Input a hex number, like FF, F0, then get the integer.\n");
	printf("    Quit with(N/Q)");
	printf("\n\nhex> ");
	while ((c = getchar()) != '\0' && i<MAX && flag1){
		//判断输入值是否16进制数字
		if (c>='0' && c<='9' || c>='a' && c<='f' || c>='A' && c<='F') {
			flag = 1; //开始填充 16进制字符串
			hexArr[i++] = c;
		}else if (1 == flag) { //flag为1表示正在输入。else表示遇到非法字符
			printf("[len: %d] ", i); //有效位数
			// 字符串结尾加/0
			hexArr[i] = '\0';
			// hax to integer
			printf("decimal: %d\n", htoi(hexArr));
			
			// 初始化下次输入
			flag = 0;
			i = 0;
			printf("\nhex> ");

		}else{
			// 判断非法字符是退出吗？
			if (c == 'N' || c == 'n' || c=='Q' || c=='q'){
				flag1 = 0;
				printf("Quit\n");
			}else{
				printf("Invalid char: %c. \nPlease input again\n"); //为什么拿不到这个非法字符?
				
				while( getchar() != '\n') continue; //忽视后面的错误输入
				
				flag = 0;
				i = 0;
				printf("\nhex> ");
			}
		}
	}
}


int htoi(char *s){
	printf("hax: %s\n", s);
	int i,n = 0;

	for (i=0; s[i] != '\0'; i++){
		if (s[i]>='0' && s[i]<='9')	{
			n = n*16 + s[i] - '0';
		}else if (s[i]>='a' && s[i]<='f'){
			n = n*16 + s[i] - 'a' + 10;
		}else if (s[i]>='A' && s[i]<='F'){
			n = n*16 + s[i] - 'A' + 10;
		}
	}

	return n;
}