#include <stdio.h>
//��1000���ڵ� ���� �����е����ӵĺ͵�����������6=1+2+3
void method1(){
	printf("Method1:\n");
	int m,i,sum;
	for(m=2;m<1000;m++)
	{
		sum=0;
		for(i=1;i<m;i++)
			if(m%i==0) sum+=i;

		if(sum==m)
		{
			printf("%d��һ���������������������ǣ�",m);
			for(i=1;i<m;i++)
				if(m%i==0) printf("%d, ",i);
			printf("\n");
		}
	}
}

//��¼����
void method2(){
	int a[50],i,j,k,sum;
	int n;
	for(i=2; i<=1000; i++)
	{
		sum=0;k=0;
		//������
		for(j=1;j<i;j++)
		{
			if(!(i%j)) //����Ϊ0��������
			{
				a[k]=j;
				sum+=j;
				k++;
			}
		}
		
		if(sum==i)
		{
			printf("%d,It's facters are: ",i);
			
			// �������1
			while(k-->0) //����k--��--k�Ľ����ͬ
				printf("%d  ",a[k]);
			
			// �������2
			//for(n=0;n<k;n++)
			//	printf("%d, ",a[n]);
			
			printf("\n");
		}
	}
}

void main(){
	//method1();
	method2();
	printf("\n");
}