#include <stdio.h>
#include <string.h>
#define N 100000
void mai1(long i)       //�������÷ֶκ��������㽱��ĺ���һ
{
	float bonus,bon1,bon2,bon4,bon6,bon10;
	bon1=N*0.1;
	bon2=bon1+N*0.075;
	bon4=bon2+2*N*0.05;
	bon6=bon4+2*N*0.03;
	bon10=bon6+4*N*0.015;
	//	printf("����������i��");
	//	scanf("%ld",&i);
	if(i<N)
		bonus=i*0.1;
	else if(i<=2*N)
		bonus=bon1+(i-N)*0.075;
    else if(i<=4*N)
		bonus=bon2+(i-2*N)*0.05;
	else if(i<=6*N)
		bonus=bon4+(i-4*N)*0.03;
	else if(i<=10*N)
		bonus=bon6+(i-6*N)*0.015;
	else 
		bonus=bon6+(i-10*N)*0.001;

	printf("����һ ��if\n �����ǣ�%10.2f\n",bonus);   //����������������һ��ʼŪ���ˣ�10.2ld���������һ��00.
}

/*
�������÷ֶκ��������㽱��ĺ�����
*/
void mai2(long i)       //�������÷ֶκ��������㽱��ĺ���2
{
	float bonus=0,bon1,bon2,bon4,bon6,bon10;
	int c;

	bon1=N*0.1;
	bon2=bon1+N*0.075;
	bon4=bon2+2*N*0.05;
	bon6=bon4+2*N*0.03;
	bon10=bon6+4*N*0.015;

	//	printf("������������������i��");
	//	scanf("%ld",&i);
	c=i/N;   //���Ǹ�ǿ����ֵת������ǿ��ת��Ϊ����

   if(c>10)  c=10;
   switch(c) {
	   case 0:bonus=i*0.1;break;
	   case 1:bonus=bon1+(i-N)*0.075;break;
	   case 2:
	   case 3:bonus=bon2+(i-2*N)*0.05;break;
	   case 4:
	   case 5:bonus=bon4+(i-4*N)*0.03;break;
	   case 6:case 7:case 8:
	   case 9:bonus=bon6+(i-6*N)*0.015;
	   case 10:bonus=bon10+(i-10*N)*0.01;
   }
   printf("������ ��switch\n �����ǣ�%10.2f\n",bonus);   //����������������һ��ʼŪ���ˣ�10.2ld���������һ��00.
}


void main()   //�ú������ã��ֱ����μ��㽱��ǰ�������ӵ��ۺ�
{
	int p;
	printf("����������i��");
	scanf("%ld",&p);
	puts("");

	mai1(p);
	puts("");
	
	mai2(p);
	puts("");
}