#include <stdio.h>
#include <math.h>
void main()   /*�ж��ǲ������� */
{
	int m,i,k,flag=1;
    scanf("%d",&m);
	k=sqrt(m);
	for(i=2;i<=k+1;i++){
		if(m%i==0){
			printf("==>%d = %d x %d\n", m, i, m/i);
			flag=0; 
			break;
		}
	}
	if(flag) 
		printf("%d������\n",m);
    else
		printf("%d�Ǻ���\n",m);
}