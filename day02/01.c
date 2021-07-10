#include<stdio.h>
int main(){
	int n;
	printf("input a score bewtween [0, 100]: ");
	//n=getchar();
	scanf("%d", &n);
	printf("Your input is %d\n", n);
	
	if(n<0){
		printf("Error: score must be >=0\n");
	}else if (n>100){
		printf("Error: score must be <=100\n");
	}else if (n>=90){
		printf("score: A\n");
	}else if(n>=80){
		printf("score B\n");
	}else if(n>=70){
		printf("score C\n");
	}else{
		printf("score D\n");
	}
	return 0;
}
