#include <stdio.h>
#define N 5
void main()   //用指针求一个班分数的平均分和超过平均分的人数
{
	float score[N],sum=0,*p,v;
	int i,num=0;
	printf("请输入%d名学生的成绩：\n",N);

	for(p=score,i=0;i<N;i++)
	{
		scanf("%f",p); //debug: %f写成了%d，导致平均分总是零
		sum+=*p;
		p++;
	}
	v=sum/N;
	for(p=score,i=0;i<N;i++)
		if(*(p+i)>v)
			num++;
	printf("average=%5.1f,num=%d\n",v,num);
}