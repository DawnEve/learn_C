#include <stdio.h>
int max_array(int *p,int n)  //用指针求数组最大值
{
	int k=0,max=*p,i;
	for(i=0;i<n;i++)
	{
		if(*(p+i)>max)      //   *(p+i)与a[i]作用相同
		{
			max=*(p+i);
			k=i;
		}
	}
	return k;
}

void main()
{
	int a[5]={23,53,165,98,78};
	int i,*p=a,k;
	for(i=0;i<5;i++) 
		printf("%5d",*(p+i));
	k=max_array(a,5);
	printf("\nmax=a[%d]=%d\n",k,*(p+k));
}