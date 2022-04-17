#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void mun()
{
	printf("############################\n");
	printf("####1.加法#######2.减法#####\n");
	printf("####3.乘法#######4.除法#####\n");
	printf("##########0.退出############\n");
	printf("############################\n");

}
int jiafa(int x,int y)
{
	return x+y;
}
int jianfa(int x, int y)
{
	return x - y;
}
int chengfa(int x, int y)
{
	return x * y;
}
int chufa(int x, int y)
{
	return x / y;
}
int main()
{
	int x = 0;
	int y = 0;
	int input = 0;
	int (*ps[])(int, int) = { 0,jiafa,jianfa,chengfa,chufa };
	do
	{
		mun();
		printf("请输入一个数字：》");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			printf("请输入2个操作符");
			scanf("%d,%d", &x,&y);
			int ref = ps[input](x, y);
			printf("%d\n", ref);
		}
		else if(input==0)
		{
			printf("退出\n");
			break;
		}
		else
		{
			printf("输入错误，请重新输入");
		}
	} while (1);
	return 0;
}