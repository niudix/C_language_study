/*
【例7.7】用递归方法求n!。
解题思路∶求 n!可以用递推方法，即从1开始，乘2，再乘3……一直乘到 n。这种方法
容易理解，也容易实现。递推法的特点是从一个已知的事实（如1!=1）出发，按一定规律推
出下一个事实（如2!=1!*2），再从这个新的已知的事实出发，再向下推出一个新的事实
（3!=3*2!）。n!=n*（n一1）!。
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
	printf("请输入n：\n");
	scanf_s("%d", &n);
	final_result = Factorial(n);
	printf("%d!=%d", n,final_result);

	return 0;
}

