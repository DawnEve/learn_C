#include <stdio.h>
#define N 5
void main()   //��ָ����һ���������ƽ���ֺͳ���ƽ���ֵ�����
{
	float score[N],sum=0,*p,v;
	int i,num=0;
	printf("������%d��ѧ���ĳɼ���\n",N);

	for(p=score,i=0;i<N;i++)
	{
		scanf("%f",p); //debug: %fд����%d������ƽ����������
		sum+=*p;
		p++;
	}
	v=sum/N;
	for(p=score,i=0;i<N;i++)
		if(*(p+i)>v)
			num++;
	printf("average=%5.1f,num=%d\n",v,num);
}