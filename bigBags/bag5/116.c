/*
* ժ    Ҫ�� ������������������� ָ��ָ���ָ�롣  ���˵��ֻ��ָ��仯�ˣ����鲢û���޸�
*/

#include <stdio.h>

void sort(int **p) {
	int i, j, *temp;
    for(i=0; i<4; i++) {
		for (j=i+1; j<5; j++) {
			//��������ˣ�Ӧ��Ϊ����**����ȡ���������
			if (**(p+i) > **(p+j)) {
				temp = *(p+i);
				*(p+i) = *(p+j);
				*(p+j) = temp;
			}
		}
	}
}


int main(){
    int i;
    int num[5]= {10, -5, 35, 1, -19}, 
		**p, *pnum[5];//**pΪָ��ָ���ָ��
 
    for (i=0; i<5; i++){
		pnum[i] = &num[i];       
    }

	//p = pnum; sort(p);
	sort(pnum); //������һ�еȼ�

	printf("numbers sorted:(��ָ�����)\n");
	for (i=0; i<5; i++){
		printf("%d, ", *pnum[i]);       
    }
	printf("\n\n");
	
	printf("numbers sorted:(���������)\n");
	for (i=0; i<5; i++) {
		printf("%d, ", num[i]);       
    }
	printf("\n");
	return 0;
}



