#include<stdio.h>

int main(){
	double dbNum1, dbNum2;
	long lM, lN;
	
	dbNum1=3/2 + 8/3;
	dbNum2=3.0/2+8/3.0;
	printf("dbNum1=%f, dbNum2=%f\n", dbNum1, dbNum2);
	//dbNum1=3.000000, dbNum2=4.166667
	
	lM=2147483648-1;//2**31-1
	lN=2147483648+1L;
	printf("lM=%ld, lN=%ld\n", lM, lN);
	//lM=2147483647, lN=-2147483647
	
	return 0;
}


