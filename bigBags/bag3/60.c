#include <stdio.h>
void main()  //���s=a+aa+aaa+...+aaa(n��)aaa������a,n
{
	int a, n, sum=0, k=1, repA=0;         //���k��ʼֵ���⿪ʼ��Ϊ��0��һֱ�������
	printf("���s=a+aa+aaa+...+aaa(n��)aaa\n������a,n:");
	scanf("%d,%d",&a,&n);
	while(k<=n)   /*���ѭ���ܺú���   */
	{
		repA+=a;   //��ֵ���repAΪk��a��ɵ�����ֵ
		sum+=repA; //��ֵ���sumΪ����ʽ��ǰk���
		repA*=10;
		k++;
	}

	printf("\na+aa+aaa+...+aaa(n��)aaa=%d\n", sum);
}