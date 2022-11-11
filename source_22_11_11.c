/*
	【例10.4】从键盘输入 10个学生的有关数据，然后把它们转存到磁盘文件上去。
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
		printf("无法打开文件");
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