/*
����6.8������һ���ַ���ͳ�������ж��ٸ����ʣ�����֮���ÿո�ָ�����
*/
# include<stdio.h>

int main()
{
	char sentence[20];
	char c;
	gets(sentence);
	int word_num=0;
	int i;
	for (i = 0; (c = sentence[i]) != '\0'; i++)
	{
		if (c == ' ')
		{
			word_num++;
		}

	}
	printf("%d", word_num+1);

	return 0;
}