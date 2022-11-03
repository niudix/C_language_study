/*
	【例8.14】有一个班，3个学生，各学4 门课，计算总平均分数以及第n个学生的成绩。
	【例8.15】在例8.14的基础上，查找有一门以上课程不及格的学生，输出他们的全部课程的成绩。
*/

#define _CRT_SECURE_NO_DEPRECATE

# include<stdio.h>

void search(int* score, int* flag);

int main()
{
	int score[3][4]={{90,92,87,88},{94,91,97,89},{84,52,77,48}};

	int flag[3] = { 0 };

	int i;
	int sum[4] = { 0 };

	search(score[0], flag);

	for (i = 0; i < 3; i++)
	{
		printf("%d ", *(flag + i));
	}

	printf("\n ");

	int* p;

	p = score[0];



	for (i=0;i<12 ; i++)
	{
		sum[i%4] += *(p);
		printf("%d ", *(p));
		if ((i + 1) % 4 == 0)
			printf("\n");
		p++;
	}

	for (i = 0; i < 4; i++)
	{
		printf("%d ", *(sum + i));
	}

	return 0;
}

void search(int* score, int* flag)
{
	int i = 0;
	for (i = 0; i < 12; i++)
	{
		if (*(score + i) < 60)
		{
			*(flag + (i / 4)) = 1;
		}

	}


}