#define _CRT_SECURE_NO_DEPRECATE

/*
【例8.18】将字符串 a 复制为字符串b，然后输出字符串b。
*/

//# include<stdio.h>
//
//int main()
//{
//	char a[10]="abcdedddf";
//	char b[15];
//	char* p;
//	p = a;
//	int i;
//	for ( i= 0; i < 10; i++)
//	{
//		b[i] = *(p + i);
//	}
//	
//	// 下面这个很重要,要截断
//	b[i + 1] = '\0';
//
//	printf("%s", b);
//
//	return 0;
//}

/*
【例8.20】 用函数调用实现字符串的复制。
解题思路;定义一个函数copy string用来实现字符串复制的功能，在主函数中调用此函数∶
函数的形参和实参可以分别用字符数组名或字符指针变量。分别编程;以供分析比较。
*/

# include<stdio.h>

void swamp(char* a, char* b);

int main()
{
	char a[10] = "abcdedddf";
	char b[15];
	swamp(a, b);
	printf("%s", b);

	return 0;
}

void swamp(char* a, char* b)
{
	int i;
	char* p;
	p = a;
	for (i = 0; i < 10; i++)
	{
		b[i] = *p;
		p++;
	}
	b[i + 1] = '\0';
}