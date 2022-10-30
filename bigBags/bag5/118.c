/*
* ժ    Ҫ�� �Ļʺ�����
��ν4�ʺ����������������4��4���������޳�ͻ�İڷ�4���ʺ����ӡ��ڹ��������У��ʺ���ƶ���ʽΪ��������ģ����������һ���ʺ�����λ�õ�ˮƽ����ֱ���Լ�45��б���϶����ܳ��ֻʺ�����ӡ�
https://blog.csdn.net/lxy994/article/details/124714990
https://blog.csdn.net/Prototype___/article/details/124764342

�����ƽⷨ:
��¼���У���ô�ж�45��?
*/
#include <stdio.h>
//const int NUM=4;
#define NUM 4


//��ӡ���
void my_print(int (*p)[4]){
	int i, j;
	for (i=0; i<NUM; i++)	{
		for (j=0; j<NUM; j++)	{
			if (*(*(p+i)+j) != 0) {   // *(*(p+i)+j)�����õ���������ʽ��
				printf("%d  ", *(*(p+i)+j));
			} else
				printf("_  ");
		}
		printf("\n");
	}
}


//����x��y���Ƿ�Σ��: Σ�շ���1�����ܷš�
//x�����±꣬y�����±�
int isDanger(int x, int y, int (*pArr)[4]){
	int a=x, b=y;
	//1.���Խ����лʺ��򷵻�1
	while( ++x < NUM ){
		if( ++y < NUM ){
			if( pArr[x][y] ==1)
				return 1;
		}
	}
	x=a; y=b;
	while( --x >= 0 ){
		if( --y >= 0 ){
			if( pArr[x][y] ==1)
				return -1;
		}
	}
	//2.���Խ����лʺ��򷵻�1
	x=a; y=b;
	while( ++x < NUM ){
		if( --y >= 0 ){
			if( pArr[x][y] ==1)
				return 2;
		}
	}
	x=a; y=b;
	while( --x >= 0 ){
		if( ++y < NUM ){
			if( pArr[x][y] ==1)
				return -2;
		}
	}

	//3.һ���Ƿ���Ԫ��
	for(int i=0; i!=a && i<NUM; i++){
		if(pArr[i][b]==1)
			return 3;
	}
	//4.һ���Ƿ���Ԫ��
	for(int i=0; i!=b && i<NUM; i++){
		if(pArr[a][i]==1)
			return 4;
	}
	//(�ᡢ��������б45��)4�������϶�û�ʺ��򷵻�0
	return 0;
}

//��ӡ���� 
void printArr(int (*pArr)[NUM], int len){
	for(int i=0; i<len; i++){
		for(int j=0; j<NUM; j++){
			printf("%5d ", pArr[i][j]);
		}
		printf("\n");
	}
}



//����1: �������飬��ӡ��Σ�յ�(1Σ�գ�0��Σ��)
void test1(){
	int arr[NUM][NUM]={
		{-5,2,3,4},
		{10,1,30,40},
		{100,200,300,400},
		{-1,-2,-3,-4}
	};
	//��ӡ����
	printArr(arr, sizeof(arr)/sizeof(arr[0]));

	
	//��ӡΣ�յ�
	printf("\nDanger reasons: \n");
	for(int i=0; i<NUM; i++){
		for(int j=0; j<NUM; j++){
			if(isDanger(i, j, arr)){
				printf("%3d", 1);
			}else{
				printf("%3d", 0);
			}
		}
		printf("\n");
	}
}

//�������η�4��ֵ����֮ǰ��⣬�õ㲻Σ��(����0)���ܷš�
//���4��ֵ�������ˣ��򷵻سɹ�1����һ�����ܷ����򷵻�0
int isValid(int row[], int col[]){
	//��ʼ����
	int arr[NUM][NUM]={0};
	//�������
	for(int i=0; i<NUM; i++){
		int x=row[i], y=col[i];
		if(isDanger(x, y, arr)==0){
			arr[x][y]=1;
		}else{
			return 0;
		}
	}
	//printArr(arr, 4);
	my_print(arr);
	return 1;
}


//����2: ���������жϸ��������Ƿ����?
void test2_a(){
	int row[]={0,1,2,3};
	int col[]={0,3,1,2};
	
	if(isValid(row, col)){
		printf("This position is Valid!\n");
	}else{
		printf("Not\n");
	}
}


// ������
void test2(){
	int row[]={0, 1,2,3};
	int col[]={1,4,2,3};
	// �����о��� [1,2,3,4]���������
	int counter=0, valCounter=0;
	for(int x1=0; x1<NUM; x1++){
		for(int x2=0; x2<NUM; x2++){
			if(x1==x2) continue;
			for(int x3=0; x3<NUM; x3++){
				if(x3==x1 || x3==x2) continue;
				for(int x4=0; x4<NUM; x4++){
					if(x4==x1 || x4==x2 || x4==x3) continue;
					// 
					counter++;
					printf(">> Method %d: \n", counter);
					col[0]=x1;
					col[1]=x2;
					col[2]=x3;
					col[3]=x4;
					//�ж�
					if(isValid(row, col)){
						valCounter++;
						printf("===>Valid method %d: ", valCounter);
						//��ӡ��� 
						printf("[%d %d %d %d]\n", x1, x2, x3, x4);
					}else{
						printf("Not valid\n");
					}
				}
			}
		}
	}
}


void main() {
	//test1();
	test2();
}
