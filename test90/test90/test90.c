#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//void my_strcpy(char* dest, char* str)
//{
//	while (*str != '\0')
//	{
//		*dest = *str;
//		dest++;
//		str++;
//
//}*dest = *str;            //*dest='\0'  �жϵ���\0��������δ��\0��ֵ��*dest,��Ҫ��ѭ�������
//	
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxx";
//	char arr2[] = "hello";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
void my_strcpy(char* dest, char* src)
{
//assert(src != NULL);
	while (*dest++=*src++)
	{
		
	}           //*dest='\0'  �жϵ���\0��������δ��\0��ֵ��*dest,��Ҫ��ѭ�������

}
int main()
{
	char arr1[20] = "xxxxxxxxxx";
	char arr2[] = "hello";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}