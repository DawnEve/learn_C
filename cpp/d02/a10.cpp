/*
* 摘    要：数组的两种表示形式 char *week[10]={}; char week[7][10]={};
*/
#include  <iostream>
using namespace std;

void test1(){
	// 这2个都是数组，都不能自增。其元素不同：第一个是指针，第二个是字符数组。
	const char *pWeekday[7] = {"Sunday", "Monday", "Tuesday", "Wednesday",
		"Thursday","Friday", "Saturday"};
	char arrWeekday[][10] = {"Sunday", "Monday", "Tuesday", "Wednesday",
		"Thursday","Friday", "Saturday"};
	
	//1. 占用空间不同
	cout << "\nPart I: size differ" << endl;
	cout << "static region: " << (void *) "good" << endl; //静态区的变量
	int a=10;
	cout << "normal region: " <<  &a << endl; 
	
	// 指向字符串的指针构成的数组 8 * 7 =56
	cout << "  pWeekday: " << pWeekday << ", size:" << sizeof(pWeekday) << endl;
	// 字符数组的数组 7*10 =70
	cout << "arrWeekday: " << arrWeekday << ", size:" << sizeof(arrWeekday) << endl;
	
	//2. 输出相同，内存位置不同
	cout << "\nPart II: output same value, but differ address" << endl;
	cout << "Output pWeekday:" << endl;
	for(int i=0; i<7; i++){
		// 保存的本来就是指针，指向字符串 (的第一个字符)
		cout << "\t"<< (void *)pWeekday[i] << ": " << pWeekday[i] << endl;
	}
	cout << endl;
	//
	cout << "Output arrWeekday:" << endl;
	for(int i=0; i<7; i++){
		// 数组 可以自动变 指针，指向其第一个元素。
		cout << "\t"<<  &arrWeekday[i] << "," << (void *)arrWeekday[i] << ": " << arrWeekday[i] << endl;
	}
	
	//3. 指针指向字面量，不能用指针修改；数组内是拷贝，可以修改
	cout << "\nPart III: pointer to static, can NOT modify; while array is copy, can" << endl;
	//pWeekday[1][1]='X'; //error: assignment of read-only location '*(pWeekday[1] + 1)'
	arrWeekday[1][1]='X';
	cout <<arrWeekday[1] << endl;
	
	//4. 指针可自增，而数组名本身是数组常量.
	cout << "\nPart IV: pointer can increase, while arr name can NOT" << endl;
	//两个都是数组，元素1个是数组，一个是指针。只能使用元素比较差异
	//arrWeekday[0]++; //error: lvalue required as increment operand
	cout << "before:" << pWeekday[0] << endl;
	pWeekday[0]++;
	cout << "after :" << pWeekday[0] << endl;
}

int main(){
	test1();	
	return 0;
}
