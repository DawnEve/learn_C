#include<iostream>
using namespace std;
// v4 工厂方法怎么避免拷贝
class EC11{
public:
	EC11(int b=0, int num=0): eB(b), number(num) {}	
	void show(){
		cout << "eA:" << eA 
			 << ", eB:"  << eB
			 << ", number:" << number << endl;
	}
	// 工厂方法，来料加工
	static EC11 &getInstance(const int &sa, const int &b, 
			const int &number){
		EC11 *p1= new EC11(b,number);
		(*p1).eA=sa;
		cout << ">> in fn:" << p1 << endl;
		return *p1;
	}
private:
	static int eA;
	int eB;
	int number;
};
// 给 static 成员 赋值初始化
int EC11::eA = 25; //这一句去掉就报错 ？？

int main(){
	EC11 &ec = EC11::getInstance(1,2,3);
	cout << ">>out fn:" << &ec << endl;
	ec.show();
	
	//EC11 &ec2 = EC11::getInstance(100,200,300);
	//cout << ">>out fn:" << &ec2 << endl;
	//ec2.show();
	return 0;
}