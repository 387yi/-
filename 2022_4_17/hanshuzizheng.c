#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void mun()
{
	printf("############################\n");
	printf("####1.�ӷ�#######2.����#####\n");
	printf("####3.�˷�#######4.����#####\n");
	printf("##########0.�˳�############\n");
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
		printf("������һ�����֣���");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			printf("������2��������");
			scanf("%d,%d", &x,&y);
			int ref = ps[input](x, y);
			printf("%d\n", ref);
		}
		else if(input==0)
		{
			printf("�˳�\n");
			break;
		}
		else
		{
			printf("�����������������");
		}
	} while (1);
	return 0;
}