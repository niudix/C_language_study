#define _CRT_SECURE_NO_DEPRECATE
# include<stdio.h>

int max(int a, int b);
int min(int a, int b);

int main()
{
	/*
	����8.23����������������Ȼ�����û�ѡ��1��2.ѡ1ʱ���� max ��������������еĴ�����ѡ 2ʱ���� min ��������������е�С����
	ָ������ָ��
	*/

	int a, b;
	int flag;
	int (*p_max)(int, int);
	int (*p_min)(int, int);

	p_max = max;
	p_min = min;


	scanf("%d,%d", &a, &b);
	scanf("%d", &flag);

	if (flag == 1)
		printf("%d", (*p_max) (a, b));
	if (flag==2)
		printf("%d", (*p_min) (a, b));

	return 0;
}

int max(int a, int b)
{
	if (a >= b)
	{
		return a;
	}
	else
		return b;

}
int min(int a, int b)
{
	if (a >= b)
	{
		return b;
	}
	else
		return a;
}