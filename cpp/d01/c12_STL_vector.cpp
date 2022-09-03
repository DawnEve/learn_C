#include<iostream>
#include<vector>
using namespace std;

//c12_STL_vector.cpp

int main(){
	//创建一个向量，存储 int
	vector<int> vec;
	int i;
	
	//显示 vec 的原始大小
	cout << "vector size = " <<  vec.size() << endl;
	
	//推入5个值到向量中
	for(i=0; i<5; i++){
		vec.push_back(i);
	}
	
	//显示 vec 扩展后的大小
	cout << "extended vector size=" << vec.size() << endl;
	
	//访问 vec 中的5个值
	for(i=0; i<5; i++){
		cout << "value of vec[" << i << "]=" << vec[i] << endl;
	}
	// 使用迭代器访问之
	vector<int>::iterator vi=vec.begin();
	while(vi != vec.end()){
		cout << "value of v=" << *vi << " | " << endl;
		vi++;
	}
	
	return 0;
}