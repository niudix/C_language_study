/*
【例8.4】】对输入的两个整数按大小顺序输出。
*/
#define _CRT_SECURE_NO_DEPRECATE
# include<stdio.h>



void max_min( int* p1,int* p2 );

int main()
{
	int a, b;
	int* p1;
	int* p2;

	scanf("%d,%d", &a, &b);
	p1 = &a;
	p2 = &b;
	max_min(p1, p2);
	printf("%d %d", *p1, *p2);

	return 0;
}

void max_min(int* p1, int* p2)
{
	int a;
	if (*p1 < *p2)
	{
		a = *p1;
		*p1 = *p2;
		*p2 = a;
	}

}