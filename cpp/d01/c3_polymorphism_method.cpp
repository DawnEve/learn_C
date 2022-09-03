#include<iostream>
using namespace std;

class Shape{
	protected:
		int width, height;
	public: 
		// 初始化方法
		Shape(int a=0, int b=0){
			width=a;
			this->height=b;
		}
		int area(){
			cout << "Parent class area:" << endl;
			return 0;
		}
};

class Rectangle: public Shape{
	public:
		// 初始化方法：有点怪异
		Rectangle (int a=0, int b=0): Shape(a,b){}
		int area(){
			cout << "Rectangle class area: " << endl;
			return (width*height);
		}
};

class Triangle:public Shape{
	public:
		Triangle(int a=0, int b=0):Shape(a,b){}
		int area(){
			cout << "Triangle class area: "<< endl;
			return (width*height/2);
		}
};

// 主程序
int main(){
	Shape *shape;
	Rectangle rec(10, 7);
	Triangle tri(10, 5);
	
	//保存矩形的地址
	shape = & rec;
	//调用矩形的求面积方法 //失败
	shape->area();
	
	//存储三角形的地址
	shape = &tri;
	//调用三角形的求面积方法 //失败
	shape->area();
	
	return 0;
}
