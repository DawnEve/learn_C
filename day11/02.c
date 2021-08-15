//按字符读写的函数fgetc()、fputc()
//从键盘输入字符，逐个存到磁盘文件中，直到输入‘#“为止

#include<stdio.h>
int main(){
	char ch;
	//写入文件
	FILE *fp=fopen("dustbin/test1.txt", "w");
	while( (ch=getchar())!= '#' ){
		fputc(ch, fp);
	}
	fclose(fp);
	
	//读出文件
	fp=fopen("dustbin/test1.txt","r");
	while( (ch=fgetc(fp))!=EOF ){
		printf("%c", ch);
	}
	printf("\n");
	fclose(fp);
	return 0;
}