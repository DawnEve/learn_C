//���ַ��󷽳̵ĸ�����ȱ�ݣ�ֻ����һ�����������˵㶼�Ǹ�ʱֻ�ܲ���һ��
// ����2��������һ���󷽳�ֵ������һ������ֵ�ĺ���
#include <stdio.h>
#include <math.h>
#define N 1e-5  //�趨���㾫��
void main(){
	float x0,x1,x2,fx0,fx1,fx2;
	float fun(float);// ԭ����f(x)=0��f(x)
	float fun1(float);//f(x)�ĵ���

	do{
		//fx1=1;fx2=1;//��ʼ������ֹ��������
		printf("��������ַ��󷽳̸����������� x1 x2\n");
		scanf("%f%f",&x1,&x2);
		fx1=fun(x1);
		fx2=fun(x2);
	}while(fx1*fx2>0);

	if(fabs(fx1)<N){x0=x1;goto SHUCHU;}//�������˵�ܿ����Ǹ�
	if(fabs(fx2)<N){x0=x2;goto SHUCHU;}//�������˵㶼�Ǹ�ʱ������������á������������Ժ�Ľ�����

	while(1){
		x0=(x1+x2)/2;
		fx0=fun(x0);
		if(fabs(fx0)<N) goto SHUCHU;//��goto����ѭ��

		if(fx1*fx0>0){
			x1=x0;
			fx1=fx0;
		}else{
            x2=x0;
			fx2=fx0;
		}
	}

SHUCHU:printf("���̵ĸ�Ϊ��%f\n",x0);
}

float fun(float x){
	return(2*x*x*x-4*x*x+3*x-6);// ԭ����f(x)=0��f(x)
}
float fun1(float x){
	return(6*x*x-8*x+3);//f(x)�ĵ���
}