/*
����6-9��ϵͳ��¼��֤��ʵ�֡�
Ŀǰ������ÿ��ϵͳ�ڵ�¼ʱ��Ϊ�˱�֤ϵͳ�İ�ȫ������Ҫ�����û�id����Ӧ�����룬
ֻ�ж���ȷ���ܽ���ϵͳʹ�ã�������ʱ���ܽ���ϵͳ�������¼ʱ�����λ��������û�id�����룬��
�����ζ�����ȷ�����˳���¼���棬�������ϵͳ��ӭ���档
*/

/*
	������һЩ�����ַ��������Ӧ�ã�ͷ�ļ�string.h ��ȡ�ַ���gets �Ƚ��ַ���strcmp
	�״ζ���define �ĳ��ԣ���סdefine�����滻����Ҫ������=��֮��Ķ�����
	������滻���ַ�����
*/

# include<stdio.h>
# include<string.h>

#define ID "ndx"
#define password "1234"

int main()
{
	char input_ID[20];
	char input_password[20];
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("please input your ID to sign in\n");
		gets(input_ID);
		printf("please input your password to sign in\n");
		gets(input_password);


		if (strcmp(input_ID,ID)==0 && strcmp(input_password, password)==0)
		{
			printf("success\n");
			break;
		}
		else
		{
			printf("fail,you have %d times\n",(2-i));
		}
	}
	
	



	return 0;
}