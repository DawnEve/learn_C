#include<iostream>
#include<string>
#include<map>
using namespace std;

// 字典 https://blog.csdn.net/Flag_ing/article/details/120166575
bool isIsomorphic(string s, string t) {
	map<char, char> dict;
	for(int i=0; i<s.size(); i++){		
		//如果不存在key，就新建
		if( dict.find(s[i]) == dict.end() ){
			// 如果值已经在也不行
			for(auto c: dict){
				if(c.second == t[i]){
					return false;
				}
			}
			dict[s[i]] = t[i];
		}else{
		//如果存在该key，且查询不对，则返回falst
			if( dict[s[i]] != t[i] ){
				return false;
			}
		}
	}	
	return true;
}


int main(){
	string s1="egg", s2="add";
	//string s1="foo", s2="bar"; //0
	//string s1="badc", s2="baba"; //0
	
	bool rs=isIsomorphic(s1, s2);
	cout << s1 << endl;
	cout << s2 << endl;
	cout << "result:" << rs << endl;
	
}