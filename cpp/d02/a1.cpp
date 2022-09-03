#include<iostream>
using namespace std;

class EC11{
public:
	EC11(int i=0, int j=0){
		eA = i;
		eB = j;
		cout << "in Book(int, int): i=" << i << endl;
	}
	
	void show(){
		cout << "number:" << number << endl;
	}
	
	//static 
	int eA;
	int eB;
	int number;
};

int main(){
	//EC11 EC11_1();  //默认似乎i=0，但是没任何输出
	EC11 EC11_1(1,2); //i=1
	//EC11.show();	
}