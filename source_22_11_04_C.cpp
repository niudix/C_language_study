#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
/*
����8.25����a��ѧ����ÿ��ѧ����b �ſγ̵ĳɼ���Ҫ�����û�����ѧ�������
���������ѧ����ȫ���ɼ�����ָ�뺯����ʵ�֡�

����˼·;����һ����ά���� score.�������ѧ���ɼ���Ϊ��㣬��ѧ���� aΪ3���γ�
��bΪ4��������һ����ѯѧ���ɼ��ĺ��� search������һ������ָ��ĺ������β���ָ��
һά�����ָ����������ͱ��� n������������������ score ��Ҫ�ҵ�ѧ����k ���ݸ���
�Ρ������ķ���ֵ��&.score��k����0������������Ϊk ��ѧ�������Ϊ0�Ŀγ̵�����Ԫ��
�ĵ�ַ����Ȼ���������������������ȫ���ɼ���

*/

int* search(int ID,int score[][4]);

int main()
{
	int score[3][4]= { {90,92,87,88},{94,91,97,89},{84,52,77,48} };
	int ID;
	int i;
	scanf ("%d", &ID);
	int* posi;
	posi= search(ID-1,score);

	for (i = 0; i < 4; i++)
	{
		printf("%d ", *posi);
		posi++;
	}

	return 0;
}

int* search(int ID, int score[][4])
{
	int* posi;
	posi = score[ID];
	return posi;
}
