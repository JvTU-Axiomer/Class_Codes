#define _CRT_SECURE_NO_WARNINGS 1

#include "Game.h"
void menu()
{
	printf("*******************************\n");
	printf("*********** 1. play ***********\n");
	printf("*********** 0. exit ************\n");
	printf("*******************************\n");
}

void game()
{
	char mine[11][11];	//存放布置好的雷.
	char show[11][11];	//存放排查出的雷的信息.

	//初始化棋盘：
	//1. mine数组最开始是全'0'.
	//2. show数组最开始是全'*'.
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//打印棋盘：
	/*DisplayBoard(mine, ROW, COL);*/
	DisplayBoard(show, ROW, COL);
	//1. 布置雷：
	SetMine(mine, ROW, COL);
	/*DisplayBoard(mine, ROW, COL);*/
	//2. 排查雷：
	FindMine(mine, show, ROW, COL);
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择：>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("扫雷游戏：\n");
			game();
			break;
		case 0:
			printf("退出游戏！\n");
			break;
		default:
			printf("选择错误，重新选择！\n");
		}
	} while (input);
	return 0;
}