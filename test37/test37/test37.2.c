#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void menu()
{
	printf("****************\n");
	printf("*****1.play*****\n");
	printf("*****0.exit*****\n");
	printf("****************\n");
}
#include<stdlib.h>
#include<time.h>
void game() {
	
	int ret = rand()%100+1;
	

int guess = 0;
while (1) {
	printf("请输入数字");
	scanf("%d", &guess);
	if (guess < ret)
	{ printf("猜小了"); }
	else if (guess > ret) { printf("猜大了"); }
	else { printf("猜对了");
	break; }
}
}
int main() {
	int input = 0; srand((unsigned int)time(NULL));
	do {
		menu();
		printf("请选择");
		scanf("%d", &input);
		switch (input) {
		case 1:game();
			break;
		case 0:printf("退出游戏\n");
			break;
		default:printf("选择错误\n");
			break;
		}

	} while (input);
	return 0;
}