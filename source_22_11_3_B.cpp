#define _CRT_SECURE_NO_DEPRECATE

/*
����8.18�����ַ��� a ����Ϊ�ַ���b��Ȼ������ַ���b��
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
//	// �����������Ҫ,Ҫ�ض�
//	b[i + 1] = '\0';
//
//	printf("%s", b);
//
//	return 0;
//}

/*
����8.20�� �ú�������ʵ���ַ����ĸ��ơ�
����˼·;����һ������copy string����ʵ���ַ������ƵĹ��ܣ����������е��ô˺�����
�������βκ�ʵ�ο��Էֱ����ַ����������ַ�ָ��������ֱ���;�Թ������Ƚϡ�
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