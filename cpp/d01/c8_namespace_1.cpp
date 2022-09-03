#include<iostream>
using namespace std;

namespace A{
	int num=10;
	namespace B{ //命名空间的嵌套
		int num=2;
		int num2=20;
	}
}

int num=500;

namespace B{
	int num=8000;
}

using namespace A::B; //后面就可以使用 A::B 中的元素了。

int main(){
	cout << "A::num=" << A::num << endl; //访问命名空间的元素
	cout << "A::B::num=" << A::B::num << endl;
	cout << "B::num=" << B::num << endl;
	cout << "::num=" << ::num << endl; //全局变量，就是命名空间为空

	printf("\n");
	cout << "A:B::num2=" << A::B::num2 << endl;
	cout << "num2=" << num2 << endl;
	
	return 0;
}