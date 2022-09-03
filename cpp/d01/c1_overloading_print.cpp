#include<iostream>
using namespace std;

class PrintType
{
	public:
		void print(int i){
			cout << "整数为:" << i << endl;
		}
		void print(double i){
			cout << "浮点数为:" << i << endl;
		}
		void print(char i[]){
			cout << "字符串为:" << i << endl;
		}
};

int main(){
	PrintType pd;
	pd.print(5);
	pd.print(3.14);
	
	char c[]="Hello C++";
	pd.print(c);
	return 0;
}