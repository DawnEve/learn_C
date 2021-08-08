//结构体：计算学生的平均成绩和不及格的人数。

#include<stdio.h>
struct Student {
	int num;
	char *name;
	char sex;
	float score;
} stus[5]={
	{101,"Li ping",'M',45},
	{102,"Zhang ping",'M',62.5},
	{103,"He fang",'F',92.5},
	{104,"Cheng ling",'F',87},
	{105,"Wang ming",'M',58}
};

int main(){
	int i, nC=0;
	float fAve, fSum=0;
	for(i=0; i<5; i++){
		fSum += stus[i].score;
		if(stus[i].score <60 )
			nC +=1;
	}
	printf("s=%f\n", fSum);
	fAve=fSum/5;
	printf("average=%f\nncount=%d\n", fAve, nC);
	return 0;
}
