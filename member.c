#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <malloc.h>
#include <windows.h>
#include "zidingyi.h"

void member_menu1()
{

        printf("部员登录中...\n\n");
        printf("\n1、移动互联网部\n");
        printf("2、游戏部\n");
        printf("3、硬件部\n");
        printf("4、设计部\n");
        printf("5、运营部\n");
        printf("6、产品部\n");
        printf("7、退出登录");

}

void member()
{
        int choice,m;
        member_menu1();
        choice=NULL;
        printf("\n\n请选择：");
        m=scanf("%d", &choice);
        if (choice<1||choice>7)
        {
                if (m!=1)
                {
                        getchar();
                }
                member();
                printf("\n\n输入错误！！\n");
                Sleep(900);
                system("cls");
        }else
        {
                if (choice == 7)
                {
                        Sleep(1000);
                        system("cls");
                        printf("正在退出，请稍后...");
                        Sleep(1000);
                        system("cls");
                        return;
                }else
                {
                        member_function(choice);
                }
        }
}

void member_function(int choice)
{
        int num;
        int k;
        switch (choice)
                {
                case 1:
                        Sleep(1000);
                        system("cls");
                        num = NULL;
                        printf("移动互联网部：\n\n");
                        printf("1、近期任务\n");
                        printf("2、返回\n\n");
                        printf("请选择：");
                        k = scanf("%d", &num);
                        while (1)
                        {
                                if (num == 1 || num == 2)
                                {
                                        printf("\n\n请稍后....");
                                        Sleep(1000);
                                        system("cls");
                                        break;
                                }
                                else
                                {
                                        if (k != 1)
                                        {
                                                getchar();
                                        }
                                        printf("您输入的数字有误！！\n\n");
                                        Sleep(1000);
                                        system("cls");
                                }
                                num = NULL;
                                printf("移动互联网部：\n\n");
                                printf("1、近期任务\n");
                                printf("2、返回\n\n");
                                printf("请重新输入：");
                                k = scanf("%d", &num);
                        }
                        if (num == 1)
                        {
                                task(choice, num);
                        }
                        if (num == 2)
                        {
                                break;
                        }
                        break;
                case 2:
                        Sleep(1000);
                        system("cls");
                        num = NULL;
                        printf("游戏部：\n\n");
                        printf("1、近期任务\n");
                        printf("2、返回\n\n");
                        printf("请选择：");
                        k = scanf("%d", &num);
                        while (1)
                        {
                                if ((num != 1 && num != 2 && k == 1) || (k != 1))
                                {
                                        if (k != 1)
                                        {
                                                getchar();
                                        }
                                        printf("您输入的数字有误！！\n\n");
                                        Sleep(1000);
                                        system("cls");
                                }
                                else
                                {
                                        printf("\n\n请稍后....");
                                        Sleep(1000);
                                        system("cls");
                                        break;
                                }
                                printf("游戏部：\n\n");
                                printf("1、近期任务\n");
                                printf("2、返回\n\n");
                                printf("请重新输入：");
                                k = scanf("%d", &num);
                        }
                        task(choice, num);
                        break;
                case 3:
                        Sleep(1000);
                        system("cls");
                        num = NULL;
                        printf("硬件部：\n\n");
                        printf("1、近期任务\n");
                        printf("2、返回\n\n");
                        printf("请选择：");
                        k = scanf("%d", &num);
                        while (1)
                        {
                                if ((num != 1 && num != 2 && k == 1) || (k != 1))
                                {
                                        if (k != 1)
                                        {
                                                getchar();
                                        }
                                        printf("您输入的数字有误！！\n\n");
                                        Sleep(1000);
                                        system("cls");
                                }
                                else
                                {
                                        printf("\n\n请稍后....");
                                        Sleep(1000);
                                        system("cls");
                                        break;
                                }
                                printf("硬件部：\n\n");
                                printf("1、近期任务\n");
                                printf("2、返回\n\n");
                                printf("请重新输入：");
                                k = scanf("%d", &num);
                        }
                        task(choice, num);
                        break;
                case 4:
                        Sleep(1000);
                        system("cls");
                        num = NULL;
                        printf("设计部：\n\n");
                        printf("1、近期任务\n");
                        printf("2、返回\n\n");
                        printf("请选择：");
                        k = scanf("%d", &num);
                        while (1)
                        {
                        if ((num != 1 && num != 2 && k == 1) || (k != 1))
                                {
                                        if (k != 1)
                                        {
                                                getchar();
                                        }
                                        printf("您输入的数字有误！！\n\n");
                                        Sleep(1000);
                                        system("cls");
                                }
                                else
                                {
                                        printf("\n\n请稍后....");
                                        Sleep(1000);
                                        system("cls");
                                        break;
                                }
                                printf("设计部：\n\n");
                                printf("1、近期任务\n");
                                printf("2、返回\n\n");
                                printf("请重新输入：");
                                k = scanf("%d", &num);
                        }
                        task(choice, num);
                        break;
                case 5:
                        Sleep(1000);
                        system("cls");
                        num = NULL;
                        printf("运营部：\n\n");
                        printf("1、近期任务\n");
                        printf("2、返回\n\n");
                        printf("请选择：");
                        k = scanf("%d", &num);
                        while (1)
                        {
                                if ((num != 1 && num != 2 && k == 1) || (k != 1))
                                {
                                if (k != 1)
                                        {
                                                getchar();
                                        }
                                        printf("您输入的数字有误！！\n\n");
                                        Sleep(1000);
                                        system("cls");
                                }
                                else
                                {
                                        printf("\n\n请稍后....");
                                        Sleep(1000);
                                        system("cls");
                                        break;
                                }
                                printf("运营部：\n\n");
                                printf("1、近期任务\n");
                                printf("2、返回\n\n");
                                printf("请重新输入：");
                                k = scanf("%d", &num);
                        }
                        task(choice, num);
                        break;
                case 6:
                        Sleep(1000);
                        system("cls");
                        num = NULL;
                        printf("产品部：\n\n");
                        printf("1、近期任务\n");
                        printf("2、返回\n\n");
                        printf("请选择：");
                        k = scanf("%d", &num);
                        while (1)
                        {
                                if ((num != 1 && num != 2 && k == 1) || (k != 1))
                                {
                                        if (k != 1)
                                        {
                                                getchar();
                                        }
                                        printf("您输入的数字有误！！\n\n");
                                        Sleep(1000);
                                        system("cls");
                                }
                                else
                                {
                                        printf("\n\n请稍后....");
                                        Sleep(1000);
                                        system("cls");
                                        break;
                                }
                                printf("产品部：\n\n");
                                printf("1、近期任务\n");
                                printf("2、返回\n\n");
                                printf("请重新输入：");
                                k = scanf("%d", &num);
                        }
                        task(choice, num);
                        break;
                default:
                        printf("输入的数字有误！！");
                        Sleep(1000);
                        system("cls");
                        break;
                }
                member();
}
