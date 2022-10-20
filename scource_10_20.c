//三个班，每班10人，有成绩记录
/*
要求输出
1）各班平均分、最高分、最高分学生学号
2)最高分学生班级、学生在该班级中的序号及最高分
3）平均分最高的班级及平均成绩

*/
# include<stdio.h>
int main()
{
	int score[3][10] = { 89,79,96,88,68,77,92,85,76,93,74,85,84,91,86,94,75,96,74,98,85,97,85,67,89,86,91,87,83,91 };
// 一班情况
	int i = 0, j = 0;
	int max_score = 0;
	int max_stu_ID = 0;
	int sum_score = 0;
	int max_total_score = 0;
	int max_total_score_ID[2] = { 0 };
	int max_all_total_score[2] = { 0 };


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