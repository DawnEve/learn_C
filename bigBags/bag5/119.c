/*
* ժ    Ҫ�� n�ʺ�����
* ʹ��׷�ݷ�����չ��n�ʺ�
* ʹ�����ά���飨���ڶ���ָ�룩����Ϊ�Ƿ���row��col��һ����С�ġ�
*/

#include<stdio.h>
#include<stdlib.h>
//#include<string.h> //for memset();
//#define LEN 8

//��ʹ��ȫ�ֱ��������N�ʺ�����
int counter=0; //ͳ�Ʒ��������ģ����п��ޱ���


// ���ٶ�ά���飬����ʼ��Ϊ0
int **get2DArr(int row, int col){
	//dim1: pointer array of rows
	int **arr2d=(int **)malloc(sizeof( int*) *row );
	//dim2: point to each column
	for(int i=0; i<row; i++){
		arr2d[i] = (int*)malloc(sizeof(int) * col);
		//memset(arr2d[i], 0, sizeof(int)*col);
	}
	//init with 0
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++)
			arr2d[i][j]=0;
	}
	
	return arr2d;	
}

//destroy the 2d arr
void free2DArr(int **arr, int row){
	for(int i=0; i<row; i++)
		free(arr[i]);
	free(arr);
}

//print 2d arr
void print2DArr(int **arr, int row, int col){
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}


// ���[row][col]λ�÷������Ƿ���ʣ����4�������С��С�����45�Ƚ�
// ֻ��Ҫ��⵱ǰ���Ѿ����Ĳ���: �ϣ������ϣ����ϡ�
// len ��ʾ������̣���ǰ������ [row][col]
int isValid(int len, int **arr, int row, int col){
    //1.�ݹ鱣֤���кϷ�: ÿ������ֻ��һ������
    //2.��ǰ�У��Ϸ����Ƿ�������
	for(int i=0; i<row; i++){
		if(arr[i][col]!=0)
			return 0;
	}
	//3.�ж����Խ���(����)�Ƿ�������
	for(int i=row-1, j=col-1; i>=0 && j>=0; i--, j--){
		if(arr[i][j] != 0)
			return 0;
	}
	//4.�жϸ��Խ���(����)�Ƿ�������
	for(int i=row-1, j=col+1; i>=0 && j<len; i--, j++){
		if(arr[i][j] != 0)
			return 0;
	}
	return 1;
}

/* �����������
i �ǵ�ǰ�кţ�
len ���������൱����ֹ����: i==len
arr ��ά������
*/
void DFS(int i, int len, int **arr) { //��i��
	// ���뱾����ʱ����n��n����ǰi-1���ѷ����˻���������i-1������
	// �ִӵ�i�������Ϊ��������ѡ�����λ��
	// 1.��i==nʱ�����һ���Ϸ��Ĳ��֣����֮
	if (i==len) {
        print2DArr(arr, len, len); //������̵ĵ�ǰ���֣� //nΪ4ʱ����4�ʺ�����
        counter++;
	} else {
		for (int j=0; j<len; j++) { //��j��
			// 2.�ڵ�i�е�j�з���һ�����ӣ����ӱ���Ǵ�1��ʼ��
            arr[i][j] = i+1;
            // 3.����Ƿ�Ϸ�
			if (isValid(len, arr, i, j)){
				DFS(i+1, len, arr); //����Ϸ�����̽����һ��
            }
			// 4.���ߵ�i�е�j�е�����
            arr[i][j] = 0;
		}
	}
}


int main(){
    // 1.���� N �ʺ�
    int len;
    printf("Input an int [4, 20] >>> ");
    scanf("%d", &len);

    // 2. �������飬��������״̬: 0û�����ӣ���������ʾ��n������
	//������ÿ���ֽڶ���ʼ��Ϊ0
    int **chessStatus=get2DArr(len, len);

    // 3. ��ʼ�ݹ�
    DFS(0, len, chessStatus);

    // 4. �ͷ��ڴ�ռ� 
    free2DArr(chessStatus, len);
	
    printf("Total solution:%d\n", counter);
    return 0;
}
