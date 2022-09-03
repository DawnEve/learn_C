/*
* 摘    要：返回 指向2d数组的指针
*/
#include  <iostream>
using namespace std;

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

//声明函数，返回指向3d数组的指针
int (* get3d(int index) ) [4][2]; //返回指向3d数组的指针

//返回指向2d数组的指针
int (* get2d(int index) )[2]; //返回指向2d数组的指针


int main(){
	//1.输出3d数组
	cout << "Part I: output 3d array" << endl;
	for(int i=0; i<3; i++){
		printf( "arr3d[%d][][]:\n", i );
		for(int j=0; j<4; j++){
			cout << "\t";
			for(int k=0; k<2; k++){
				cout << arr3d[i][j][k] << "\t";
			}
			cout << "\n";
		}
		cout << "\n";
	}
	
	//2. 定义指向3d数组的指针，本质上是指向其第一个元素：[4][2]
	cout << "Part II: pointer to this 3d array" << endl;
	int (*pArr2d)[4][2] = arr3d;
	//+1前进了 2*16=32位， 32/4=8个数字。就是其3个元素，每个都是 int[4][2]
	cout << "pArr2d:" << pArr2d << ", pArr2d+1:" << pArr2d+1 << endl;
	cout << " arr3d:" << arr3d << ",  arr3d+1:" << arr3d+1 << endl;
	
	//3.返回指针的函数，指向3d数组中间某个位置 int[][4][2]
	cout << endl;
	cout << "Part III: function returning an array, which p to this 3d array" << endl;
	int (*pArr3)[4][2] = get3d(2); //还是一个3d数组指针。同原数组名同一个级别的。
	cout << "uise: pArr3[0][i][j]" << endl;
	for(int i=0; i<4; i++){
		for(int j=0; j<2; j++){
			cout << pArr3[0][i][j] << "\t"; //如何把这个[0]取消掉? 再从高位去掉1维
		}
		cout << endl;
	}
	
	//3B.返回指针的函数，指向2d数组 int[][2]，就是指向其第一个元素 int [2]
	cout << endl;
	cout << "Part IV: function returning an inner array in this 3d array" << endl;
	int (*pArr2)[2] = get2d(1);
	cout << "uise: pArr2[i][j]" << endl;
	for(int i=0; i<4; i++){
		for(int j=0; j<2; j++){
			cout << pArr2[i][j] << "\t"; //内部数组，那就是和其第一个元素一个级别的
		}
		cout << endl;
	}	
	
	return 0;
}



//定义函数，返回指向3d数组的指针
int (* get3d(int index) ) [4][2]{
	return arr3d+index;
}

//定义函数，返回指向2d数组的指针
int (* get2d(int index) ) [2]{
	return arr3d[index];
}