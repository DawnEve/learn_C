#include<stdio.h>

//putchar()的用法 

int main(){
	int N=80;
	char msg[]="This is a book, display with putchar()";
	
	for(int i=0; i<N; i++){
		if(msg[i]=='\0'){
			putchar('\n');
			break;
		}else{
			putchar(msg[i]);
		}
	}

	return 0;
}