#include<stdio.h>

// 输出 ascii 码
int main(){
	int j=0;
	for(int i=0; i<127; i++){
		printf("%c (%d)\t", i, i); //就这一行
		
		//其余的是格式换行
		j++;
		if( j%7 == 0){
			printf("\n");
		}
		
		//A/a 前换行
		if(i+1 == 'A' | i+1 == 'a'){
			printf("\n\n");
			j=0;
		}
		//Z/z 后换行
		if(i == 'Z' | i == 'z'){
			printf("\n\n");
			j=0;
		}
	}
	return 0;
}