#include<iostream>
using namespace std;

//指针与多维数组
int main(){
	// part 1
	int arr[4][2]={
		{1,2},
		{10,20},
		{100,200},
		{1000,2000},
	};
	
	//输出数组
	for(int i=0; i<4; i++){
		for(int j=0; j<2; j++){
			cout << "\t" << arr[i][j] <<
			     " (" << &arr[i][j] << ")" << "\t";
		}
		cout << endl;
	}
		
	printf("  arr:%p\n", arr);
	printf("arr+1:%p\n", arr+1);
	//printf("arr+1:%p\n\n", arr++); //不能自增
	//error: lvalue required as increment operand
	
	// (2)指向多维数组的指针
	// 数组名转为指针时，指向的是其第一个元素。
	//    就是把数组最近的括号去掉
	printf("\n");
	int (*p1)[2] = arr; //声明
	cout << "arr[1][1]=" << arr[1][1] << ", "
	     << " p1[1][1]=" << p1[1][1] << endl;
		 
	cout << "*(*(arr+2)+1)=" << *(*(arr+2)+1) << ", "
	     << " *(*(p1+2)+1)=" <<*(*(p1+2)+1) << endl;
	printf("\n");
	
	
	// part 2
	int *parr[4][2];
	printf("  parr:%p\n", parr);
	printf("parr+1:%p\n", parr+1);
	
	printf("\n");
	cout << " int:" << sizeof(int) << endl;
	cout << "int*:" << sizeof(int*) << endl;
	
	return 0;
}