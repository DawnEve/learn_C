#include<fstream>
#include<iostream>
using namespace std;

// c5_io_write.cpp

int main(){
	char data[100];
	
	// 打开文件，写模式
	ofstream outfile;
	outfile.open("dustbin/a1.txt");
	
	cout << "write to the file "<< endl;
	cout << "Enter your name:";
	cin.getline(data, 100); // 方法1: 输入 到 数组
	
	//向文件写入
	outfile << data << endl;
	
	cout << "Enter your age:";
	cin >> data; // 方法2: 输入 到 数组
	cin.ignore(); //什么作用？
	
	//再次向文件写入用户输入的数据
	outfile << data << endl;
	
	//关闭文件
	outfile.close();
	
	return 0;
}