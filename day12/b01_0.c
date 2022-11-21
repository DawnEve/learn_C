#include<stdio.h>

// 随机数 v0
//#include "b01_rand0.c"

extern unsigned int rand0(void);
//gcc b01_0.c b01_rand0.c -o a.exe

int main(){
	int i;
	for(i=0; i<5; i++){
		printf("%d\n", rand0() );
	}
	return 0;
}