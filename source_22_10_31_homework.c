# include<stdio.h>
int main()
{
/*-----------------------------------------------------------------------------------------------------------------------------------*/
/*
6.输出以下的杨辉三角形（要求输出 10行）。
1 1
l 2 1
1 3 3 1
1 4 6 4 1
*/
	/*
	printf("---------------------杨辉三角---------------------\n");
	int triangular[20][20];
	int i;
	int j;
	for (i = 0; i < 10; i++)
	{
		triangular[i][0] = 1;
		triangular[i][i+1] = 1;
	}
	for (i = 1; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			if(j<i+1)
			triangular[i][j] = triangular[i-1][j-1]+ triangular[i - 1][j];
			else
			{
				break;
			}
		}
	}

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 11; j++)
		{
			if (j < i + 2)
			{
				printf("%d", triangular[i][j]);
				printf(" ");
			}

			else
			{
				printf("\n");
				break;
			}
		}
	}
	printf("\n");
	printf("------------------------------------------");
	*/
	

/*-----------------------------------------------------------------------------------------------------------------------------------*/
/*
13.编一程序，将两个字符串连接起来，不要用 strcat函数。
*/
	printf("---------将两个字符串连接起来，不要用 strcat函数-------------\n");
	char string1[10];
	char string2[10];
	int i;
	int j;
	j = 0;

	gets(string1);
	gets(string2);



	int length1 = strlen(string1);
	int length2 = strlen(string2);

	for (i = length1; i < length1+length2; i++)
	{
		string1[i] = string2[j];
		j++;
		if (j == (length2))
		{
			string1[i+1] ='\0';
			/* 注意，是单引号，不是双引号*/
			break;
		}
	}
	

	printf("%s", string1);
	
	return 0;
}