/*
* 文件标识：练习 ……和第35有点像
* 摘    要：N个数的选择法排序（从小到大）
*/
#include <stdio.h>
#include <math.h>
#define N 10  //设定排序的元素个数
void main() {
	int i,j,min,temp,a[11];
	printf("enter data:\n");
	//1.输入
	for(i=1; i<=N; i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
	//2.输出初始值
	printf("the original numbers:\n");
	for(i=1; i<=N; i++)	{
		printf("%5d",a[i]);
	}
	printf("\n");
	//3.排序
	for(i=1; i<=N; i++){
		min=i; //选出最小元素的下标
		for(j=i+1; j<=N; j++){
			if(a[min]>a[j])
				min=j;
		}
		if(min!=i){
			temp=a[min];
			a[min]=a[i];
			a[i]=temp;
		}
	}
	//4.打印输出结果
	printf("the sorted numbers:\n");
	for (i=1; i<=N; i++){
		printf("%5d",a[i]);
	}
	printf("\n");
}