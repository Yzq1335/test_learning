//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//int main() {
//	int i = 0;
//	char password[] = { 0 };
//	for (i = 0; i < 3; i++) {
//		printf("请输入密码");
//		scanf("%s", password);//password是数组，故不用&
//		if (strcmp(password, "123456") == 0) //俩个字符串比较，不能用==，要用strcmp
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else {
//			printf("错误重新输入");
//		}
//	}
//	if (i == 3)
//		printf("登陆失败\n");
//
//	return 0;
//}