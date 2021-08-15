//按字符串读写的函数fgets()、fputs()
//从键盘读入字符串存入文件，再从文件读回显示
#include<stdio.h>
#include<string.h>
int main(){
	char string[100];
	//写入文件
	FILE *fp=fopen("dustbin/test2.txt", "w");
	if( fp== NULL ){
		printf("Error: open file failed as w\n");
		return -1;
	}
	printf("Please input some lines of text\n");
	// char *gets(char *str) 从标准输入 stdin 读取一行,
	// 并把它存储在 str 所指向的字符串中。
	while (strlen(gets(string)) >0){
		fputs(string, fp);
		fputs("\n", fp);
	}
	fclose(fp);
	
	//读出文件
	if( (fp=fopen("dustbin/test2.txt","r")) == NULL){
		printf("Error: open file failed as r\n");
		return -1;
	}
	while( fgets(string, 64, fp)!=NULL ){
		fputs(string, stdout); //写到标准输出
	}
	fclose(fp);
	printf("\n");
	return 0;
}