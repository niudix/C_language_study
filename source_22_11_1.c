/*
【例7.6】有5个学生坐在一起，问第5个学生多少岁，他说比第4个学生大2岁。问
第4个学生岁数，他说比第3个学生大2岁。问第3个学生，又说比第2个学生大2岁。问
第2个学生，说比第1个学生大2岁。最后问第1个学生，他说是10岁。请问第5个学生
多大。
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

