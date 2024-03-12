#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
// void print(int arr[],int sz)
// {
//	 int i = 0;
//	 for (i = 0; i < sz; i++)
//	 {
//		 printf("%d", arr[i]);
//	 }
//	 printf("\n");
//}
// void reverse(int* arr, int sz)
// {
//	 int left = 0;
//	 int right = sz-1;
//	 
//	 while (left < right)
//	 {
//		 int  tmp = arr[left];
//		 arr[left] = arr[right];
//		 arr[right] = tmp;
//		 left++;
//		 right--;
//	 }
// }
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	init(arr, sz);
//	print(arr, sz);
//	return 0;
//}
//int main() {
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[]={2,4,6,8,10};
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//
//	return 0;
//}
//指针类型意义
//1.决定解引用权限有多大
//2.指针走一步能走多远
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	char* pc = arr;
//	printf("%p\n", p);
//	printf("%p\n", p + 1);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);//指针-指针=元素间个数
//	return 0;
//}
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		
//		str++;
//		count++;
//
//	}return count;
//}
int my_strlen(char* str)
{
	char* start = str;
	while (*str != '\0')
	{
		str++;
	}return str - start;
}
int main()
{
	int len = my_strlen("abc");
	printf("%d\n", len);
	return 0;
}