#include<stdio.h>
//数组作函数参数： 数组a中的n个整数按相反顺序存放

//写法1: 形参为指针
void printArr(int *arr, int N){
	printf("sizeof:%ld\t", sizeof(arr));
	for(int i=0; i<N; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

//写法2: 形参为数组。
//但是 void fun(int arr[]) 函数形参里的数组会退化为指针，变成void fun(int *arr)。
//所以，推荐数组形参直接写成指针的写法(见写法1)
void printArr2(int arr[], int N){
	//printf("sizeof:%d\t", (int)sizeof(arr)); //为什么会有warning?
	for(int i=0; i<N; i++){
		printf("%d ", arr[i]);
	}
	printf("=====\n");
}

//相反顺序排列: 0-中间值循环，首尾相互交换值
void reverseArr(int *arr, int N){
	int t, j, m=(N-1)/2;
	for(int i=0; i<m; i++){
		j=N-1-i;
		t=arr[i]; 
		arr[i]=arr[j];
		arr[j]=t;
	}
}

int main(){
	int N=6;
	int arr2[]={0, 1,20,-30,40,500};
	printf("sizeof(arr2):%ld\n", sizeof(arr2));
	printArr(arr2, N);
	printf("after reversing:\n");
	reverseArr(arr2, N);
	printArr(arr2, N);
	
	return 0;
}
