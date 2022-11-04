#define _CRT_SECURE_NO_DEPRECATE
# include<stdio.h>

/*
【例8.24】有两个整数a和 b.由用户输人1，2或3。如输入1，程序就给出a和b中
的大者，输入 2，就给出 a和b中的小者，输入3，则求 a与b之和。
*/

int max(int a, int b);
int min(int a, int b);
int sum(int a, int b);
int operation(int a, int b, int c);

int main()
{
	int a, b, c;
	scanf("%d,%d", &a, &b);
	scanf("%d", &c);


	
	int m = operation(a, b, c);
	printf("%d", m);


	return 0;
}

int max(int a, int b)
{
	if (a >= b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int min(int a, int b)
{
	if (a <= b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int sum(int a, int b)
{
	return(a + b);
}

int operation(int a, int b, int c )
{
	int (*p)(int, int);


	if (c==1)
	{
		p = max;
	}
	else if (c == 2)
	{
		p = min;
	}
	else
	{
		p = sum;
	}
	int m = (*p) (a, b);
	return (m);
}