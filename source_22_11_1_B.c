/*
【例7.13】有一个3×4的矩阵，求所有元素中的最大值。
考察向函数中传递二维数组的方法
*/

# include<stdio.h>

int max(int array[][4]);

int main()
{
	int array[][4] = { {1,2,3,4},{4,5,6,7},{4,5,6,7} ,{4,5,6,7} };
	int max_num=max(array);
	printf("%d", max_num);

	return 0;
}

int max(int array[][4])
{
	int i, j;
	int max_num = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (array[i][j] > max_num)
			{
				max_num = array[i][j];
			}
		}
	}
	return max_num;
}