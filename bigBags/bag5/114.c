/*
* 摘    要：指针数组  输入N个地址，排序后输出
*/

#include <stdio.h>
#include <string.h>

// 打印高维数组
void print(char *p[], int len){
	printf("[");
	for(int i=0; i<len; i++){
		printf("%s ", *(p+i));
	}
	printf("]\n");
}



// 结合性[]优先，所以 p[] 是一个数组，元素是 char *;
void strSort(char *p[], int len)  // 形参 *p[]是个指针数组，每个元素中存放的是地址
{
	int i, j;
	char *temp;

	//每次外层冒泡，把最大的放最后
	for (i=0; i<len-1; i++){
		for (j=0; j<len-1 -i; j++) {
			printf(">>Before sorting: i=%d, j=%d ", i, j);
			print(p, len);
			if (strcmp(*(p+j), *(p+j+1)) > 0) 	{
				temp = *(p+j);
				*(p+j) = *(p+j+1);
				*(p+j+1) = temp;
			}
		}
	}
}

void main() {
	char str[4][20], *p[4]; //  p[4]指针数组
	int i;

	for (i=0; i<4; i++)	{
		p[i] = str[i];
	}

	printf("Input 4 strings[0,20):\n");
	for (i=0; i<4; i++)
	{
		//scanf("%s", p[i]);
		scanf("%20s", p[i]); //控制最长长度，超过了则继续其余的字符串，貌似也不安全
		// 写成超过长度，则忽视\n之前的部分
	}

	strSort(p, sizeof(str)/sizeof(char [20]));

	printf("\n");
	printf("Now the sequence is: \n");
	for (i=0; i<4; i++)
	{
		printf("[%d] %s\n", i, p[i]);
	}
	printf("\n");
}

