#include<iostream>
using namespace std;

class EC11{
public:
	EC11(int b=0, int num=0): eB(b), number(num) {
		cout << "in EC11(int, int): eB=" << eB << endl;
	}
	
	void show(){
		cout << "eA:" << eA 
			 << ", eB:"  << eB
			 << ", number:" << number << endl;
	}
	
	static int eA;
	int eB;
	int number;
};
// 给 static 成员 赋值初始化
int EC11::eA = 25;
// 工厂方法，来料加工
EC11 getInstance(int sa, int b, int number){
	EC11 ec11(b,number);
	ec11.eA=sa;
	cout << " in fn:" << &ec11 << endl;
	return ec11;
}

int main(){
	EC11 ec = getInstance(1,2,3);
	cout << "out fn:" << &ec << endl;
	ec.show();
	return 0;
}