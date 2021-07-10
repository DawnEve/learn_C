#include<stdio.h>

int main(){
	int i, j;//i row, j column 
	for(i=0; i<=6; i++){
		for(j=1; j<=i; j++){
			printf("*");
		}
		printf("\n");
	}
	   
	
	return 0;
}
