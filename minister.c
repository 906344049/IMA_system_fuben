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


struct student* p1;
struct student info1;
struct Node* List1;



void minister_menu1()
{
        printf("部长登录中..\n\n");
        printf("\n1、移动互联网部\n");
        printf("2、游戏部\n");
        printf("3、硬件部\n");
        printf("4、设计部\n");
        printf("5、运营部\n");
        printf("6、产品部\n");
        printf("7、退出登录");
}

void minister_menu2()
{
        printf("\n1、查看近期任务\n");
        printf("2、布置任务\n");
        printf("3、部员管理\n");
        printf("4、返回\n\n");
}

void minister_menu3()
{
        printf("部员管理：\n");
        printf("\n1、新部员加入\n");
        printf("2、部员资料修改\n");
	printf("3、部员删除\n");
        printf("4、查看部门成员\n");
        printf("5、返回\n");
}

void minister(struct Node* List1)
{
        static int choice;
        int num=0;
        minister_menu1();
        printf("\n\n请选择：");
        scanf("%d", &choice);
        if (choice<1||choice>7)
        {
                getchar();
                minister(List1);
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
                        struct Node* p2 = List1->next;
                        FILE *p_writein = NULL;
                        p_writein = fopen("massage.txt","w+");
                        while(p2)
                        {
                                fprintf(p_writein,"%s %s %s %s %d\n", p2->data.name, p2->data.num, p2->data.tele, p2->data.qq,p2->data.department_num);
                                p2 = p2 ->next;
                        }
                        fclose(p_writein);
                        return main();
                }else
                {

                        minister_function(choice,num,List1);
                }
        }
}

void minister_function3(int choice,struct Node* List1)
{
        int num,k;
        minister_menu2();
        printf("请选择：");
        k = scanf("%d", &num);
        if (num == 4)
        {
                printf("\n\n请稍候，正在返回...");
                Sleep(1000);
                system("cls");
                minister(List1);
        }

                if ((num != 1 && num != 2 && num != 3 && num != 4 && k == 1) || (k != 1))
                {
                        if (k != 1)
                        {
                                getchar();
                        }
                        printf("您输入的数字有误！！\n\n");
                        Sleep(1000);
                        system("cls");
                        minister_function3(choice,List1);
                }
                else
                {
                        printf("\n\n请稍后....");
                        Sleep(1000);
                        system("cls");
                        minister_function1(choice,num,List1);
                }
}

void minister_function(int choice,int num,struct Node* List1)
{
        int num2,k;
        switch (choice)
        {
                case 1:
                        Sleep(1000);
                        system("cls");
                        num2 = NULL;
                        printf("移动互联网部：\n\n");
                        minister_function3(choice,List1);
                        break;
                case 2:
                        Sleep(1000);
                        system("cls");
                        num2 = NULL;
                        printf("游戏部\n\n");
                        minister_function3(choice,List1);
                        break;
                case 3:
                        Sleep(1000);
                        system("cls");
                        num2 = NULL;
                        printf("硬件部\n\n");
                        minister_function3(choice,List1);
                        break;
                case 4:
                        Sleep(1000);
                        system("cls");
                        num2 = NULL;
                        printf("设计部\n\n");
                        minister_function3(choice,List1);
                        break;
                case 5:
                        Sleep(1000);
                        system("cls");
                        num2 = NULL;
                        printf("运营部\n\n");
                        minister_function3(choice,List1);
                        break;
                case 6:
                        Sleep(1000);
                        system("cls");
                        num2 = NULL;
                        printf("产品部\n\n");
                        minister_function3(choice,List1);
                        break;

        }
}


