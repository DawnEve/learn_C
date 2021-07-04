#include<stdio.h>

int main(){
	double dbNum1, dbNum2;
	long lM, lN;
	
	dbNum1=3/2 + 8/3;
	dbNum2=(double)3/2 + 8/(double) 3;

	printf("dbNum1=%f, dbNum2=%f\n", dbNum1, dbNum2);
	//dbNum1=3.000000, dbNum2=4.166667
	
	return 0;
}


