/*
* �ҵ������˶�Ա�Կ�������
�׶�A B C;         һһ�Կ�           �Ҷ�X Y Z;
A����X��C���� X Z���������ҵ������˶�Ա�Կ�������
*/
#include <stdio.h>
void main(){
	char i,j,k;
	for(i='X'; i<='Z'; i++)
		for(j='X'; j<='Z'; j++)
			if(i!=j)               //�⼸����������
				for(k='X'; k<='Z'; k++)
					if(k!=i && k!=j)//�⼸����������
						if(i!='X' && k!='X' && k!='Z')//�߼�ת��Ϊѭ������
							printf("A--%c\tB--%c\tC--%c\n",i,j,k);
}