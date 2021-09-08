#include <stdio.h> 
int max = 0,sum=0; //全局变量,只需定义一次，以后只用就行了，不用再定义

void fn_max(int x[][4]){
	int i,j;
	
	max=x[0][0];
	for(i=0;i<3;i++)
	    for(j=0;j<4;j++)
		{
			sum+=x[i][j];
			if(max<x[i][j]) 
				max=x[i][j];}
//		return m;                   //不需要返回值了，用了全局变量
}

void main()
{
	void fn_max(int x[][4]);
	static int a[3][4]={{1,2,3,4},{5,9,8,7},{25,4,69,-3}};
	fn_max(a);
	printf("\nmax= %d: \nsum=%d\n",max,sum);
}