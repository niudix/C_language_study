/*
	����10.4���Ӽ������� 10��ѧ�����й����ݣ�Ȼ�������ת�浽�����ļ���ȥ��
*/

#define _CRT_SECURE_NO_DEPRECATE
# include<stdio.h>
# define SIZE 3

struct Student_type
{
	char name[10];
	int num;
	int age;
	char addr[15];
}stud[SIZE];

int main()
{
	FILE* fp;

	if ((fopen_s(&fp, "C:\\Users\\admin\\Desktop\\test.txt", "w")))
	{
		printf("�޷����ļ�");
		exit(0);
	}

	for (int i = 0; i < SIZE; i++)
	{

		scanf("%s,%d,%d,%s", stud[i].name, &stud[i].num, &stud[i].age, stud[i].addr);
	}

	for (int i = 0; i < 10; i++)
	{
		if (fwrite(&stud[i], sizeof(struct Student_type), 1, fp) != 1)
		{
			printf("error\n");
		}
	}


	return 0;
}