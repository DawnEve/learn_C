#include <stdio.h>
#include <math.h>
void main()  /*fibonacci���е�ǰ40��-���  */
{
	int i;
	long int f1=1,f2=1;
	printf("%16ld  %16ld  ",f1,f2);

	for(i=2;i<=20;i++)
	{
		/*��һ���ܾ�����fibonacci���е���-���  */
		f1=f1+f2;
		f2=f2+f1;     

		printf("%16ld  %16ld  ",f1,f2);
		if(i%2==0) 
			printf("\n");
	}
}
