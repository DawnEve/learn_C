#include<iostream>
#include<fstream>

using namespace std;

// read file

int main(){
	char data[100];
	
	//以读模式打开文件
	ifstream infile;
	infile.open("ReadMe.txt");
	
	cout << "Reading from file:" << endl;
	infile >> data;
	
	//在屏幕上写入数据
	cout << data << endl;
	
	//再次从文件读取数据，并显示它
	infile >> data;
	cout << data << endl;
	
	//关闭打开的文件
	infile.close();
	
	return 0;
}

