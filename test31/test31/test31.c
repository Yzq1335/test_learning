#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(){
	//ѭ����䣻while ��do while ��for
	//int i = 1;
	//while (i <= 10) {
	//	if (i == 5)
	//		//break;//��whileѭ���У�break�������õ���ֹѭ��
	//		continue;//��whileѭ���У�continue��������ѭ��continue����Ĵ���ֱ��ȥ�жϲ��֣����Ƿ������һ��ѭ��
	//		printf("%d", i);
	//	i++;
	//}
	/*int ch = 0;
	while ((ch = getchar()) != EOF)
		putchar(ch);
	return 0;*/
	char password[20] = { 0 };
	printf("���������룺");
	scanf("%s", password);
	printf("��ȷ������Y/N");
	//getchar();//��������
	int tmp = 0;
	while ((tmp = getchar()) != '\n') 
	{ ; }//������������ַ�
	int ch = getchar();
	if (ch == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("ȷ��ʧ��\n");
	}
}