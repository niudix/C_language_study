/*
【例6.8】输入一行字符，统计其中有多少个单词，单词之间用空格分隔开。
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