#include <stdio.h>
void inverse(int a[],int n)  //函数数组传递a[]。指针移动使一维数组倒置
{
	int *q,t,i=0;
	q=a+n-1;
	while(a+i<q)//p<q这种终止方法比一半法好：可以防止奇数除以2的错误(int)
	{
		t=*(a+i);
		*(a+i)=*q;
		*q=t;
		
		i++;
		q--;
	}
}

void main()
{
	int a[]={1,2,3,4,5};
	int i;
	/*下面打印原始数据  */
	for(i=0;i<5;i++)
		printf("%5d",a[i]);
	puts("");

	/*倒置的函数 */
	inverse(a,5);//引用函数。数组名传递数组的头部地址
	
	printf("倒序是这样的：\n");
	/*下面打印倒序数据  */
	for(i=0;i<5;i++)
		printf("%5d",a[i]);
	puts("");
}