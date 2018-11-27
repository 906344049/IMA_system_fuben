#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <malloc.h>
#include <windows.h>
#include <conio.h>
#include "zidingyi.h"

struct Node* List1;
char password[100]={""};
//密码隐藏
void password_hide()
{

        int i;
        int temp = 0;
        int write_b=0;
        while(1)
        {
                for (i=0;i<30;i++)
                {
                        password[i] = getch();
                        if (password[i]=='\r')
                        {
                                password[i] = NULL;
                                break;
                        }
                        if (password[i]=='\b')
                        {
                                /*if (write_b == 1)
                                {
                                        i=i-1;
                                        if (i<0)
                                        {
                                                i=0;
                                        }
                                        continue;
                                }
                                write_b = 1;*/
                                i = i-2;
                                if (i<0)
                                {
                                        i=-1;
                                }
                                continue;
                        }
                        write_b = 0;
                        temp+=1;
                }
                break;
        }
        for (i=0;i<temp;i++)
        {
                printf("*");
        }
}

void input(char* name,struct Node* List1)
{
        int result1;
        int i;
        printf("\n\n欢迎使用IMA部员管理系统\n\n");
        printf("账号：");
        scanf("%s", name);
        while(1)
        {
                if (strcmp(name,"exit")==0)
                {
                        result1=exit_ptrfree(name,password,List1);
                        system("cls");
                        printf("\n\n欢迎使用IMA部员管理系统\n\n");
                        printf("账号：");
                        scanf("%s", name);
                }
                else
                {
                        break;
                }
        }
        printf("密码：");
        //scanf("%s", password);
        password_hide(password);
        while (1)
        {
                printf("\n");
                result1 = judge(name);
                if (result1 == 0)
                {
                        break;
                }
                else
                {
                        printf("\n\n欢迎使用IMA部员管理系统\n\n");
                        printf("账号：");
                        scanf("%s", name);
                while(1)
                        {
                                if (strcmp(name,"exit")==0)
                                {
                                        result1=exit_ptrfree(name,password,List1);
                                        system("cls");
                                        input(name,List1);
                                }
                                else
                                {
                                        break;
                                }
                        }
                        //printf("%s",name);
                        printf("密码：");
                        password_hide();
                }
        }
}


int exit_ptrfree(char* name,char* password,struct Node* List1)
{
        system("cls");
        char result[10]="";
        printf("\n\n是否想要退出？(yes/no)\n");
        scanf("%s",result);
        while(1)
        {
                if (strcmp(result,"yes")==0||strcmp(result,"no")==0)
                {
                        if (strcmp(result,"yes")==0)
                        {
                                time_t timep_exit;
                                FILE *exit_1 = NULL;
                                exit_1 = fopen("out.txt","a");
                                time(&timep_exit);
                                fprintf(exit_1,"%s",ctime(&timep_exit));
                                fclose(exit_1);
                                FILE *task_exit=NULL;
                                task_exit = fopen("out.txt","a");
                                fprintf(task_exit,"%s","退出系统\n");
                                fclose(task_exit);
                                free(name);
                                name = NULL;
                                free(password);
                                password = NULL;
                                //free(posData);
                                //      将链表的内容录入文件，覆盖！！！
                                exit(0);
                                return 1;
                        }
                        if (strcmp(result,"no")==0)
                        {
                                return 0;
                        }
                }else
                {
                        printf("您输入的信息有误！！\n");
                        Sleep(900);
                        system("cls");
                        printf("\n\n是否想要退出？(yes/no)\n");
                        printf("请重新输入：");
                        scanf("%s",result);
                }

        }

}

int judge(char *name)
{
	char Minister[10] = "minister";
	char Member[10] = "member";
	char password_min[20] = "iamanartical2333";
	char password_mem[20] = "iloveima2333";
	if ((strcmp(name, Minister) == 0) || (strcmp(name, Member) == 0))
	{
		if ((strcmp(password, password_mem) == 0 && (strcmp(name, Member) == 0)) ||
			(strcmp(password, password_min) == 0) && (strcmp(name, Minister) == 0))
		{
			printf("输入正确！！！\n登录成功\n\n");
			Sleep(1000);
			system("cls");
		}
		else
		{
			printf("您输入的密码有误！！！\n\n");
			Sleep(1000);
			system("cls");
			return 1;
		}
	}
	else
	{
		printf("您输入的账号有误\n");
		Sleep(1000);
		system("cls");
		return 1;
	}
	return 0;
}

