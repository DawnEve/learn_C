/*
* 摘    要： 把一个数组向后移动m个位置——数组 + 指针 实现
*/

#include <stdio.h>

int a[] =  {0, 1, 2, 3, 4, 5}; //定义外部数组

//打印数组
void print(int arr[], int len){
	int i;
	printf("[");
	for (i=0; i<len-1; i++){
		printf("%d, ", arr[i]);
	}
	printf("%d]\n", arr[i]);
}

int main() {
	void move(int array[], int len, int mv);
	
	int i, m;
	int len=sizeof(a) / sizeof(int);

	printf("原始数组：");
	print(a, len);

	
	//输入移动量
	printf("请输入后移个数m：");
	scanf("%d", &m);

	//移动
	move(a, len, m);

	//输出移动后的数组
	printf("后移%d个元素后的数组：", m);
	print(a, len);
	
	return 0;
}


// 一次把数组向后移动一个位置，共移动m个位置。用到了递归
void move(int array[], int n, int m)
{
	int *p,  //作为循环变量，移动数组 
		array_end = *(array + n - 1); //记录最后一个元素的值

	// 依次把数组向后移动一个位置，最后一个元素被覆盖
	for (p=array+n-1; p>array; p--)	{
		*p = *(p-1);
	}
	*p = array_end; //第一个元素，现在是最后一个元素的值

	m--;
	if (m>0)
	{
		printf(">> 递归调用 m=%d\n", m);
		move(array, n, m); /* 递归调用，共向后移动m个位置 */
	}
}