void minister_function1(int choice,int num,struct Node* List1)
{
        switch(num)
        {
        case 1:
                task(choice, num);

                minister_function(choice,num,List1);
                break;
        case 2:
                printf("请输入任务内容：\n");
                switch(choice)
                {
                case 1:
                        scanf("\t%s", t1);
                        time_t timep;
                        FILE *ofp3 = NULL;
                        ofp3 = fopen("out.txt","a");
                        time(&timep);
                        fprintf(ofp3,"%s",ctime(&timep));
                        //fclose(ofp3);
                        //FILE *task_p1=NULL;
                        //task_p1 = fopen("out.txt","a");
                        rewind(ofp3);
                        fprintf(ofp3,"%s","移动部布置了任务\n");
                        fclose(ofp3);
                        break;
                case 2:
                        scanf("\t%s", t2);
                        time_t timep1;
                        FILE *ofp4 = NULL;
                        ofp4 = fopen("out.txt","a");
                        time(&timep1);
                        fprintf(ofp4,"%s",ctime(&timep1));
                        //fclose(ofp4);
                        //FILE *task_p2=NULL;
                        //task_p2 = fopen("out.txt","a");
                        rewind(ofp4);
                        fprintf(ofp4,"%s","游戏部布置了任务\n");
                        fclose(ofp4);
                        break;
                case 3:
                        scanf("\t%s", t3);
                        time_t timep2;
                        FILE *ofp5 = NULL;
                        ofp5 = fopen("out.txt","a");
                        time(&timep2);
                        fprintf(ofp5,"%s",ctime(&timep2));
                        //fclose(ofp5);
                        //FILE *task_p3=NULL;
                        //task_p3 = fopen("out.txt","a");
                        rewind(ofp5);
                        fprintf(ofp5,"%s","硬件部布置了任务\n");
                        fclose(ofp5);
                        break;
                case 4:
                        scanf("\t%s", t4);
                        time_t timep3;
                        FILE *ofp6 = NULL;
                        ofp6 = fopen("out.txt","a");
                        time(&timep3);
                        fprintf(ofp6,"%s",ctime(&timep3));
                        //fclose(ofp6);
                        //FILE *task_p4=NULL;
                        //task_p4 = fopen("out.txt","a");
                        rewind(ofp6);
                        fprintf(ofp6,"%s","设计部布置了任务\n");
                        fclose(ofp6);
                        break;
                case 5:
                        scanf("\t%s", t5);
                        time_t timep4;
                        FILE *ofp7 = NULL;
                        ofp7 = fopen("out.txt","a");
                        time(&timep4);
                        fprintf(ofp7,"%s",ctime(&timep4));
                        //fclose(ofp7);
                        //FILE *task_p5=NULL;
                        //task_p5 = fopen("out.txt","a");
                        rewind(ofp7);
                        fprintf(ofp7,"%s","运营部布置了任务\n");
                        fclose(ofp7);
                        break;
                case 6:
                        scanf("\t%s", t6);
                        time_t timep5;
                        FILE *ofp8 = NULL;
                        ofp8 = fopen("out.txt","a");
                        time(&timep5);
                        fprintf(ofp8,"%s",ctime(&timep5));
                        //fclose(ofp8);
                        //FILE *task_p6=NULL;
                        //task_p6 = fopen("out.txt","a");
                        fprintf(ofp8,"%s","产品部布置了任务\n");
                        fclose(ofp8);
                        break;
                }
                printf("\n\n任务已布置！！");
                Sleep(1000);
                system("cls");
                minister_function(choice,num,List1);
                break;
        case 3:
                minister_function2(choice,num,List1);
                break;
        case 4:
                minister_function(choice,num,List1);
                break;
        }
}


