#include <stdio.h>
#include <malloc.h>
//#include <stdlib.h> 
int main() {
	int m=2, n=5;
	
	// 刚获取的空间，没有随机化，值是内存原来的值。
	int (*p)[n] = (int (*)[n] )malloc(m*n*sizeof(int));
	
	// output
	for(int i=0; i<m; i++){
		printf("Row %d\n", i);		
		for(int j=0; j<n; j++){
			printf("\t(%p) p[%d][%d]=%d\n", &p[i][j], i, j, p[i][j]);
		}
		printf("\n");
	}

	return 0;
}