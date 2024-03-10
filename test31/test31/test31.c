#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(){
	//循环语句；while ，do while ，for
	//int i = 1;
	//while (i <= 10) {
	//	if (i == 5)
	//		//break;//在while循环中，break用于永久的终止循环
	//		continue;//在while循环中，continue跳过本次循环continue后面的代码直接去判断部分，看是否进行下一次循环
	//		printf("%d", i);
	//	i++;
	//}
	/*int ch = 0;
	while ((ch = getchar()) != EOF)
		putchar(ch);
	return 0;*/
	char password[20] = { 0 };
	printf("请输入密码：");
	scanf("%s", password);
	printf("请确认密码Y/N");
	//getchar();//清理缓冲区
	int tmp = 0;
	while ((tmp = getchar()) != '\n') 
	{ ; }//清理缓冲区多个字符
	int ch = getchar();
	if (ch == 'Y')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("确认失败\n");
	}
}