#define _CRT_SECURE_NO_DEPRECATE
# include<stdio.h>

/*
����8.24������������a�� b.���û�����1��2��3��������1������͸���a��b��
�Ĵ��ߣ����� 2���͸��� a��b�е�С�ߣ�����3������ a��b֮�͡�
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