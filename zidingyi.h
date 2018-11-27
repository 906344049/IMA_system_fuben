#ifndef ZIDINGYI_H_INCLUDED
#define ZIDINGYI_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <malloc.h>
#include <windows.h>

typedef struct student
{
	char name[20];
	char num[15];
	char tele[15];
	char qq[15];
	int department_num;
};


typedef struct Node
{
	struct student data;
	struct Node* next;
};




//验证登录
int judge(char *);
void input(char*,struct Node*);
void password_hide();
int exit_ptrfree(char* ,char*,struct Node*);

//任务储存
void task(int, int);                                                 //近期任务函数
void t_text1(char*);                                                 //移动部临时任务文件
void t_text2(char*);                                                 //游戏部临时任务文件
void t_text3(char*);                                                 //硬件部临时任务文件
void t_text4(char*);                                                 //设计部临时任务文件
void t_text5(char*);                                                 //运营部临时任务文件
void t_text6(char*);                                                 //产品部临时任务文件

//部员登录窗口
void member();
void member_menu1();
void member_function(int);

//部长登录窗口
void minister(struct Node*);
void minister_menu1();
void minister_menu2();
void minister_menu3();
void minister_function(int,int,struct Node* );
void minister_function1(int,int,struct Node* );
void minister_function2(int,int,struct Node* );
void minister_function3(int,struct Node* );



#endif // ZIDINGYI_H_INCLUDED
