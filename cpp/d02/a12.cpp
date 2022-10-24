#include<iostream>
using namespace std;
// 形参前加&，则传入的是引用，实参传递给形参时不拷贝
// 如果只有&不加const，则无法传入 字符串常量
void say1(const string &name){
	//name="Tom1"; //报错
	cout << "My name1 is " << name << " | addr: " << &name << endl;
}
//不加&则函数内地址会变
void say2(const string name){
	//name="Tom2"; //报错
	cout << "My name2 is " << name << " | addr: " << &name << endl;
}
//不加 const 则能修改值
void say3(string name){
	name="Tom3";
	cout << "My name3 is " << name << " | addr: " << &name << endl;
}
//只加 & 则函数内的修改能反应到原变量上
void say4(string &name){
	name="Tom4";
	cout << "My name4 is " << name << " | addr: " << &name << endl;
}
int main(){
	string x="Tom";
	cout << "addr: " << &x << endl;
	
	say1(x); say1("Xiaoming"); cout << endl;
	say2(x); say2("Xiaoming"); cout << endl;
	say3(x); say3("Xiaoming"); cout << x << endl;
	say4(x); //say4("Xiaoming"); 
	//error: cannot bind non-const lvalue reference of type
	cout << x << endl;
	return 0;
}