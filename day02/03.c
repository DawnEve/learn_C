#include<stdio.h>
// while()
	
int main(){
	int n=0;
	printf("input a string:\n");
	while(getchar()!='\n'){
		n++;
	}
	printf("length = %d\n", n);
	return 0;
}
