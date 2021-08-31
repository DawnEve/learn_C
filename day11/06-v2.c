//对一个磁盘文件进行显示和复制两次操作

# include<stdio.h>
int main(){
	FILE *fp1, *fp2;
	fp1=fopen("dustbin/test4.txt", "r");
	fp2=fopen("dustbin/test4-2.txt", "w");
	
	//读取文件并显示
	char ch=getc(fp1);
	while( ch != EOF ){
		putchar( ch );
		ch = getc(fp1);
	}
	if(feof(fp1)){
		printf("\nThe end of file1\n");
	}
	printf("====\n");
		putchar( getc(fp1) );
	printf("====\n");
	rewind(fp1); //重置指针到起始位置
	
	while( (ch=getc(fp1))!=EOF ){
		putc( ch, fp2);
		// putchar () is equivalent to putc (c, stdout)
	}
	
	fclose(fp1);
	fclose(fp2);
	return 0;
}