#include<stdio.h>

//getchar()的用法 

int main(){
	int N=80;
	char buffer[N];
	int i, ch;
	
	printf("please input a string, less than %d: ", N);
	// 长度在范围内，且输入 回车时停止
	for(i=0; (i<N-1) && ( ((ch=getchar()) != EOF)  && (ch!='\n')  ); i++){
		buffer[i]=(char)ch;
	}
	// 给字符串添加结尾
	buffer[i]='\0';
	
	printf("string = %s\n", buffer );
	return 0;
}