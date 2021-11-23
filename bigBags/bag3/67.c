/*
* 文件标识：练习
* 摘    要：在已有升序数组中插入一个数字
*/

#include <stdio.h>
#define N 11
void main()
{
	int a[N]={1,4,5,6,9,12,15,118,220,305};
	int num,i,j,temp1,temp2;
	//输出数组初始值
	printf("the original arrays:\n");
	for(i=0; i<N-1; i++)
	{
		printf("%5d",a[i]);
	}
	printf("\n");
//输入要插入的值
	printf("enter the number you want to insert:");
	scanf("%d",&num);
//判断插入位置 并插入
	if(num>a[N-2])
	{
		a[N-1]=num;
	}
	else
	{
		for (i=0; i<N-2; i++)
		{
			if (a[i]>num) break;
		}
		temp2=num;
		for(j=i; j<N; j++)  
		/*使数组后面的序号依次升高1.借助于两个中间参数实现………巧妙！………
	j<=N是错的，我第一次就这样错了。排序插入后 提示：某内存不能为written,*/
		{
			temp1=a[j];
			a[j]=temp2;
			temp2=temp1;
		}
	}
//打印输出
	printf("the inserted arrays:\n");
	for(i=0; i<N; i++)
	{
		printf("%5d",a[i]);
	}
	printf("\n");
}