#include <stdio.h>
#include <math.h>
void main()  /* ��ӡͼ��  ƽ���ı���*/
{
	int i=1,t=0;
	for(;i<=5;i++)
	{	
		for(t=0;t<10-2*i;t+=1) 
			printf(" ");
		printf("********\n");
	}
}