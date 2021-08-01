//指向二维数组中一维数组的指针变量

#include<stdio.h>
int main(){
	int a[2][3]={ {1,2,3},{-7,-8,-9} };
	int i,j, (*ptr)[3];
	ptr=a; //注意这个定义的指针 ptr 形式，和 a 是等价的
	for(i=0; i<2; i++){
		for(j=0; j<3; j++){
			printf( "arr[%d][%d]=%d (%p)| %d | %d, (%p) \n", 
				i,j, a[i][j],&ptr[i][j],  
				ptr[i][j], *(*(ptr+i)+j), (*(ptr+i)+j) );
		}
	}
}