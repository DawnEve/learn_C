/*
* 摘    要：输入整数a,b，按大小顺序输出——指针变量作为函数参数
*/

#include <stdio.h>
void main()
{
	void swap(int *p1, int *p2);// 函数声明
	
	int a = 0, b = 0;
	int *pointer_1, *pointer_2;

	printf("Please input 2 int, sep by ,:");
	scanf("%d,%d", &a, &b);
	pointer_1 = &a;
	pointer_2 = &b;
	if (a<b)
	{
		swap(pointer_1, pointer_2);
	}
	
	printf("a = %d, b = %d\n\n", a, b);
}
 
void swap(int *p1, int *p2)/*传入的是pointer_1，接收后由于是int型，
						   就是使*p1等于pointer_1指向开始的两个字节中的值*/
{
	int temp;
	temp = *p1;  //此处需要对指针所指的值直接操作，否则，指针变量是局部变量，函数结束对全局没啥影响
	*p1 = *p2;
	*p2 = temp;
}