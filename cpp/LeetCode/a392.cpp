//a392.cpp is-subsequence

#include<iostream>
using namespace std;

bool isSubsequence(string s, string t) {
	if(s.size()==0){
		return true;
	}else if(t.size()==0){
		return false;
	}else if(s.size() > t.size()){
		return false;
	}
	
	//2.如果长度相等
	if(s.size() == t.size()){
		return s == t;
	}
	
	//3.如果长度不等，前者短
	int j=0;
	//遍历长字符串
	for(int i=0; i<t.size(); i++){
		//如果相等，短的下标自增。
		if(s[j] == t[i]){
			j++;
			//如果短的正好遍历完，则返回true
			if(j==s.size()){
				return true;
			}
		}
	}
	// 否则都是false	
	return false;
}

int main(){
	string s1="abc", s2="ahbgdc"; //1
	/*
	s1 = "axc", s2 = "ahbgdc"; //0
	s1 = "abc", s2 = ""; //0
	s1 ="aaaaaa", s2="bbaaaa"; //0
	s1="b", s2="c"; //0
	s1="bb", s2="ahbgdc"; //0
	s1="b", s2="abc"; //1
	*/
	
	bool rs= isSubsequence(s1, s2);
	cout << "s1=" << s1 << ", s2=" << s2 << endl;
	cout << rs << endl;
	
	return 0;
}