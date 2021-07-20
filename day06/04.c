#include<stdio.h>
#define M (y*y+3*y)
#define N y*y+3*y
int main(){
	int nSum, y, nSum2;
	printf("intput a number:");
	scanf("%d", &y);
	nSum=2*M+3*M;
	nSum2=2*N+3*N;
	printf("nSum=%d, nSum2=%d\n", nSum, nSum2);
}

//不加括号则替换后为 y=2时，
// 5*M=5*(y*y+3*y)=5*10=50
//2*N+3*N=2*y*y+3*y+ 3*y*y+3*y=5*4+6*2=32
