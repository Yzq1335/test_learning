#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
////void my_strcpy(char* dest, char* str)
////{
////	while (*str != '\0')
////	{
////		*dest = *str;
////		dest++;
////		str++;
////
////}*dest = *str;            //*dest='\0'  判断等于\0就跳出，未将\0赋值给*dest,故要在循环外加上
////	
////}
////int main()
////{
////	char arr1[20] = "xxxxxxxxxx";
////	char arr2[] = "hello";
////	my_strcpy(arr1, arr2);
////	printf("%s\n", arr1);
////	return 0;
////}
//void my_strcpy(char* dest,const char* src)
//{
// assert(src != NULL);
//	while (*dest++=*src++)
//	{
//		
//	}           //*dest='\0'  判断等于\0就跳出，未将\0赋值给*dest,故要在循环外加上
//
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxx";
//	char arr2[] = "hello";
//	my_strcpy(arr1, NULL);
//	printf("%s\n", arr1);
//	return 0;
//}
int main()
{
	const int num = 10;
	//num = 20;//err
	 int* p = &num;
	*p = 20;
	printf("%d\n", num);
	return 0;
}