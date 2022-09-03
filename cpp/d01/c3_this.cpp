#include<iostream>
using namespace std;

class Box{
	public:
		int length=0, width=0;
		Box (int l, int w){
			this->length=l;
			this->width=w;
		}
		int getLength(){
			return this->length;
		}
		int getWidth(){
			return (*this).width;
		}
};

int main(){
	Box b2(2,5);
	cout << b2.getLength() << endl;
	cout << b2.getWidth() << endl;
	return 0;
}