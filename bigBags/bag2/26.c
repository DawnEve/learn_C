#include <stdio.h>
#include <math.h>
void main()   /*100-200������ */
{
	int m,i,k,flag=1,n=0;
	for(m=101;m<=200;m+=2)  /*��Ϊ����2��ż���϶�����������m+=2����� */
	{	
		flag=1;  /*©������һ�У������˴���ÿһ���µ�m����Ҫ���³�ʼ���ж��������� */
		k=sqrt(m);
		for(i=2;i<=k+1;i++){ //���+1��������
			if(m%i==0){
				flag=0; 
				break;
			}
		}
		if(flag){
			printf("%6d",m);
			n++;
			if(n%10==0) printf("\n");
		}
	}
}