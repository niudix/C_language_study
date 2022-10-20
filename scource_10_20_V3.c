//三个班，每班10人，有成绩记录
/*
要求输出
1）各班平均分、最高分、最高分学生学号
2)最高分学生班级、学生在该班级中的序号及最高分
3）平均分最高的班级及平均成绩
*/

/*
	Version 2 增加了一个成绩输入的函数 void input
*/
# include<stdio.h>

void Input(int(*score)[10], int number_of_class);

int main()
{
	//int score[3][10] = { 89,79,96,88,68,77,92,85,76,93,74,85,84,91,86,94,75,96,74,98,85,97,85,67,89,86,91,87,83,91 };

	int score[3][10] = { 0 };
	int i = 0, j = 0;
	int max_score = 0;
	int max_stu_ID = 0;
	int sum_score = 0;
	int max_total_score = 0;
	int max_total_score_ID[2] = { 0 };
	int max_all_total_score[2] = { 0 };
	int number_of_class = 3;

	Input(score, number_of_class);


	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (score[i][j] > max_score)
			{
				if (score[i][j] > max_total_score)
				{
					max_total_score_ID[0] = i;
					max_total_score_ID[1] = j;
					max_total_score= score[i][j];
				}
				max_score = score[i][j];
				max_stu_ID = j;
			}
			sum_score = sum_score + score[i][j];

			if (sum_score > max_all_total_score[1])
			{
				max_all_total_score[1] = sum_score;
				max_all_total_score[0] = i;
			}
		}
		printf("%d班最高分为%d分, 学号为%d号，班级平均分为%d分\n", i+1, max_score, max_stu_ID+1, (sum_score / 10));
		max_score = 0;
		max_stu_ID = 0;
		sum_score = 0;
	}
	printf("%d班学号为%d号的同学分数最高，为%d分\n", max_total_score_ID[0]+1, max_total_score_ID[1] + 1, max_total_score);
	printf("%d班的平均分最高，为%d分\n", max_all_total_score[0]+1, max_all_total_score[1]/10);

	return 0;
}

//函数调用二维数组的时候一定要明确二维数组的列数，缺少列数会导致调用失败，可以参考下面调用方法(*a)[num];或者也可以直接传数组进去,下面这两种定义方法都可以
// refernce https://www.jianshu.com/p/d7f2afe08f41
	void Input(int score[][10], int number_of_class)
{
	int i, j;

	for (i = 0 ; i < number_of_class; i++)
	{
		for (j = 0 ; j < 10; j++)
		{
			scanf_s("%d,", &score[i][j]);
		}
	}

}


/*
void Input(int(*score)[10], int number_of_class)
{
	int i, j;

	for (i = 0 ; i < number_of_class; i++)
	{
		for (j = 0 ; j < 10; j++)
		{
			scanf_s("%d,", &score[i][j]);
		}
	}

}
*/
