/*
* ժ    Ҫ�� ��һ����������ƶ�m��λ�á������� + ָ�� ʵ��
*/

#include <stdio.h>

int a[] =  {0, 1, 2, 3, 4, 5}; //�����ⲿ����

//��ӡ����
void print(int arr[], int len){
	int i;
	printf("[");
	for (i=0; i<len-1; i++){
		printf("%d, ", arr[i]);
	}
	printf("%d]\n", arr[i]);
}

int main() {
	void move(int array[], int len, int mv);
	
	int i, m;
	int len=sizeof(a) / sizeof(int);

	printf("ԭʼ���飺");
	print(a, len);

	
	//�����ƶ���
	printf("��������Ƹ���m��");
	scanf("%d", &m);

	//�ƶ�
	move(a, len, m);

	//����ƶ��������
	printf("����%d��Ԫ�غ�����飺", m);
	print(a, len);
	
	return 0;
}


// һ�ΰ���������ƶ�һ��λ�ã����ƶ�m��λ�á��õ��˵ݹ�
void move(int array[], int n, int m)
{
	int *p,  //��Ϊѭ���������ƶ����� 
		array_end = *(array + n - 1); //��¼���һ��Ԫ�ص�ֵ

	// ���ΰ���������ƶ�һ��λ�ã����һ��Ԫ�ر�����
	for (p=array+n-1; p>array; p--)	{
		*p = *(p-1);
	}
	*p = array_end; //��һ��Ԫ�أ����������һ��Ԫ�ص�ֵ

	m--;
	if (m>0)
	{
		printf(">> �ݹ���� m=%d\n", m);
		move(array, n, m); /* �ݹ���ã�������ƶ�m��λ�� */
	}
}