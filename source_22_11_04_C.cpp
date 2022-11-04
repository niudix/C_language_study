#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
/*
【例8.25】有a个学生，每个学生有b 门课程的成绩。要求在用户输入学生序号以
后，能输出该学生的全部成绩。用指针函数来实现。

解题思路;定义一个二维数组 score.用来存放学生成绩（为简便，设学生数 a为3，课程
数b为4）。定义一个查询学生成绩的函数 search，它是一个返回指针的函数，形参是指向
一维数组的指针变量和整型变量 n，从主函数将数组名 score 和要找的学生号k 传递给形
参。函数的返回值是&.score【k】【0】（即存放序号为k 的学生的序号为0的课程的数组元素
的地址）。然后在主函数中输出该生的全部成绩。

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
