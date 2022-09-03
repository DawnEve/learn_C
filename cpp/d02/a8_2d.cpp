/*
* 摘    要：2d数组、指针、返回指向数组指针的函数
*/
#include  <iostream>
using namespace std;

int arr[4][2]= {
	{0,1}, 
	{2,3},
	{4,5},
	{6,7}
};

//声明返回 数组元素(1d数组) 的函数
int *getElement(int index);

//声明 参数是该数组的函数：数组不能作为参数，但是指向它的指针可以
void print(int (*p)[2], int);

int main(){
	cout << ">> For 2d-array" << endl;
	//定义指针，和数组平级
	int (*pArr)[2] = arr; //目测，看着消失掉一个(最高)维度信息
	//定义指向多维数组的指针，一定要先把指针加圆括号 (*p)，然后剩下的是该数组包含的内元素
	
	//1. 输出数组元素和指针
	cout << "\nPart I: print array" << endl;
	int length= sizeof(arr)/sizeof(int[2]);
	print( arr, length);
	
	//2. 对数组， [] 与 * 具有相同的作用，获取内层，获取值。
	cout << "\nPart II: [] and * are the same for array" << endl;
	cout << " arr[2][1]=" << arr[2][1] << ",  *(arr+1)=" << *(*(arr+2)+1) << endl;
	cout << "pArr[2][1]=" << pArr[2][1] << ", *(pArr+1)=" << *(*(pArr+2)+1) << endl;
	
	//3. 数组名不能自增，但是指向它的数组可以
	cout << "\nPart III: array name can NOT increase, pointer can" << endl;
	//arr++; //error: lvalue required as increment operand
	pArr++;
	cout << "after: pArr++" << endl; //走过的是其子元素
	cout << "pArr[0][0]=" << pArr[0][0] << ": "<< &pArr[0][0] << endl;
	cout << "pArr[-1][0]=" << pArr[-1][0] << ": "<< &pArr[-1][0] << endl; //下标还可以是负数，只要地址有效
	
	//4. 返回元素的函数
	cout << "\nPart IV: function return element of array" << endl;
	int *result = getElement(3);
	cout << "add: " << result << endl; 
	for(int i=0; i<2; i++){
		cout << result[i] << " (" << &result[i] << ")\t";
	}
	
	return 0;	
}

// 函数定义
// 打印数组
void print(int (*p2)[2], int len){
	for(int i=0; i<len; i++){
		for(int j=0; j<2; j++){
			cout << p2[i][j] << " (" << &p2[i][j] << ")\t";
		}
		cout << endl;
	}
}

// 根据下标，返回子元素
int *getElement(int index){
	return arr[index];
}