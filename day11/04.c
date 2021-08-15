//按格式要求读写的函数fprintf()、fscanf()
#include<stdio.h>
int main(){
	char str1[80], str2[80];
	int len1, len2;
	FILE *fp;
	if( (fp=fopen("dustbin/test3.txt", "w"))==NULL ){
		puts("Error: open file failed AS w\n");
		return -1;
	}
	//写入文件
	printf("input 1 word and 1 number: rose 512\n");
	fscanf(stdin, "%s %d", str1, &len1 ); //read from keyboard
	fprintf(fp, "%s %d", str1, len1); //write to file
	fclose(fp);
	
	//读入文件
	if( (fp=fopen("dustbin/test3.txt", "r"))==NULL ){
		puts("Error: open file failed as r\n");
		return -1;
	}
	fscanf(fp, "%s %d", str2, &len2); //read from file
	fprintf(stdout, "%s %d", str2, len2);//to screen
	fclose(fp);
	return 0;
}
