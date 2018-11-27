#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <malloc.h>
#include <windows.h>
#include "zidingyi.h"

char t1[100];
char t2[100];
char t3[100];
char t4[100];
char t5[100];
char t6[100];


void t_text1(char* t1)
{
	printf("\n%s\n", t1);
	if (system("pause"))
	{
		system("cls");
	}
	system("cls");
}
void t_text2(char* t2)
{
	printf("\n%s\n", t2);
	if (system("pause"))
	{
		system("cls");
	}
	system("cls");
}
void t_text3(char* t3)
{
	printf("\n%s\n", t3);
	if (system("pause"))
	{
		system("cls");
	}
	system("cls");
}
void t_text4(char* t4)
{
	printf("\n%s\n", t4);
	if (system("pause"))
	{
		system("cls");
	}
	system("cls");
}
void t_text5(char* t5)
{
	printf("\n%s\n", t5);
	if (system("pause"))
	{
		system("cls");
	}
	system("cls");
}
void t_text6(char* t6)
{
	printf("\n%s\n", t6);
	if (system("pause"))
	{
		system("cls");
	}
	system("cls");
}


void task(int choice, int num)
{
	switch (choice)
	{
	case 1:
		if (num == 1)
		{
			printf("移动互联网部的近期任务为：\n");
			t_text1(t1);
		}
		break;
	case 2:
		if (num == 1)
		{
			printf("游戏部的近期任务为：\n");
			t_text2(t2);
		}
		break;
	case 3:
		if (num == 1)
		{
			printf("硬件部的近期任务为：\n");
			t_text3(t3);
		}
		break;
	case 4:
		if (num == 1)
		{
			printf("设计部的近期任务为：\n");
			t_text4(t4);
		}
		break;
	case 5:
		if (num == 1)
		{
			printf("运营部的近期任务为：\n");
			t_text5(t5);
		}
		break;
	case 6:
		if (num == 1)
		{
			printf("产品部的近期任务为：\n");
			t_text6(t6);
		}
		break;
	}

}
