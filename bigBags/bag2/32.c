#include <stdio.h>
void main()
{
	int i=0;
	char atr[]={"China is a tiger!"};/*可以不写[]中的数组上限。大括号也可以不写。整体输入字符串*/

	char c;
	for(i=0; atr[i]!='\0'; i++)      /*中间的条件写错了一次：!=写成了==,结果只能打印一个字母*/
    	printf("%c=>%d\n",atr[i],atr[i]);
	
    printf("\n%s\n\n",atr);/*用%s整体输出字符串。遇到 \0 即输出结束*/

}

/*scanf("%s",a);     数组名表示数组的地址，所以不应再加&。遇到 空格 或 回车 即认为字符串输入结束  */

/*	while(atr[i]!='\0')
	{
    	printf("%c=%d\n",atr[i],atr[i]);
		i++;
	}
    printf("%c=%d\n",atr[i],atr[i]);   /*这个把最后的那个\0结束符号也打印出来了*/

