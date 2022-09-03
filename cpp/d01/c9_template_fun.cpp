#include<iostream>
using namespace std;

/*
int max2(int a, int b){return a>b?a:b;}
double max2(double a, double b){return a>b?a:b;}
float max2(float a, float b){return a>b?a:b;}
char max2(char a, char b){return a>b?a:b;}
*/
//使用 函数模板 技术，代替以上四个函数
// 函数模板: 编译器遇到函数模板的调用时，根据输入数据类型，生成对应的函数代码。
//开始报错，可能是 max 已经定义过了，重载错误，改为 max2 就正常了。


template<class T>
T max2(T a, T b){return a>b?a:b;}


int main(){
	
	int a1=max2(1,2);
	double a2=max2(1.2, 2.9);
	float a3=max2(1.2, 2.88);
	char a4=max2('a', 'z');
	
	cout << "int:" << a1 << endl;
	cout << "double:" << a2 << endl;
	cout << "float:" << a3 << endl;
	cout << "char:" << a4 << endl;
	
	return 0;
}