#include <stdio.h>
#include <string.h>
#define NUM 5   /*������Ҽ���һ��;����β���������˰��죬������ */
void main()     /*�����������������ѧ���������ͳɼ���Ȼ�������˳���źõ���������Ӧ�ĳɼ�  */
{
	int i,j;
	char name[NUM][10],stmp[10];
	float score[NUM],tmp;
	
	printf("������������ͳɼ����ÿո���س��ֿ�\n");
	for(i=0;i<NUM;i++)
		scanf("%s%f",name[i],&score[i]);
	/*name[i]�����ַ������i�еĵ�ַ�����Բ���&��
	��score[i]����һ������ֵ����Ҫ��ַ����*/
	printf("\n");

	//����������
	for(i=0;i<NUM-1;i++){
		for(j=i+1;j<NUM;j++){    /*˫��ѭ������i��ͺ����ÿһ��Ƚ�  */
			if(score[i]<score[j]){/*���Ƚϣ��ϴ�ĳɼ�������λ  */
				/*�����ɼ� */
				tmp=score[i];
				score[i]=score[j];
				score[j]=tmp;
				/*�������� */
				strcpy(stmp,name[i]);/*stmp���ַ�������,����Ϊ10��������ת������*/
				strcpy(name[i],name[j]);
				strcpy(name[j],stmp);
			}
		}
	}	
	printf("\n�����Ϊ��\n");
	for(i=0;i<NUM;i++)
		printf("%10s: %3.1f\n",name[i],score[i]);
}