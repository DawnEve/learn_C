#include <stdio.h>
void inverse(int *p,int n)  //��ָ���ƶ�ʹһά���鵹��
{
	int *q,t;
	q=p+n-1;
	//p<q������ֹ������һ�뷨�ã����Է�ֹ��������2�Ĵ���(int)
	while(p<q)
	{
		t=*p;
		*p=*q;
		*q=t;

		p++;
		q--;
	}
}

void main()
{
	int a[]={1,2,3,4,5};
	int i;
	/*�����ӡԭʼ����  */
	for(i=0;i<5;i++)
		printf("%5d",a[i]);
	puts("");

	/*���õĺ��� */
	inverse(a,5);//���ú��������������������ͷ����ַ
	
	printf("�����������ģ�\n");
	/*�����ӡ��������  */
	for(i=0;i<5;i++)
		printf("%5d",a[i]);
	puts("");
}