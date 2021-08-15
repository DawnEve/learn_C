// 文件的打开、关闭
#include<stdio.h>
int main(){
	FILE *fp;
	char ch, filename[]="../01.c", mode[]="r";
	
	if( (fp=fopen(filename, mode)) == NULL ){
		fprintf(stderr, "Error in opening file %s in mode %s", 
			filename, mode);
		return 1;
	}
	
	printf("File open success! \n");
	fclose(fp);
	return 0;
}