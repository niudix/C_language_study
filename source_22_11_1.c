/*
����7.6����5��ѧ������һ���ʵ�5��ѧ�������꣬��˵�ȵ�4��ѧ����2�ꡣ��
��4��ѧ����������˵�ȵ�3��ѧ����2�ꡣ�ʵ�3��ѧ������˵�ȵ�2��ѧ����2�ꡣ��
��2��ѧ����˵�ȵ�1��ѧ����2�ꡣ����ʵ�1��ѧ������˵��10�ꡣ���ʵ�5��ѧ��
���
*/
# include<stdio.h>

int age(int n)
{
	int c;
	if (n == 1)
	{
		return c = 10;
	}
	else
	{
		c = age(n - 1) + 2;
	}

	return c;
}

int main()
{
	int n=5;
	int real_age = 10;
	if (n == 1)
	{
		printf("No.5 age is %d", real_age);
	}
	else
	{
		real_age = age(n);
		printf("No.5 age is %d", real_age);
	}

	return 0;
}

