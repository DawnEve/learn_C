/*
* 摘    要：输入数字，查询星期的英文单词……用外部数组实现…… 
*/

#include  <string.h> 
#include  <stdio.h>

//返回 字符数组 的函数，怎么声明？
char weekday[][10] = {"Sunday","Monday","Tuesday", "Wednesday",
	"Thursday","Friday", "Saturday"};

void main()
{ 
	int    n;
	char *MyWeek(int m);// 声明一个函数，返回 char *
	
	printf(">> 欢迎使用星期查询系统：输入数字，查询英文单词\n");

	printf("Please enter a number:");
	scanf("%d", &n);


	if (n >= 0 && n <= 6) {
		printf("星期%d是：%s\n", n, MyWeek(n) );
	}
	else
		printf("Not found!\n");
}


char *MyWeek(int m)
{
	return weekday[m];
}
