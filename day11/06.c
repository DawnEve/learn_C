//对一个磁盘文件进行显示和复制两次操作

//错误：getc() 之类的返回 int，而不是 char。
// while ((c = getc(file)) != EOF) loop won't stop executing.
//https://stackoverflow.com/questions/13694394/while-c-getcfile-eof-loop-wont-stop-executing/
# include<stdio.h>
int main(){
	FILE *fp1, *fp2;
	fp1=fopen("dustbin/test4.txt", "r");
	fp2=fopen("dustbin/test4-2.txt", "w");
	
	//读取文件并显示
	while( !feof(fp1) ){
		putchar( getc(fp1) );
	}
	printf("====\n");
	
	rewind(fp1); //重置指针到起始位置
	
	while( !feof(fp1) ){
		putc( getc(fp1), fp2);
		// putchar () is equivalent to putc (c, stdout)
	}
	
	fclose(fp1);
	fclose(fp2);
	return 0;
}