#include<iostream>

//数组转指针时，指向其第一个元素。
int sum(int (*pArr)[4], int len){
	int total=0;
	for(int i=0; i<len; i++){
		for(int j=0; j<4; j++){
			total += pArr[i][j];
		}
	}
	return total;
}

int main(){
	int arr[2][4]={
		{1,2,3,4},
		{10,20,30,40}
	};
	int len= sizeof(arr) / sizeof( arr[0]);
	printf("len: %d\n", len );
	printf("sum: %d\n", sum(arr, len) );
	
	//声明一个与数组名 arr可以替换的指针
	int (*p1)[4];
	p1=arr;
	printf("  p1[1][2]=%d(%p)\n", p1[1][2], &p1[1][2]);
	printf("arr[1][2]=%d(%p)\n", arr[1][2], &arr[1][2]);
	
	return 0;
}