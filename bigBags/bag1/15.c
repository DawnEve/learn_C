#include <stdio.h>
#include <math.h>
void main()    /*��100����������ż���͡��� */
{
	int odd=0,even=0,n=1;
	while(n<100)
	{   
		odd+=n;
		even+=n+1;
		n+=2;      /*ע�⣺��һ��ֻ�ܷ���󣻷�ǰ����ǰ������n=99+2=101����� */
	}
	printf("100����: ������Ϊ%d��ż����Ϊ%d\n",odd,even);
	printf("\t100��������Ϊ%d\n",odd+even);

}