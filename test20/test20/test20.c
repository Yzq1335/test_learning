#include<stdio.h>

//void test() {
//	 static int a = 1;
//	a++;
//	printf("%d", a);
//}
//int main()
//{ int i = 0;
//while (i < 10) 
//{
//	test();
//	i++;
//}
 //extern int g_val;//ÉùÃ÷Íâ²¿·ûºÅ
//int main()
//{
	//printf("%d\n", g_val);
extern int Add(int x, int y);
int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a,b);
	printf("sum=%d\n", sum);

return 0;
}