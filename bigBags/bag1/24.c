#include <stdio.h>
#include <math.h>
void main()  /*fibonacci数列的前40项  */
{
	long int f1=1,f2=1,f3,i,k=3;
    f3=f1+f2;
	printf("%16ld  %16ld  %16ld  ",f1,f2,f3);

	for(i=4;i<=40;i++)
	{
		f1=f2;
		f2=f3;
		f3=f1+f2;
		printf("%16ld  ",f3);
		k+=1;
		if(k%4==0) printf("\n");
	}
}
