#include <stdio.h>
#include <string.h>
//����һ ����ṹ�����������ٶ������
struct Student1
{
	int num;
	char name[20];
	int age;
	float score;
	char addr[30];
};
struct Student1 student1,student2;
//�����������ʱ������ռ䣬�������ʱ�ŷ���ռ�
//�ṹ���Ա����Ƕ�׶���
//��Ա���ͱ�����������ͬ



//������ ͬʱ����ṹ�����ͺ� �ṹ�����ͱ���
struct Stu2
{
	int num;
	char name[20];
	int age;
	float score;
	char addr[30];
} stu1,stu2;



//������ ֱ�Ӷ���ṹ�����ͱ��������Ե��ṹ������
struct
{
	int num;
	char name[20];
	int age;
	float score;
	char addr[30];
}s1,s2, s3;



//�ṹ�����������  �ṹ�������.��Ա��
//����ֱ�����帳ֵ�������ṹ��������ͬʱ����ֱ�����帳ֵ
//�ҵ����һ���ĳ�Ա���ܸ�ֵ
//�ṹ���Ա���Ժ���ͨ����һ��ʹ�á����㣬����ʽ��Ҫ��ǰ׺
//�������ó�Ա�ĵ�ַ��Ҳ�������ýṹ������ĵ�ַ ??

//��ʼ��
struct Student 
{
	int num;
	char name[20];
	int age;
	float score;
	char addr[30];
} student_A1={89031,"����",15, 85, "123����·"};

//��������   �ͱ�����ͬ����������β����[20]
//��ʼ��  stu[30]={{,,},{,,},{,,},{,,}};   Ҫ�ӽ������� ���ֺ�
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