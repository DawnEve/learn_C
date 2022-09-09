//add-two-numbers/
#include<iostream>
using namespace std;


//定义的数据结构：链表
struct ListNode {
    int val; //值
    ListNode *next; //指向下一个的指针
	
	//接下来是3个构造方法
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

//打印链表
void print(ListNode* p){
	cout << "[";
	while(p->next){
		cout << p->val << ",";
		p=p->next;
	}
	cout << p->val << "]" << endl;
}

// int 2 linked list
ListNode* int2LinkdList(int num){
	ListNode *p = new ListNode( num % 10), *pHead=p;
	while( (num = num/10) >0 ){
		p->next = new ListNode( num %10 );
		p = p->next;
	}
	return pHead;
}

// LinkedList 2 int
int getValue(ListNode* p){
	int value=0, i=1;
	while(p->next){
		value += p->val *i;
		p=p->next;
		i *=10;
	}
	value += p->val *i;
	return value;
}

// 相加
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
	// 1. get value, add;
	int value = getValue(l1) + getValue(l2);
	// 2. to linked list
	return int2LinkdList(value);
}

int main(){
	//两种构建链表的方式
	//l1 = [2,4,3], l2 = [5,6,4]
	/*ListNode *l1=new ListNode(2, 
		new ListNode(4, 
			new ListNode(3)
		)
	);
	
	ListNode *l2=int2LinkdList(465);*/
	//[9] [1,9,9,9,9,9,9,9,9,9]
	ListNode *l1=int2LinkdList(9);
	ListNode *l2=int2LinkdList(600); //失败，如果int太大，则会溢出，比如 
	//ListNode *l2=int2LinkdList(9999999991); //warning: overflow in implicit constant conversion
	
	
	//测试函数
	print(l1);
	cout << getValue(l1) << endl;
	cout << endl;
	
	print(l2);
	cout << getValue(l2) << endl;
	cout << endl;
	
	// 运算结果
	ListNode* p1 =addTwoNumbers(l1, l2);
	int result =getValue(p1);
	cout << "result:";
	print(p1);
	cout << result<< endl;
}