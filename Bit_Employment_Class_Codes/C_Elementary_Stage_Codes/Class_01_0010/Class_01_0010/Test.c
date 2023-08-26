﻿#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "game.h"

void menu()
{
	printf("***********************************\n");
	printf("************* 1. play *************\n");
	printf("************* 0. exit *************\n");
	printf("***********************************\n");
}

void game()
{
	char board[ROW][COL] = { 0 };
	//初始化棋盘：
	InitBoard(board, ROW, COL);	//3行3列的棋盘.
	//打印棋盘：
	DisplayBoard_03(board, ROW, COL);

	//下棋：
	char ret = 0;
	while (1)
	{
		//玩家下棋：
		PlayerMove(board, ROW, COL);
		DisplayBoard_03(board, ROW, COL);
		//判断输赢：
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//电脑下棋：
		ComputerMove(board, ROW, COL);
		DisplayBoard_03(board, ROW, COL);
		//判断输赢：
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
		printf("玩家赢！\n");
	else if (ret == '#')
		printf("电脑赢！\n");
	else
		printf("平局！\n");
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("三子棋游戏：\n");
			game();
			break;
		case 0:
			printf("退出游戏！\n");
			break;
		default:
			printf("选择错误，重新选择！\n");
			break;
		}
	} while (input);
}