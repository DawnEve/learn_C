#include <stdio.h>
void inverse(int a[],int n)  //�������鴫��a[]��ָ���ƶ�ʹһά���鵹��
{
	int *q,t,i=0;
	q=a+n-1;
	while(a+i<q)//p<q������ֹ������һ�뷨�ã����Է�ֹ��������2�Ĵ���(int)
	{
		t=*(a+i);
		*(a+i)=*q;
		*q=t;
		
		i++;
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