/*
* 摘    要：返回 指向1d数组的指针
*/
#include  <iostream>
#include  <string> 

//返回 指向数组 的指针，怎么声明？
int arr2d[4][2] = {
	{0,1},
	{2,3},
	{4,5},
	{6,7}
};

int *get1dArr(int); //声明一个函数，返回指向 数组的指针 {0,1}

int main(){ 
	int n;
	
	printf(">> input a day[0,3], get the 1d array\n");
	scanf("%d", &n);

	if (n >= 0 && n <= 6) {
		int *pArr=get1dArr(n);
		printf("%d: %d, %d\n", n,  *pArr, pArr[1] );
	}
	else
		printf("Not found!\n");
}

int *get1dArr(int m){
	return arr2d[m];
}
