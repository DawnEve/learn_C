#include <stdio.h>
#include <math.h>
void main()   /*100-200的素数 */
{
	int m,i,k,flag=1,n=0;
	for(m=101;m<=200;m+=2)  /*因为大于2的偶数肯定不是素数。m+=2，妙！！ */
	{	
		flag=1;  /*漏掉了这一行，导致了错误。每一个新的m都需要重新初始化判断条件！！ */
		k=sqrt(m);
		for(i=2;i<=k+1;i++){ //这个+1有作用吗？
			if(m%i==0){
				flag=0; 
				break;
			}
		}
		if(flag){
			printf("%6d",m);
			n++;
			if(n%10==0) printf("\n");
		}
	}
}