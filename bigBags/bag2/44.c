#include <stdio.h>
#include <math.h>
void main() //�����ĵݹ����,��2�ļ��η�
{
	int i,s;
	int fun(int);
   
	printf("Ҫ��2�ļ��η���(>=1)\n");
    scanf("%d",&i);

	s=fun(i);
	printf("2��%d�η��ǣ�%d\n",i,s);

}

int fun(int n)
{
	if(n==1) 
		return 2;           //�����г�ʼ������Ȼ�������
	else 
		return fun(n-1)*2;      //��һ����ǰһ��Ĺ�ϵ�ݹ�
}
	
	
