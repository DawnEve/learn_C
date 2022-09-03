#include<iostream>
using namespace std;

//定义一个返回 指向2d 数组的指针 的函数，并定义变量接收返回值。使用该返回值打印该2d数组
int arr3d[3][4][2] = {
	{
		{0,1},	{2,3},	{4,5},	{6,7}
	},
	{
		{10,11},	{12,13},	{14,15},	{16,17}
	},
	{
		{20,21},	{22,23},	{24,25},	{26,27}
	}
};

int (*getElement(int index))[2]; // 1.声明函数

int main(){
	int (*result)[2] = getElement(2); // 2.接收返回值
	
	//3.打印结果
	for(int i=0; i<4; i++){
		for(int j=0; j<2; j++)
			cout << result[i][j] << " (" << &result[i][j] << ")\t";
		cout << endl;
	} 
	
	return 0;	
}


// 函数定义 
int ( *getElement(int index) )[2]{
	return arr3d[index];
}