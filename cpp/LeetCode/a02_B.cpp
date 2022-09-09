//add-two-numbers/
#include<iostream>
using namespace std;

//第二次尝试，突破溢出错误。不能借助 int 中间量了。

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


// arr 2 linked list
ListNode* arr2LinkedList(int arr[], int len){
	ListNode* pHead=new ListNode(arr[0]), *p=pHead;
	if(len ==1) 
		return p;
	for(int i=1; i<len; i++){
		p->next = new ListNode(arr[i]);
		p = p->next;
	}
	return pHead;
}



// 相加
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
	ListNode* pHead=new ListNode(), *p=pHead;
	// 3个数字相加，位数相同的2个，和上一个进位的
	int inc=0, flag1=1, flag2=1;
	
	while(flag1 + flag2>0 ){
		
		//计算下一个值
		int v1=flag1==0?0:l1->val, v2=flag2==0?0:l2->val;
		int val=v1+v2+inc;
		if(val>=10){
			inc=1;
			val = val % 10;
		}else{
			inc=0;
		}
		//当前值
		//printf("[#%d] v1=%d, v2=%d, val=%d\n", w, v1, v2, val);
		p->val = val;
				
		// 下一个位置
		if(l1->next)
			l1 = l1->next;
		else
			flag1=0;
		
		if(l2->next)
			l2 = l2->next;
		else
			flag2=0;
		
		// 判断位置是否为0
		if(flag1 + flag2>0){
			p->next = new ListNode();
			p = p->next;
		}
	}
	// 最后是否进1
	if(inc!=0){
		p->next = new ListNode(1);
	}
	return pHead;
}

int main(){
	//int arr1[]={9};
	//int arr2[]={0,0,6};
	
	//[9] [1,9,9,9,9,9,9,9,9,9]
	//int arr1[]={9};
	//int arr2[]={1,9,9,9,9,9,9,9,9,9};
	
	int arr1[] = {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1};
	int arr2[]={5,6,4};
	
	
	ListNode *l1=arr2LinkedList( arr1, sizeof(arr1)/sizeof(int) );
	ListNode *l2=arr2LinkedList( arr2, sizeof(arr2)/sizeof(int) ); 
	
	//测试函数
	print(l1);
	cout << endl;
	
	print(l2);
	cout << endl;
	
	// 运算结果
	ListNode* p1 =addTwoNumbers(l1, l2);
	cout << "result:";
	print(p1);
}