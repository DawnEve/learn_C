#include<stdio.h>
#include<string.h>
/*�ṹ������ã����ַ���
1 �ṹ�������.��Ա��
2  (*P).��Ա��
3  p->��Ա�� */
struct student{
	long int num;
	char name[20];
	char sex;
	float score;
};  //����Ҫ�ӷֺţ�������

void main(){
	struct student stu1, *p; //����һ��������һ��ָ��
	p=&stu1;
	stu1.num=89101L;         //�����͵ĸ�ֵ  �������L
	strcpy(stu1.name,"����");
	(*p).sex='M';
	p->score=95;
	printf("ѧ�ţ�%d\n������%s\n�Ա�%c\n������%3.2f\n",
		stu1.num, (*p).name, p->sex, p->score);
}