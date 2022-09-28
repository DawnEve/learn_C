#include<stdio.h>

// 带颜色的输出 https://blog.csdn.net/weixin_28921621/article/details/117164510
int main(){
	printf("\033[40;33m~$\nHuey@Gao:\033[40;34m~$ cat a.txt\n");
	
	char s[]="this is a book";
	printf("\033[0m\033[1;31m%s\033[0m\n", s); //红色字体
	printf("\033[0m\033[1;34;41m%s\033[0m", s); //红色字体
}

/*
控制命令以\033[开头，以m结尾，而中间则是属性码，属性代码之间使用;分隔，如\033[1;34;42m。

属性代码的含义见下面的表格。
https://www.cnblogs.com/lewki/p/14343894.html

*/