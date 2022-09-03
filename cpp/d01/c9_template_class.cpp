#include<iostream>
using namespace std;

/*
//比较大小的类: 只能比较整数
class Compare{
	private:
		int x,y;
	public:
		Compare(int x, int y){
			this->x=x;
			this->y=y;
		}
		int max(){
			return (x>y)?x:y;
		}
		int min(){
			return (x>y)?y:x;
		}
};
*/

//使用 类模板，支持更多类型
template<class Type>
class Compare{
	private:
		Type x,y;
	public:
		Compare(Type x, Type y){
			this->x=x;
			this->y=y;
		}
		Type max(){
			return (x>y)?x:y;
		}
		Type min(){
			return (x>y)?y:x;
		}
};

int main(){
	//Compare cmp(2,5);
	Compare<int> cmp(2,5); //使用类模板，要在类后面指定参数的 数据类型
	cout << "max:" << cmp.max() << endl;
	cout << "min:" << cmp.min() << endl;
	
	Compare<double> cmp2(25.5,5.2);
	cout << "max double:" << cmp2.max() << endl;
	
	Compare<char> C3('b', 'd');
	cout << "min string:" << C3.min() << endl;
}
