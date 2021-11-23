/*
* 文件标识：……未提交 | 未链接词库 | 作者测试版…………………………
* 摘    要：电子词典效果
*/

#include <stdio.h>
#include <string.h>
void main()
{
	char *door, word[3];
	void FindChinese();
    void FindEnglish();
	door = word;
    //print a banner
	printf("\t|*********************电子词典模拟软件*********************|\n");
    printf("\t   1.先选择词典:输入字母e/c选择英汉还是汉英词典\n");
    printf("\t   2.输入要查询的词条，回车结束输入\n");
    printf("\t   3.输入字母u返回主菜单，重新选择词典\n");
    printf("\t   4.退出：主菜单下输入字母 bye 退出此此电子词典程序\n");
	printf("\t -----------(c) 2010,郑州xx科技有限责任公司----------- \n");
	printf("\t|******************** All rights reserved******************|\n");


	while(1)//go to end in the while(...)
	{
		printf("英汉词典(e)/汉英词典(c)?");
		scanf("%s", door);

		//go to FindChinese
		if(strcmp(door,"e")==0) /*在比较中不能加*door,否则报错  */
		{
			FindChinese();////////////function...
		}
		//go to FindEnglish
		else
			if(strcmp(door,"c")==0) 
			{
				FindEnglish();/////////////function...
			}
			else//go to the end
				if(strcmp(door,"bye")==0) break;
				else//error
					printf("invalid input,please try again……\n");
	}//the end of while(...)
}
			

//the 1st dictionary
void FindChinese()
{

	char *p, eword[20] = "r";
	p=eword;
	
	while(1)
	{
		int f=0;
	    printf("Enter the English word you want to look up:(enter u to go upper lever)\n");
	    scanf("%s",p);

	    //should be checked here.........
       if(strcmp(p,"u")==0) break;//go upper
	   if(f==0 && (strcmp(p,"int")==0))    {f=1;    printf("\n%s: 整型\n",p);}
	   if(f==0 && strcmp(p,"float")==0)  {f=1;    printf("\n%s: 浮点型\n",p);}
	   if(f==0 && strcmp(p,"sunny")==0)  {f=1;    printf("\n%s: 阳光灿烂的\n",p);}
	   //more words here^_^ 
	   //more words here^_^                链接词库 | 接口确定后需要继续修改...
	   //more words here^_^
	   if(f==0)   printf("\nsorry, can't find the word\n");
	}
}



//the 2nd dictionary
void FindEnglish()
{

	char *p, cword[20] = "r";
	p=cword;
	
	
	while(1)
	{
		int f=0;
	    printf("请输入您想查找的中文词语:(输入u返回上层)\n");
	    scanf("%s",p);

	    //should be checked here.........
        if(strcmp(p,"u")==0) break;//go upper
	    if(f==0 && (strcmp(p,"整型")==0))    {f=1;    printf("\n%s: int\n",p);}
     	if(f==0 && strcmp(p,"浮点型")==0)    {f=1;    printf("\n%s: float\n",p);}
        if(f==0 && strcmp(p,"长整型")==0)    {f=1;    printf("\n%s: long\n",p);}
	    //more words here^_^
	    //more words here^_^               链接词库 | 接口确定后需要继续修改...
	    //more words here^_^
    	if(f==0)   printf("\n很抱歉，没有找到这个中文词条\n");
	}
}