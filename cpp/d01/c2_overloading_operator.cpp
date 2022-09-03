#include<iostream>
using namespace std;

class Box
{
	//private: //如果是类方法 重载运算符，可以是 private
	public: //如果是全局函数 重载运算符，则只能是 public
		int length;
		int width;
		int height;
	
	public:
		double getVolume(){
			return length * width * height;
		}
		void setLength(double len){
			length=len;
		}
		void setWidth(double w){
			width=w;
		}
		void setHeight(double h){
			height=h;
		}
		//重载 + 运算符，用于把两个 Box 对象相加
		/*
		Box operator+(const Box& b){
			Box b2;
			b2.length = this->length + b.length;
			b2.width = this->width + b.width;
			b2.height = this->height + b.height;
			return b2;
		}
		*/
};

//通过全局函数重载运算符
Box operator+(Box& b1, Box& b2){
	Box b0;
	b0.length=b1.length + b2.length;
	b0.width=b1.width + b2.width;
	b0.height=b1.height + b2.height;
	return b0;
}

//运算符重载也可以发生函数重载
Box operator+(Box& b1, int num){
	Box b0;
	b0.length=b1.length + num;
	b0.width=b1.width + num;
	b0.height=b1.height + num;
	return b0;
}



int main(){
	Box box1;
	Box box2;
	Box box3;
	double valume =0.0; //把体积存储在该变量中
	
	// box1 初始化
	box1.setLength(1.0);
	box1.setWidth(1.0);
	box1.setHeight(1.0);
	
	// box2 初始化
	box2.setLength(2.0);
	box2.setWidth(2.0);
	box2.setHeight(2.0);
	
	// box3 初始化
	box3 = box1 + box2;
	
	// 重载运算符定义
	Box box4=box1+9;
	
	// output
	cout << "Volume of box1:" << box1.getVolume() << endl;
	cout << "Volume of box2:" << box2.getVolume() << endl;
	cout << "Volume of box3:" << box3.getVolume() << endl;
	cout << "Volume of box4:" << box4.getVolume() << endl;
	
	return 0;
}
