#define _CRT_SECURE_NO_WARNINGS 1
#include "Game.h"

/* 初始化棋盘为 '空格'. */
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

/* 棋盘显示_版本1. */
void DisplayBoard_01(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

/* 棋盘显示_版本2. */
void DisplayBoard_02(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//1. 打印数据.
		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		//2. 打印分割线.
		if (i < row - 1)
			printf("---|---|---\n");
	}
}

/* 棋盘显示_版本3. */
void DisplayBoard_03(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//1. 打印数据.
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");

		//2. 打印分割线.
		if (i < row - 1)
		{
			int p = 0;
			for (p = 0; p < col; p++)
			{
				printf("---");
				if (p < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}

/* 玩家下棋. */
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家下棋：>\n");
	while (1)
	{
		printf("请输入下棋的坐标，中间使用空格：\n");
		scanf("%d %d", &x, &y);
		//判断玩家输入坐标的合法性：
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				//可以落子.
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				//不能落子.
				printf("坐标被占用，不能落子，请重新输入坐标！\n");
			}
		}
		else
		{
			printf("坐标非法，重新输入！\n");
		}
	}
}

/* 电脑随机下棋. */
void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;	//0 ~ row - 1.
	int y = 0;	//0 ~ col - 1;

	printf("电脑下棋：>\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		//判断电脑生成坐标的合法性：
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

/* 判断棋盘是否已满. */
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}

/* 判断输赢. */
char IsWin(char board[ROW][COL], int row, int col)
{
	//玩家赢 -- 返回 '*'.
	//电脑赢 -- 返回 '#'.
	//平	 局 -- 返回 'Q'.

	//判断是否某一方获胜.
	//判断行：
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	//判断列：
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}
	//判断对角线：
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		return board[1][1];
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
		return board[1][1];

	//判断是否平局：
	if (IsFull(board, row, col) == 1)
		return 'Q';

	//继续游戏：
	return 'C';
}