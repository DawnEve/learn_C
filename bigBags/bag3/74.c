/*
* ժ    Ҫ��ʶ����󰰵㣬����ʵ��(���㣺��Ԫ������һ�е����ֵ��ͬʱ����һ�е���Сֵ)
*/

#include <stdio.h>
#define M 11
#define N 11

void HaveAndian(int b[][11], int m, int n); // ��ά���飬Ҫ��������ά�������ά��

int main()
{
	int arr[M][N],i,j;//�˴�  ���������ĵ�һά  Ҫ�� ����� �����в�������ĵ�һά  һ��
	int m,n;

	//��������������
	printf("��������������m:(0~10)");
	scanf("%d",&m);

	printf("��������������n:(0~10)");
	scanf("%d",&n);

	//�������
	for (i=0; i<m; i++)	{
		printf("�������%d��",i);
		for (j=0; j<n; j++)	{
			scanf("%d",&arr[i][j]);
		}
	}

	//�������
	printf("\t�����������������\n");
	for (i=0; i<m; i++)	{
		for (j=0; j<n; j++)	{
			printf("%5d",arr[i][j]);
		}
		printf("\n");
	}

	//���ú����ж��Ƿ��а��㣬��������
	HaveAndian (arr, m, n);  
	/*���飺�������飬��þ����������������������в������׳���   */
	return 0;
}


/*
new function
* ����ԭ�ͣ�void HaveAndian(int arr[][11], int m, int n);
* ʵ�ֹ��ܣ��ж��Ƿ��а��㣬��������(���㣺��Ԫ������һ�е����ֵ��ͬʱ����һ�е���Сֵ)
* ������ ������������������ ����������� �����������;
* ����ֵ :��;
* �������ۣ���ȱ�ݡ�������һ��ʼҪ��������ĵ�һά����һ���������������������
*/

void HaveAndian(int arr[][11], int m, int n){
	int i, j, k, maxj, flag = 1, flagprint = 0;//flag = 1�Ǵ��е���Сֵ, flagprint = 0���ӡ��
    //�������
	printf("\t�ڱ��������������һ��\n");
	for (i=0; i<m; i++){
		for (j=0; j<n; j++){
			printf("%5d",arr[i][j]);
		}
		printf("\n");
	}

	for (i=0; i<m; i++){
		//�ҳ�һ�е����ֵ
		maxj = 0;
		for (j=0; j<n; j++){
			if (arr[i][j] > arr[i][maxj]){
				maxj = j;
			}
		}

		//��֤�Ƿ��Ǳ�����Сֵ
		for (k=0; k<m; k++){
			flag = 1;//�ٶ�flag = 1���Ǵ��е���Сֵ

			//����бȴ�ֵ��С�����֡���
			if (arr[k][maxj] < arr[i][maxj]){
				flag = 0;//���Ǳ�����Сֵ
				break;
			}
		}
		
		//���û�бȴ�ֵ��С�����֡���
		if (flag == 1){
		   printf("��%d�е�%d�е�%dΪ����,\n", i, maxj, arr[i][maxj]);
		   flagprint = 1;//��ʾ�Ѿ��ҵ��� ��ӡ����
		}
	}/* the end of for */

	//��� ������ ���ж���ϣ�����û���ְ��㣬�����´��� 
	if (flagprint == 0){
		printf("�˾������ް��㣡\n");
	}
}
