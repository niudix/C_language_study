/*
����7.7���õݹ鷽����n!��
����˼·���� n!�����õ��Ʒ���������1��ʼ����2���ٳ�3����һֱ�˵� n�����ַ���
������⣬Ҳ����ʵ�֡����Ʒ����ص��Ǵ�һ����֪����ʵ����1!=1����������һ��������
����һ����ʵ����2!=1!*2�����ٴ�����µ���֪����ʵ�������������Ƴ�һ���µ���ʵ
��3!=3*2!����n!=n*��nһ1��!��
*/

# include<stdio.h>
int Factorial(int n)
{
	int c;
	if (n == 1)
	{
		c = 1;
	}
	else
	{
		c = Factorial(n - 1) * n;
	}

	return c;
}

int main()
{
	int n;
	int final_result;
	printf("������n��\n");
	scanf_s("%d", &n);
	final_result = Factorial(n);
	printf("%d!=%d", n,final_result);

	return 0;
}

