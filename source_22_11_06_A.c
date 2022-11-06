#define _CRT_SECURE_NO_DEPRECATE

# include<stdio.h>
# include<stdlib.h>

/*
【例8.30】建立动态数组，输入5个学生的成绩，另外用一个函放数检查其中有无低
于 60分的，输出不合格的成绩。
*/
void fail(int* score,int num);
int main()
{
	int num;
	int* score;
	scanf("%d", &num);
	score = (int*)malloc(sizeof(int) * num);
	for (int i = 0; i < num; i++)
	{
		scanf("%d", score+i);
	}

	 fail(score, num);
	 free(score);
	return 0;
}

void fail(int* score, int num)
{
	for (int i = 0; i < num; i++)
	{
		if ((*score + i)  < 60)
		{
			printf("%d ", *score+i);
		}
	}

}