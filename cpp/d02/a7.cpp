/*
* 摘    要：输入数字，查询星期的英文单词……用外部数组实现…… 
*/
#include  <iostream>
#include  <string> 

//返回 字符数组 的函数，怎么声明？
char weekday[][10] = {"Sunday", "Monday", "Tuesday", "Wednesday",
	"Thursday","Friday", "Saturday"};

//char *MyWeek(int m);// 声明一个函数，返回 char *
char *getWeek(int); //声明一个函数，返回指向 数组的指针

int main()
{ 
	int    n;
	
	printf(">> 输入数字0-6，查询星期的英文单词\n");

	printf("Please enter a number:");
	scanf("%d", &n);


	if (n >= 0 && n <= 6)  
	{
		printf("%d: %s\n", n,  getWeek(n));
	}
	else
		printf("Not found!\n");
}

char *getWeek(int m)
{
	return weekday[m];
}
