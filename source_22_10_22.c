/*
【例6-9】系统登录验证的实现。
目前基本上每个系统在登录时，为了保证系统的安全，都需要输入用户id及对应的密码，
只有都正确才能进入系统使用，否则暂时不能进入系统，假设登录时给三次机会输入用户id和密码，如
果三次都不正确，则退出登录界面，否则进入系统欢迎界面。
*/

/*
	包含了一些对于字符串处理的应用，头文件string.h 获取字符串gets 比较字符串strcmp
	首次对于define 的尝试，记住define就是替换，不要加诸如=；之类的东西。
	如果想替换成字符串则
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