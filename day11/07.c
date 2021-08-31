//磁盘文件上有3个学生数据，要求读入第1，3学生数据并显示
#include<stdio.h>

struct student_type{
	char name[10];
	int num;
	int age;
	char addr[15];
} stud[1];

int main(){
	FILE *fp;
	char filename[80];
	long length, len=sizeof(struct student_type);
	int i=0;
	printf("input a filename: dustbin/001.dat\n"); 
	//05中定义的文件 $ find . | xargs grep "001.dat" 2>/dev/null --color=auto
	gets(filename);
	
	fp=fopen(filename, "rb");
	if( fp==NULL ){
		printf("file not found!\n");
	}else{
		// fseek(文件型指针变量，偏移量，起始位置)；
		fseek(fp, 0L, SEEK_END);
		length=ftell(fp);
		printf("Length of File is %ld bytes\n", length);
		
		//指针倒退一个结构体长度，读取信息
		printf("length=%ld\n", len);
		fseek(fp, -len*1, SEEK_END);
		fread( &stud[i], sizeof(struct student_type),1, fp);
		printf("%-10s %4d %4d %-15s\n", 
			stud[i].name, stud[i].num, 
			stud[i].age, stud[i].addr);
		
		fclose(fp);
	}
	return 0;
}
// Length of File is 72 bytes