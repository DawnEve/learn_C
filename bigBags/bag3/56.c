#include <stdio.h>
#include <string.h>
#define N 100000
//10w�������0.1������10w����20w�Ĳ������0.075������20w����40w�Ĳ������0.05������40w����60w�Ĳ������0.03������60w����100w�Ĳ������0.015������100w�Ĳ������0.001
void main()       //�������÷ֶκ��������㽱��ĺ���һ
{
	long i;
	float bonus,bon1,bon2,bon4,bon6,bon10;
	bon1=N*0.1;
	bon2=bon1+N*0.075;
	bon4=bon2+2*N*0.05;
	bon6=bon4+2*N*0.03;
	bon10=bon6+4*N*0.015;

	printf("����������i��");
	scanf("%ld",&i);

	if(i<N)
		bonus=i*0.1;
	else if(i<=2*N)
		bonus=bon1+(i-N)*0.075;
	else if(i<=4*N)
		bonus=bon2+(i-2*N)*0.05;
	else if(i<=6*N)
		onus=bon4+(i-4*N)*0.03;
	else if(i<=10*N)
		bonus=bon6+(i-6*N)*0.015;
	else 
		bonus=bon6+(i-10*N)*0.001;

	 printf("�����ǣ�%10.2f\n",bonus);   //����������������һ��ʼŪ���ˣ�10.2ld���������һ��00.
}