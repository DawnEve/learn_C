#include<stdio.h>
void other(){
	static int nB;
	//nB+=1000;
	printf("nB=%d (in other)\n", nB);
	
}

int main(){
	register int nB=10; //寄存器变量，动态变量，更快的 auto 变量
	printf("-----MAIN------\n");
	printf("nB=%d\n", nB);
	
	other();
	
	printf("-----MAIN------\n");
	printf("nB=%d\n", nB);
}
