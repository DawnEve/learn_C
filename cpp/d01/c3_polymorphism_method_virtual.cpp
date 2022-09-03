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
		virtual int area(){ //父类前面加上 virtual，就不是“早绑定”了
		// 此时，编译器看的是指针的内容，而不是它的类型
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
	//调用矩形的求面积方法 // 成功调用子类方法
	shape->area();
	
	//存储三角形的地址
	shape = &tri;
	//调用三角形的求面积方法 // 成功
	shape->area();
	
	Shape sh2(5,5);
	shape= &sh2;
	shape->area(); //调用父类方法
	
	printf("\n");
	//对象的调用方式，就是.，但是指针只能使用->调用。
	sh2.area();
	(&sh2)->area();
	(*shape).area(); //取该指针指向的值，然后就可以了
	
	return 0;
}