void minister_function2(int choice,int num,struct Node*List1)
{
        int k,num1,choice1,m;
        m=choice;
        num1=NULL;
        minister_menu3();
        printf("请选择：");
        scanf("%d",&choice1);
        if ((choice1 != 1) && (choice1 != 2) && (choice1 != 3) && (choice1 != 4) && (choice1 != 5))
        {
                if (k!=1)
                {
                        getchar();
                }
                printf("输入错误，请重新输入！！！");
                Sleep(900);
                system("cls");
                minister_function2(choice,num,List1);
        }
        if (choice1==5)
        {
                minister_function(choice,num,List1);
        }

        char name_change[20] = "";
	char name[100] = "";
        switch (choice1)
        {
                case 1:
                        printf("\n\n请稍候...");
                        Sleep(1000);
                        system("cls");
                        while(1)
                        {
                                printf("\n请输入新成员的个人信息：\n姓名\t\t学号\t\t电话\t\tQQ\t\t部门编号\n");
                                scanf("%s %s %s %s %d", info1.name, info1.num, info1.tele, info1.qq,&info1.department_num);
                                if (info1.department_num>7 ||  info1.department_num<1)
                                {
                                        printf("\n\n部门编号输入错误！！请重新输入！！");
                                        Sleep(500);
                                        system("cls");
                                }
                                else
                                {
                                        break;
                                }
                        }
                        insertNode(List1, info1);
                        /*
                        FILE *write_massage=NULL;
                        write_massage = fopen("massage.txt","a");
                        fprintf(write_massage,"%s  %s  %s  %s          %d\n", info1.name, info1.num, info1.tele, info1.qq,info1.department_num);
                        fclose(write_massage);
                        */
                        //fopen()
                        printf("\n\n输入成功！！");
                        time_t timep;
                        FILE *qq = NULL;
                        qq = fopen("out.txt","a");
                        time(&timep);
                        fprintf(qq,"%s",ctime(&timep));
                        fclose(qq);
                        //FILE *pp_write=NULL;
                        //FILE *write_ =NULL;
                        FILE *write =NULL;
                        //FILE *write4 =NULL;
                        //FILE *write5 =NULL;
                        //FILE *write6 =NULL;
                        write = fopen("out.txt","a");
                        switch (info1.department_num)
                        {
                        case 1:

                                //pp_write1 = fopen("out.txt","a");
                                fprintf(write,"%s","移动部新增一位成员\n");
                                //fclose(pp_write1);
                                break;
                        case 2:

                                //write_2 = fopen("out.txt","a");
                                fprintf(write,"%s","游戏部新增一位成员\n");
                                //fclose(write_2);
                                break;
                        case 3:

                                //write3 = fopen("out.txt","a");
                                fprintf(write,"%s","硬件部新增一位成员\n");
                                //fclose(write3);
                                break;
                        case 4:

                                //write4 = fopen("out.txt","a");
                                fprintf(write,"%s","设计部新增一位成员\n");
                                //fclose(write4);
                                break;
                        case 5:

                                //write5 = fopen("out.txt","a");
                                fprintf(write,"%s","运营部新增一位成员\n");
                                //fclose(write5);
                                break;
                        case 6:

                                //write6 = fopen("out.txt","a");
                                fprintf(write,"%s","产品部新增一位成员\n");
                                //fclose(write6);
                                break;
                        }
                        fclose(write);
                        Sleep(1000);
                        system("cls");
                        minister_function2(choice,num,List1);
                        break;
                case 2:
                        printf("\n\n请稍候...");
                        Sleep(1000);
                        system("cls");
                        printf("请输入您要修改的成员名称：");
                        scanf("%s", name_change);
                        List1 = changeNode(List1, name_change, info1, p1);
                        minister_function2(choice,num,List1);
                        break;
                case 3:
                        printf("\n\n请稍候...");
                        Sleep(1000);
                        system("cls");
                        printf("请输入您要删除的学生姓名：");
                        scanf("%s", name);
                        deleteNode(List1, name,info1);
                        Sleep(1000);
                        system("cls");
                        minister_function2(choice,num,List1);
                        break;
                case 4:
                        printf("\n\n请稍候...");
                        Sleep(1000);
                        system("cls");
                        printList(List1,choice,info1);
                        printf("\n\n");
                        if (system("pause"))
                        {
                                system("cls");
                        }
                        system("cls");
                        minister_function2(choice,num,List1);
                        break;
        }
}
