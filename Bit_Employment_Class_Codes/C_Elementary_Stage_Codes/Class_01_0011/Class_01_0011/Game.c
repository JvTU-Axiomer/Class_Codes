#define _CRT_SECURE_NO_WARNINGS 1

#include "Game.h"

/* 初始化棋盘. */
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

/* 打印棋盘. */
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	printf("--------扫雷游戏-------\n");
	//打印列号：
	for (i = 0; i < col + 1; i++)
	{
		printf("%d ", i);
	}
	printf("\n");

	for (i = 1; i < 1 + row; i++)
	{
		//打印行号：
		printf("%d ", i);
		int j = 0;
		for (j = 1; j < 1 + col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

/* 随机布置雷. */
void SetMine(char board[ROWS][COLS], int row, int col)
{
	//布置10个雷.
	//1. 生成随机的坐标，布置雷.
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;

		//判断生成的坐标是否合理：
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

/* 计算某一单元格周边雷的个数. */
int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	return (mine[x - 1][y] + mine[x - 1][y - 1] + mine[x][y - 1] + mine[x + 1][y - 1] + mine[x + 1][y] +
		mine[x + 1][y + 1] + mine[x][y + 1] + mine[x - 1][y + 1] - 8 * '0');
}

/* 排查雷. */
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;

	while (win < row * col - EASY_COUNT)
	{
		printf("请输入要排查的坐标：>\n");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("BOOM!!!\n");
				printf("BOOM!!!\n");
				printf("BOOM!!!\n");
				printf("很遗憾，你被炸死了！\n");
				printf("本局游戏雷的位置分布如下：\n");
				DisplayBoard(mine, ROW, COL);
				printf("\n");

				Sleep(5000);
				break;
			}
			else
			{
				//该位置不是雷，统计这个坐标周围有几个雷：
				int cnt = GetMineCount(mine, x, y);
				show[x][y] = cnt + '0';
				DisplayBoard(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("坐标非法，请重新输入！\n");
		}
	}

	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你，排雷成功！\n");
		printf("本局游戏雷的位置分布如下：\n");
		DisplayBoard(mine, ROW, COL);

		Sleep(5000);
	}
}