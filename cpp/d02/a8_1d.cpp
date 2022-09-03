/*
* 摘    要：1d数组、指针、返回指向数组指针的函数
*/
#include  <iostream>
using namespace std;

int arr[4]= {0, 10, 20, 30};

//声明返回 数组元素的 函数
int *getInt(int index);

//声明 参数是概述组的函数
void print(int *, int);

int main(){ 
	//定义指针，和数组平级
	int *pArr = arr; //目测，看着消失掉一个维度信息
	
	//1. 输出数组元素和指针
	cout << "\nPart I: print array" << endl;
	print(arr, sizeof(arr)/sizeof(int) );
	
		
	//2. 对数组， [] 与 * 具有相同的作用，获取内层，获取值。
	cout << "\nPart II: [] and * are the same for array" << endl;
	cout << " arr[1]=" << arr[1] << ",  *(arr+1)=" << *(arr+1) << endl;
	cout << "pArr[1]=" << pArr[1] << ", *(pArr+1)=" << *(pArr+1) << endl;

	//3. 数组名不能自增，但是指向它的数组可以
	cout << "\nPart III: array name can NOT increase, pointer can" << endl;
	//arr++; //error: lvalue required as increment operand
	pArr++;
	cout << "after: pArr++" << endl;
	cout << "pArr[0]=" << pArr[0] << ": "<< &pArr[0] << endl;
	cout << "pArr[-1]=" << pArr[-1] << ": "<< &pArr[-1] << endl; //下标还可以是负数，只要地址有效
	
	//4. 返回元素的函数
	cout << "\nPart IV: function return element of array" << endl;
	int *result = getInt(3);
	cout << *result << ": " << result << endl; 
	
	return 0;	
}

// 函数定义
// 根据下标，返回子元素
int *getInt(int index){
	return &arr[index];
}

// 打印数组
void print(int *p2Int, int len){
	for(int i=0; i<4; i++){
		cout << p2Int[i] << " (" << &p2Int[i] << ")\t";
	}
	cout << endl;
}
