#include<stdio.h>
#include<math.h>
float f(int k)//k>=1   ��׳˺���k!
{
	float t=1;
	int  i;
	
	if(k>=2)
		for(i=2;i<=k;i++) 
			t*=i;
	
	return t;
}

void main() //��n��Ԫ������m���������
{
	float c;
	int m=0,n=0;
	printf("select m from n, intut m,n:");
	scanf("%d,%d",&m,&n);
	if(!(m>0 && n>0 && n>=m)){
		printf("\n\tinvalide input.\nintut m,n:"); 
		scanf("%d,%d",&m,&n);
	}

	c=f(n)/(f(m)*f(n-m));
	printf("%d!/(%d!*(%d!-%d!))=%.0f\n",n,m,n,m,c);
}
