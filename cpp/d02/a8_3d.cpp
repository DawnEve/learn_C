/*
* 摘    要：3d数组、指针、返回指向数组指针的函数
*/
#include  <iostream>
using namespace std;

int arr[3][4][2] = {
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


//声明返回 数组元素(2d数组) 的函数，开始变得面目可憎:
int (*getElement(int index))[2];

// 返回指向原数组的指针，指针位置移动index位
int (*get3d(int index))[4][2];


//声明 参数是该数组的函数：数组不能作为参数，但是指向它的指针可以
void print(int (*p)[4][2], int); //数组名和最高维作为参数

int main(){
	cout << ">> For 2d-array" << endl;
	//定义指针，和数组平级，大多数时候能替换
	int (*pArr)[4][2] = arr; //目测，看着消失掉一个(最高)维度信息
	//定义指向多维数组的指针，一定要先把指针加圆括号 (*p)，然后剩下的是该数组包含的内元素
	
	//1. 输出数组元素和指针
	cout << "\nPart I: print array" << endl;
	int length= sizeof(arr)/sizeof(int[4][2]);
	print( arr, length);
	
	//2. 对数组， [] 与 * 具有相同的作用，获取内层，获取值。
	cout << "\nPart II: [] and * are the same for array" << endl;
	cout << " arr[2][3][1]=" << arr[2][3][1] << ",  *(*(*(arr+2)+3)+1)=" << *(*(*(arr+2)+3)+1) << endl;
	cout << "pArr[2][3][1]=" << pArr[2][3][1] << ", *(*(*(pArr+2)+3)+1)=" << *(*(*(pArr+2)+3)+1) << endl;
	
	
	//3. 数组名不能自增，但是指向它的数组可以
	cout << "\nPart III: array name can NOT increase, pointer can" << endl;
	//arr++; //error: lvalue required as increment operand
	cout << pArr << " ";
	pArr++;
	cout << "after pArr++: "; //走过的是其子元素 [4][2]: 8* 4/int=32
	cout << pArr << endl;
	cout << "pArr[0][0][0]=" << pArr[0][0][0] << ": "<< &pArr[0][0][0] << endl;
	cout << "pArr[-1][0][0]=" << pArr[-1][0][0] << ": "<< &pArr[-1][0][0] << endl; //下标还可以是负数，只要地址有效
	
	//4. 返回元素的函数
	cout << "\nPart IV: function return element of array" << endl;
	int (*result)[2] = getElement(2);
	cout << "result: " << result << endl; 
	for(int i=0; i<4; i++){
		for(int j=0; j<2; j++)
			cout << result[i][j] << " (" << &result[i][j] << ")\t";
		cout << endl;
	}
	
	//5. 返回指向原数组的指针，指针位置有index偏移
	cout << "\nPart V: function return this array, with pointor shift" << endl;
	int (*result3d)[4][2] = get3d(2);
	cout << "result3d: " << result3d << endl;
	cout << result3d[0][2][0] << " (" << &result3d[0][2][0] << ")\t";
	cout << result3d[0][2][1] << " (" << &result3d[0][2][1] << ")\t";
	
	return 0;	
}

// 函数定义
// 打印数组
void print(int (*p2)[4][2], int len){
	for(int i=0; i<len; i++){
		printf("arr[%d][4][2]\n", i);
		for(int j=0; j<4; j++){
			for(int k=0; k<2; k++)
				cout << "\t" << p2[i][j][k] << " (" << &p2[i][j][k] << ")\t";
			cout << endl;
		}
	}
}

// 返回指向子元素的指针
int ( *getElement(int index) )[2]{
	return arr[index];
}

// 返回指向原数组的指针，指针位置移动index位
int (*get3d(int index))[4][2]{
	return arr+index;
}
