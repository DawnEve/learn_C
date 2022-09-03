/*
* 文件标识：练习         和67.c功能相同，但更巧妙，仅用了一个中间量
* 摘    要：在已有升序数组中插入一个数字。应用函数。仅一个中间变量
*/
#include <stdio.h>
#define N 11
void main(){
	int arr[N]={1,4,5,6,9,12,15,118,220,305};
	int newVal,i;
	void Insert(int a[], int n, int x);

    //输出数组初始值
	printf("the original array:\n");
	for(i=0; i<N-1; i++){
		printf("%5d",arr[i]);
	}
	printf("\n");

    //输入要插入的值
	printf("enter the number you want to insert:");
	scanf("%d", &newVal);

	//判断插入位置 并插入
    Insert(arr, N,  newVal);   
	/*总提示这一行出错：: error C2143: syntax error : missing ';' before 'type'
	  但是，不知怎么的 又好了。原来多了一个void:  void  Insert(a, N,  newVal);
	*/

    //打印输出
	printf("the inserted array:\n");
	for(i=0; i<=N-1; i++){
		printf("%5d",arr[i]);
	}
	printf("\n");
}

void Insert(int arr[], int len, int newVal){
	int  i, pos;
	
	if(newVal>arr[len-2]){ //放在原最后一个元素之后
		arr[len-1]=newVal;
	}else{ //放在最后一个元素之前
		for (i=0; (i < len) && (newVal > arr[i]); i++){}
		pos = i;
		
		for (i = len-2; i >= pos; i--){
		  arr[i+1] = arr[i];  /*从后往前循环，后一个元素等于前一个元素*/
		}
		arr[pos] = newVal;  /*插入元素x到位置pos*/		
	}
}
