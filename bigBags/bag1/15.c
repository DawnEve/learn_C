#include <stdio.h>
#include <math.h>
void main()    /*求100内奇数和与偶数和。妙 */
{
	int odd=0,even=0,n=1;
	while(n<100)
	{   
		odd+=n;
		even+=n+1;
		n+=2;      /*注意：这一句只能放最后；放前两句前面会出现n=99+2=101的情况 */
	}
	printf("100以内: 奇数和为%d，偶数和为%d\n",odd,even);
	printf("\t100以内数和为%d\n",odd+even);

}