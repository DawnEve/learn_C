#include<stdio.h>
//结构体的直接引用、指针引用
struct stu{
	int num;
	char *name;
	char sex;
	float score;
} boy1={102,"Zhang ping",'M',78.5},*pstu;

int main(){
	printf("Number=%d\nName=%s\n",boy1.num,boy1.name);
	printf("Sex=%c\nScore=%f\n\n",boy1.sex,boy1.score);
	
	printf("====>pointer\n");
	pstu=&boy1;
	printf("Number=%d\nName=%s\n",(*pstu).num,(*pstu).name);
	printf("Sex=%c\nScore=%f\n\n",(*pstu).sex,(*pstu).score);
	printf("Number=%d\nName=%s\n",pstu->num,pstu->name);
	printf("Sex=%c\nScore=%f\n\n",pstu->sex,pstu->score);
	return 0;
}