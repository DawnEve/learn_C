#include<stdio.h>

// 随机数 v1 可以设置随机数种子
//#include "b01_rand1.c"
//gcc b01_1.c b01_rand1.c -o a.exe

extern unsigned int rand1(void);
extern unsigned int srand1(unsigned int);


int main(){
	int i;
	unsigned int seed;
	printf("Pls input an seed:");
	while( scanf("%u", &seed) ==1 ){
		srand1(seed); //重置随机数种子

		for(i=0; i<5; i++){
			printf("%d\n", rand1() );
		}
		printf("Pls enter next seed(q to quit):");
	}
	printf("Done!\n");
	return 0;
}