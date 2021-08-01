//已知二维数组multi[2][3]，输出全部元
#include<stdio.h>
int main(){
	int multi[2][3]={{1,2,3}, {10,20,30}};
	int *ptr=multi[0]; /*等价于p=&multi[0][0];*/
	int i, j;
	for(i=0; i<2; i++){
		for(j=0; j<3; j++){
			printf("multi[%d][%d]=%d, |%d (%p)\n", i,j, multi[i][j], *ptr, ptr);
			ptr++;
		}
	}
	return 0;
}

/*
输出：
multi[0][0]=1, |1 (000000000022FE20)
multi[0][1]=2, |2 (000000000022FE24)
multi[0][2]=3, |3 (000000000022FE28)
multi[1][0]=10, |10 (000000000022FE2C)
multi[1][1]=20, |20 (000000000022FE30)
multi[1][2]=30, |30 (000000000022FE34)
*/