#include<stdio.h>
#include<string.h>
/*结构体的引用，三种方法
1 结构体变量名.成员名
2  (*P).成员名
3  p->成员名 */
struct student{
	long int num;
	char name[20];
	char sex;
	float score;
};  //这里要加分号！！！！

void main(){
	struct student stu1, *p; //定义一个变量，一个指针
	p=&stu1;
	stu1.num=89101L;         //长整型的赋值  后面加上L
	strcpy(stu1.name,"刘林");
	(*p).sex='M';
	p->score=95;
	printf("学号：%d\n姓名：%s\n性别：%c\n分数：%3.2f\n",
		stu1.num, (*p).name, p->sex, p->score);
}