/*
* �ļ���ʶ����ϰ �����͵�35�е���
* ժ    Ҫ��N������ѡ�����򣨴�С����
*/
#include <stdio.h>
#include <math.h>
#define N 10  //�趨�����Ԫ�ظ���
void main() {
	int i,j,min,temp,a[11];
	printf("enter data:\n");
	//1.����
	for(i=1; i<=N; i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
	//2.�����ʼֵ
	printf("the original numbers:\n");
	for(i=1; i<=N; i++)	{
		printf("%5d",a[i]);
	}
	printf("\n");
	//3.����
	for(i=1; i<=N; i++){
		min=i; //ѡ����СԪ�ص��±�
		for(j=i+1; j<=N; j++){
			if(a[min]>a[j])
				min=j;
		}
		if(min!=i){
			temp=a[min];
			a[min]=a[i];
			a[i]=temp;
		}
	}
	//4.��ӡ������
	printf("the sorted numbers:\n");
	for (i=1; i<=N; i++){
		printf("%5d",a[i]);
	}
	printf("\n");
}