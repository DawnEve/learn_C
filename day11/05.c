//按数据块读写的函数fread()、fwrite()
//从键盘输入4个学生数据，把他们转存到磁盘文件中去
#include<stdio.h>
#define SIZE 2

struct student_type{
	char name[10];
	int num;
	int age;
	char addr[15];
} stud[SIZE];

// 读取文件
int display(){
	FILE *fp;
	int i;
	if( (fp=fopen("dustbin/001.dat", "rb"))==NULL ){
		printf("Error: failed open file as rb\n");
		return -1;
	}
	for(i=0; i<SIZE; i++){
		fread( &stud[i], sizeof(struct student_type),1, fp);
		printf("%-10s %4d %4d %-15s\n", 
			stud[i].name, stud[i].num, 
			stud[i].age, stud[i].addr);
	}
	fclose(fp);
	return 0;
}

//写文件 dustbin
int save(){
	FILE *fp;
	int i;
	if( (fp=fopen("dustbin/001.dat","wb"))==NULL ){
		printf("Error: failed open file as wb\n");
		return -1;
	}
	for(i=0; i<SIZE; i++){
		if( fwrite(&stud[i], sizeof(struct student_type), 1, fp)!=1 ){
			printf("Error: file write error\n");
			return -1;
		}
	}
	fclose(fp);
	return 0;
}

// 主程序
int main(){
	int i;
	printf("input %d student info: name num age addr\n", SIZE);
	for(i=0; i<SIZE; i++){
		scanf("%s %d %d %s", stud[i].name, &stud[i].num,
			&stud[i].age, stud[i].addr);
	}
	save();
	display();
	return 0;
}