//建立静态链表，并输出
#include<stdio.h>

//定义类型
struct Student{
	int sid;
	struct Student *next;
};

int main(){
	struct Student head, stu1, stu2, stu3;
	struct Student *p;
	
	stu1.sid=123;
	stu2.sid=125;
	stu3.sid=129;
	
	head.next=&stu1;
	stu1.next=&stu2;
	stu2.next=&stu3;
	stu3.next=NULL;
	
	//头指针，指向第一个元素的指针
	p=&head; //单字母是为了方便书写
	while(p->next != NULL){
		p=p->next;
		//显示学生信息
		printf("student ID: %d\n", p->sid);
	}
	return 0;
}