//指针数组作为参数：将多个字符串按字母顺序输出
#include<stdio.h>
#include<string.h>

void sort(char *arr[], int n){
	int i, j;
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if(strcmp(arr[i], arr[j])<0){
				char *ptr=arr[i];
				arr[i]=arr[j];
				arr[j]=ptr;
			}
		}
	}
}

void printStr(char *arr[], int n){
	int i;
	for(i=0; i<n; i++){
		printf("%s\t", arr[i]);
	}
	printf("\n");
}

int main(){
	int N=6;
	char *fruits[]={"banana", "apple", "pear", "grape", "orange", "pineapple"};
	
	//查看地址，内容
	printf("pointer:fruits=%p, &fruits[0]=%p\n", fruits, &fruits[0]);
	for(int i=0; i<N; i++){
		printf("%d | pointer:%p, str:%s\n",i, fruits[i], fruits[i]);
	}
	printf("\n");
	
	printStr(fruits, N);
	sort(fruits, N); //排序，就是交换数组中的指针顺序。
	printStr(fruits, N);
	
	//查看地址，内容
	for(int i=0; i<N; i++){
		printf("%d | pointer:%p, str:%s\n",i, fruits[i], fruits[i]);
	}
	printf("\n");
	return 0;
}
