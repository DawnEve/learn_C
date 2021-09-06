#include<stdio.h>
#include<math.h>
/*���뺯��f(x)*/
float f(float x)
{
	float y;
	y= x*x-5*x+6;
	return(y);
}

/*��Ϊֱ��ʱ����㣬������ */
float xpoint(float x1,float x2)
{
	float y;
	y=(x1*f(x2)-x2*f(x1)) / (f(x2)-f(x1));
	return(y);
}

/*����ĺ���ֵ */
float root(float x1,float x2)
{
	float x,y,y1;
	y1=f(x1);
	do
	{
		x=xpoint(x1,x2);
		y=f(x);

		if(y*y1>0)
		{
			y1=y;
			x1=x;
		}
		else 
			x2=x;
	}while(fabs(y)>=0.0001);
	return(x);
}

/*������*/
void main()
{
	float x1,x2,f1,f2,x;
	do
	{
		printf("\ninput x1,x2:\n");
		scanf("%f,%f",&x1,&x2);
		f1=f(x1);
		f2=f(x2);
	}while(f1*f2>=0);
	x=root(x1,x2);
	printf("A root of the equation is %8.4f\n",x);
}