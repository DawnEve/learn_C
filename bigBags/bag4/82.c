/*
* ��������   
#ifdef WANG  
{  }  
#endif   //���Ը�����

* ժ    Ҫ����֤��m�����η���m�����������ĺ�(�������� ����)  1**3=1��2**2=3+5��3**3=7+9+11 ����
*/
#include  <stdio.h>

//����ʱ���壬���ڴ�ӡ�м������Ժ���ǰ�����ע�ͷ��ţ�������ʾ�м��ӡ
//#define WANG_JL  

//��������
int isOdd(int m);
void MyPrint(int, int);
int nOddSum(int, int);


int main(){
	int   num, flag = 1;
	
	//1. ��������
	printf("\tPC �������֤��1290\n\nm�����η���m�����������ĺ�  1**3=1��2**2=3+5��3**3=7+9+11 ����\n");
	printf("������һ��������������֤:");
	scanf("%d", &num);

	flag = isOdd(num);

	if (1 == flag)	{
		printf("\n��֤ͨ����\n");
	}else if (0 == flag)	{
		printf("%dδ��ͨ����֤�������������ֹ���֤��\n", num);
	}else if (-1 == flag)	{
		printf("%d <= 0, ��������������\n", num);
	}
	return 0;
}

/* �ж�  m�����η���m�����������ĺͣ�
������ֵ��-1 ��ʾ���븺����1 ��ʾ��֤�ɹ��� 0 ��ʾ��֤ʧ�ܣ� */
int isOdd(int m){
	//���� ���� �� ����
	int  i, nCube = m*m*m;

	//�Ƿ�����
	if (m <= 0) return -1;

	for (i=1; i <= nCube/m; i++){
		if (nCube == nOddSum(i, m))	{
			printf("\n%d�����η�%d = ", m, nCube);
			MyPrint(i, m);
			printf("\n");
			return 1;
		}
	}
	return 0;
}



/*������ӡ��֤�ɹ��Ľ��   ʽ�ӵ��ұ�
1����1��2����3+5��3����7+9+11 ����\n   */
void MyPrint(int i, int m)
{
	int t = 1;
	printf("%d",i);

	while (t < m)
	{
		t++;
		i+=2;
		printf("+%d", i);
	}
}

/*���㲢���ش�i��n�����������ĺ� */
int nOddSum(int i, int n)
{
	int sum = 0, t = 1;
	while (t <= n) {
		sum += i;
		t++;
		i+=2;
	}

	#ifdef WANG_JL   //�������룬���м���
	printf("\t����int nOddSum(int %d, int %d)�У�%d\n", i, n, sum);
	#endif

	return sum;
}
