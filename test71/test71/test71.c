#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 13;
//	a = a | (1 << 4);
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int x = 0;
//	int y = 20;
//	//a = x = y + 1;
//	x = y + 1;
//	a = x;//写法更好,易于调试
//	printf("%d\n", a);
//	return 0;
//}
//char arr[10] = { 0 };//char类型占1个字节，数组大小就是10字节
//int arr[10]          int类型4字节，数组大小就是40字节
//int main()
//{
//	short s = 5;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 2));
//	printf("%d\n", s);
//	return 0;
//}
//int main()
//{
//	int a =(int ) 3.14;
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = 0;
//	/*if (a > 5)
//		b = 1;
//	else
//		b = -1;*/
//	b = (a > 5 ? 1 : -1);
//	printf("%d\n", b);
//	return 0;
//}
int main()
{
	int a=3;
	int b = 5;
	int c = 0;
	int d = (c = 5, a = c + 3, b = a - 4, c += 5);//逗号表达式从左向右算，结果为最后一个表达式结果
	printf("%d\n", d);
	return 0;
}