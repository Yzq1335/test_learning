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
//结构体
//struct book
//{//结构体成员
//	char name[20];
//	char id[20];
//	int price;
//};
//int main()
//{
//	struct book b = { "c语言","2024","55" };
//	struct book* pb = &b;
//	printf("书名：%s\n", b.name); 
//	printf("书名：%s\n", (*pb).name);
//	printf("书名：%s\n", pb->name);
//	printf("书号：%s\n", b.id);
//	printf("价格：%d\n", b.price);
//	return 0;
//
//}
//整型提升
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
	printf("%u\n", sizeof(c));//char类型大小
	printf("%u\n", sizeof(+c));//参与运算，整形提升
	printf("%u\n", sizeof(-c));//同上

	return 0;
}