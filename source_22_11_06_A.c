#define _CRT_SECURE_NO_DEPRECATE

# include<stdio.h>
# include<stdlib.h>

/*
����8.30��������̬���飬����5��ѧ���ĳɼ���������һ������������������޵�
�� 60�ֵģ�������ϸ�ĳɼ���
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