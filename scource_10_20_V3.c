//�����࣬ÿ��10�ˣ��гɼ���¼
/*
Ҫ�����
1������ƽ���֡���߷֡���߷�ѧ��ѧ��
2)��߷�ѧ���༶��ѧ���ڸð༶�е���ż���߷�
3��ƽ������ߵİ༶��ƽ���ɼ�
*/

/*
	Version 2 ������һ���ɼ�����ĺ��� void input
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
		printf("%d����߷�Ϊ%d��, ѧ��Ϊ%d�ţ��༶ƽ����Ϊ%d��\n", i+1, max_score, max_stu_ID+1, (sum_score / 10));
		max_score = 0;
		max_stu_ID = 0;
		sum_score = 0;
	}
	printf("%d��ѧ��Ϊ%d�ŵ�ͬѧ������ߣ�Ϊ%d��\n", max_total_score_ID[0]+1, max_total_score_ID[1] + 1, max_total_score);
	printf("%d���ƽ������ߣ�Ϊ%d��\n", max_all_total_score[0]+1, max_all_total_score[1]/10);

	return 0;
}

//�������ö�ά�����ʱ��һ��Ҫ��ȷ��ά�����������ȱ�������ᵼ�µ���ʧ�ܣ����Բο�������÷���(*a)[num];����Ҳ����ֱ�Ӵ������ȥ,���������ֶ��巽��������
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
