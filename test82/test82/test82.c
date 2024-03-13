#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct B {
	char c;
	short s;
	double d;
};
struct Stu
{
	struct B sb;
	char name[20];
	int age;
	char id[20];

};
//int main() {
//
//
//	struct Stu s = { {'w',20,3.14},"张三",30,"2020"};
//	//printf("%c\n", s.sb.c);//%c输出单个字符
//	//printf("%s\n", s.id);//%s输出字符串
//	struct Stu* ps = &s;
//	printf("%c\n", (*ps).sb.c);
//	printf("%c\n", ps->sb.c);
//	return 0;
//}

void print1(struct Stu t)
{
	printf("%c,%d,%lf,%s,%d,%s\n", t.sb.c, t.sb.s, t.sb.d, t.name, t.age, t.id);
}
void print2(struct Stu* ps)
{
	printf("%c,%d,%lf,%s,%d,%s\n", ps->sb.c, ps->sb.s, ps->sb.d, ps->name, ps->age, ps->id);
}
int main() {

	struct Stu s = { {'w',20,3.14},"张三",30,"2020" };
	print1(s);
	print2(&s);
	return 0;
}