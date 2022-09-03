/*
* 摘    要：输入数字，查询星期的英文单词……在主函数中实现……
*/

#include  <string.h> 
#include  <stdio.h>
void main()
{ 
	int    n;
	char   weekday[][10] = {"Sunday","Monday","Tuesday",
      	                    "Wednesday","Thursday","Friday",
                           "Saturday"};


	printf("\t欢迎使用星期查询系统：输入数字，查询英文单词\n");

	printf("Please enter a number:");
	scanf("%d", &n);


	if (n >= 0 && n <= 6)  
	{
		printf("星期%d是：%s\n", n, weekday[n]);
	}
	else
		printf("Not found!\n");
}