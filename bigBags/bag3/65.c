//用筛法求N以内的素数
#include <stdio.h>
#include <math.h>
#define N 1000 // 设定求多少以内的素数
void main()
{
	int i,j,n,a[N+1];
	for(i=1; i<=N; i++)
		a[i]=i;	//初始化数组
	
	//筛选
	for(i=2; i<sqrt(N); i++){  //外循环最大值：n的开方
		for(j=i+1; j<=N; j++){
			//之前淘汰的就不再比较
			if(a[i]!=0 && a[j]!=0) {
				//能整除外循环变量就淘汰掉
				if(a[j]%a[i]==0){
					a[j]=0;
				}
			}
		}
	}
	//打印结果
	n=0;
	for(i=2; i<=N; i++){
		if(a[i]!=0){
			printf("%7d",a[i]);
			n++; 
			if(n%10==0) //每10个换行
				printf("\n");
		}
	}
	
	printf("\n共有%d个素数\n",n);
}