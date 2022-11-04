#define _CRT_SECURE_NO_DEPRECATE
# include<stdio.h>

int max(int a, int b);
int min(int a, int b);

int main()
{
	/*
	【例8.23】输入两个整数，然后让用户选择1或2.选1时调用 max 函数，输出二者中的大数，选 2时调用 min 函数，输出二者中的小数。
	指向函数的指针
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