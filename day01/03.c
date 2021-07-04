#include<stdio.h>
int main(){
	char cA1, cB1, cC1;
	cA1=127; cB1=128; cC1=129;
	printf("cA1=%d, cB1=%d, cC1=%d\n", cA1, cB1, cC1); //cA1=127, cB1=-128, cC1=-127
	
	//2
	unsigned char cA2, cB2, cC2;
	cA2=127; cB2=128; cC2=129;
	printf("cA2=%u, cB2=%u, cC2=%u\n", cA2, cB2, cC2); //cA2=127, cB2=128, cC2=129
	
	//3
	int nX1, nY1; //[0,2**31-1]
	nX1=2147483647; nY1=2147483649;
	printf("nX1=%d, nY1=%d\n", nX1, nY1); //nX1=2147483647, nY1=-2147483647
	
	//4
	long lX2, lY2;
	lX2=2147483647; lY2=2147483649;
	printf("lX2=%d, lY2=%d\n", lX2, lY2); //lX2=2147483647, lY2=-2147483647
	
	return 0;
}