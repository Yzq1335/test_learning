#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n",arr[4]);
//	return;
//}
// int Add(int x, int y)
//{
//	return x+y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//	printf("%d\n", ret);
//	return 0;
//}
//�ṹ��
//struct book
//{//�ṹ���Ա
//	char name[20];
//	char id[20];
//	int price;
//};
//int main()
//{
//	struct book b = { "c����","2024","55" };
//	struct book* pb = &b;
//	printf("������%s\n", b.name); 
//	printf("������%s\n", (*pb).name);
//	printf("������%s\n", pb->name);
//	printf("��ţ�%s\n", b.id);
//	printf("�۸�%d\n", b.price);
//	return 0;
//
//}
//��������
//int main()
//{
//	char a = 3;
//	char b = 127;
//	char c = a + b;
//	printf("%d\n", c);
//	return 0;
//}
int main()
{
	char c = 1;
	printf("%u\n", sizeof(c));//char���ʹ�С
	printf("%u\n", sizeof(+c));//�������㣬��������
	printf("%u\n", sizeof(-c));//ͬ��

	return 0;
}