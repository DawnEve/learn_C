//��ɸ����N���ڵ�����
#include <stdio.h>
#include <math.h>
#define N 1000 // �趨��������ڵ�����
void main()
{
	int i,j,n,a[N+1];
	for(i=1; i<=N; i++)
		a[i]=i;	//��ʼ������
	
	//ɸѡ
	for(i=2; i<sqrt(N); i++){  //��ѭ�����ֵ��n�Ŀ���
		for(j=i+1; j<=N; j++){
			//֮ǰ��̭�ľͲ��ٱȽ�
			if(a[i]!=0 && a[j]!=0) {
				//��������ѭ����������̭��
				if(a[j]%a[i]==0){
					a[j]=0;
				}
			}
		}
	}
	//��ӡ���
	n=0;
	for(i=2; i<=N; i++){
		if(a[i]!=0){
			printf("%7d",a[i]);
			n++; 
			if(n%10==0) //ÿ10������
				printf("\n");
		}
	}
	
	printf("\n����%d������\n",n);
}