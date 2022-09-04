/*
* 摘    要：输入数字，查询星期的英文单词
*/

#include  <string.h> 
#include  <stdio.h>
const char *getWeekday(int x);

int main(){
	int n;
	printf("Please enter a number[0, 6], get weekday word:");
	scanf("%d", &n);
	
	//获取返回值
	const char *pW = getWeekday(n);
	printf("星期%d: %s\n", n, pW);

	return 0;
}

// 定义一个7元素数组，每个元素是一个指针，指向一个char
const char *getWeekday(int x) {
	const char *pWeekday[7] = {"Sunday","Monday","Tuesday",
      	  "Wednesday","Thursday","Friday", "Saturday"};

	char arrWeekday[][10] = {"Sunday","Monday","Tuesday",
      	  "Wednesday","Thursday","Friday", "Saturday"};
	// address 
	printf("  pWeekday[1]:%p,  address of *\"good\":%p \n", pWeekday[1], "good");
	printf("arrWeekday[1]:%p\n", arrWeekday[1]);
	return pWeekday[x];
	//return arrWeekday[x];
	//warning: function returns address of local variable
}

/*
测试 + 书上写的 = 我的理解：
1. 都是7元素数组，但子元素不同。
  第一个，每个元素是指针，指向一个字符数组；
  第二个，每个元素也是数组
2.内存使用不同：第一个是静态区，所以只读；第二个是数组的拷贝，可以读写；
3.可修改不同。见2
4，是否能返回。如果都定义在函数内，第一个可以返回，第二个不能。原因见2.
*/
