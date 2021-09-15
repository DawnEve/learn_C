#include <stdio.h>
#include <string.h>
//方法一 定义结构体类型名，再定义变量
struct Student1
{
	int num;
	char name[20];
	int age;
	float score;
	char addr[30];
};
struct Student1 student1,student2;
//定义变量类型时不分配空间，定义变量时才分配空间
//结构体成员可以嵌套定义
//成员名和变量名可以相同



//方法二 同时定义结构体类型和 结构体类型变量
struct Stu2
{
	int num;
	char name[20];
	int age;
	float score;
	char addr[30];
} stu1,stu2;



//方法三 直接定义结构体类型变量，忽略掉结构体名字
struct
{
	int num;
	char name[20];
	int age;
	float score;
	char addr[30];
}s1,s2, s3;



//结构体变量的引用  结构体变量名.成员名
//不能直接整体赋值；但当结构体类型相同时可以直接整体赋值
//找到最低一级的成员才能赋值
//结构体成员可以和普通变量一样使用、运算，但形式上要加前缀
//可以引用成员的地址，也可以引用结构体变量的地址 ??

//初始化
struct Student 
{
	int num;
	char name[20];
	int age;
	float score;
	char addr[30];
} student_A1={89031,"李林",15, 85, "123北京路"};

//定义数组   和变量相同，但变量结尾加上[20]
//初始化  stu[30]={{,,},{,,},{,,},{,,}};   要加结束符号 即分号
struct Student  stuB[3]={
	{1,"Lilei", 20, 95, "1th Road"},
	{2,"Joy", 21, 60, "9th Road"},
	{3,"lily", 23, 80, "5th Road"}
};

int main(){
	int i=0;
	student1.num=100;
	strcpy(student1.name,"Tom");
	printf("method1: num=%d, name=%s\n", student1.num, student1.name);
	
	stu2.age=18;
	strcpy(stu2.addr, "#100,Kexue Road");
	printf("method2: age=%d, addr=%s\n", stu2.age, stu2.addr);
	
	s3.age=20;
	printf("method3: age=%d, sizeof=%d\n", s3.age, sizeof(s3));
	
	printf("init A: score=%2.1f, name=%s\n", student_A1.score, student_A1.name);
	
	for(i=0; i<3; i++){
		printf("=>num:%d, name:%s, score:%3.1f\n", 
			stuB[i].num, stuB[i].name, stuB[i].score);
	}
	return 0;
}