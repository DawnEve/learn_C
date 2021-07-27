#include<stdio.h>
//指向数组元素的指针变量作函数参数：求五个学生的C语言平均成绩。

//打印数组: 形参为指针
void printArr(int *arr, int N){
	for(int i=0; i<N; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

//求平均分
float avgArr(int scores[], int N){
	int i=0;
	float sum;
	for(;i<N; i++){
		sum+=scores[i];
	}
	return sum/N;
}

int main(){
	int i=0, N=5, scores[5];
	float avgScore;
	printf("please input 5 scores, one per line\n");
	for(i=0; i<N; i++){
		scanf("%d", &scores[i]);
	}
		
	avgScore=avgArr(scores, N);
	printArr(scores, N);
	printf("average score is %5.2f\n", avgScore);
	return 0;
}
