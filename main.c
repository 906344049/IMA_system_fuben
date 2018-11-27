#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <malloc.h>
#include <windows.h>
#include "zidingyi.h"

extern char t1[100] = "暂无";
extern char t2[100] = "暂无";
extern char t3[100] = "暂无";
extern char t4[100] = "暂无";
extern char t5[100] = "暂无";
extern char t6[100] = "暂无";
struct student info1;
struct Node* List1;
/*
        链表思路：
        只设计一条链表，用部门编号进行区分，输出时通过遍历全员，查找数字输出。
        修改时使用一个副本在函数里面修改，改完之后传回main函数中，覆盖原值

*/

/*
        任务：IMA部员管理系统
        部员账号：member		iloveima2333
        部长账号：minister		iamanartical2333
        退出：exit
*/
/*
        11.19
        当前问题：1、文件读入链表
                  2、链表写入文件
*/
//创建链表

struct Node* creatList()
{
	struct Node* List = (struct Node*)malloc(sizeof(struct Node));
	List->next = NULL;
	return List;
};

//创建节点
struct Node* creatNode(struct student data)
{
        struct Node* node = (struct Node*)malloc(sizeof(struct Node));
	node->data = data;
	node->next = NULL;
	return node;
}

//头插法
void insertNode(struct Node* List, struct student data)
{
	struct Node* newNode = creatNode(data);
	newNode->next = List->next;
	List->next = newNode;
}
//打印
void printList( struct Node* List1,int choice,struct student info1)
{
	struct Node* p = List1->next;
	printf("姓名\t\t学号\t\t电话\t\tQQ号\t\t部门编号\n");
	while (p)
	{
		if (choice==(p->data.department_num))
                {
                        printf("%s\t%s\t%s\t%s\t%d\n", p->data.name, p->data.num, p->data.tele, p->data.qq,p->data.department_num);
                }
                p = p->next;
	}
	printf("\n");
}
//修改信息
struct Node* changeNode(struct Node* List1, char* posData,struct  student info1, struct student *p1)
{
	int k;
	int change_choice;
	struct Node* p_1 = List1;
	struct Node* posNode1 = List1->next;
	while (strcmp(posNode1->data.name, posData) != 0)
	{
		/*原始方法
		p=p->next;
		posNode=posNode->next;
		*/
		/*q*********************q*/
		//快捷方法
		p_1 = posNode1;
		posNode1 = p_1->next;
		if (posNode1 == NULL)
		{
			printf("\n\n未找到！！");
			Sleep(1000);
			system("cls");
			//free(p1);
			//free(posNode1);
			return 0;
		}
	}
	change_choice = NULL;
	printf("\n\n已找到%s同学\n", posData);
	printf("1、姓名\n");
	printf("2、学号\n");
	printf("3、电话\n");
	printf("4、QQ\n");
	printf("5、部门编号\n");
	printf("6、返回");
	printf("\n\n请输入您要修改的信息：");
	k = scanf("%d", &change_choice);
	while (1)
	{
		if ((change_choice != 1 && change_choice != 2 && change_choice != 3 && change_choice != 4 && change_choice != 5 && change_choice != 6 && k == 1) || (k != 1))
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
		change_choice = NULL;
		printf("1、姓名\n");
		printf("2、学号\n");
		printf("3、电话\n");
		printf("4、Qn\n");
		printf("5、部门编号\n");
                printf("6、返回");
		printf("\n\n请重新输入您要修改的信息：");
		k = scanf("%d", &change_choice);
	}
	switch (change_choice)
	{
	case 1:
		system("cls");
		printf("请输入姓名：");
		info1 = posNode1->data;
		scanf("%s",info1.name);
		posNode1->data = info1;
		printf("\n\n修改成功!!");
		time_t timep_a;
                FILE *ofp11 = NULL;
                ofp11 = fopen("out.txt","a");
                time(&timep_a);
                fprintf(ofp11,"%s",ctime(&timep_a));
                fclose(ofp11);
                FILE *change_name=NULL;
                change_name = fopen("out.txt","a");
                fprintf(change_name,"学号为%s的同学姓名被修改\n",info1.num);
                fclose(change_name);
		Sleep(1000);
		system("pause");
		system("cls");
		return List1;
		break;
	case 2:
		system("cls");
		printf("请输入学号：");
		info1 = posNode1->data;
		scanf("%s",info1.num);
		posNode1->data = info1;
		//printf("%s", info1.name);
		printf("\n\n修改成功!!");
		time_t timep_b;
                FILE *ofp12 = NULL;
                ofp12 = fopen("out.txt","a");
                time(&timep_b);
                fprintf(ofp12,"%s",ctime(&timep_b));
                fclose(ofp12);
                FILE *change_num=NULL;
                change_num = fopen("out.txt","a");
                fprintf(change_num,"姓名为%s的同学学号被修改\n",info1.name);
                fclose(change_num);
		Sleep(1000);
		system("pause");
		system("cls");
		return List1;
		break;
	case 3:
		system("cls");
		printf("请输入电话：");
		info1 = posNode1->data;
		scanf("%s",info1.tele);
		//strcpy(info1.name, "黄hh");
		posNode1->data = info1;
		//printf("%s", info1.tele);
		printf("\n\n修改成功!!");
		time_t timep_c;
                FILE *ofp13 = NULL;
                ofp13 = fopen("out.txt","a");
                time(&timep_c);
                fprintf(ofp13,"%s",ctime(&timep_b));
                fclose(ofp13);
                FILE *change_tele=NULL;
                change_tele = fopen("out.txt","a");
                fprintf(change_tele,"姓名为%s的同学电话被修改\n",info1.tele);
                fclose(change_tele);
		Sleep(1000);
		system("pause");
		system("cls");
		return List1;
		break;
	case 4:
		system("cls");
		printf("请输入qq：");
		info1 = posNode1->data;
		scanf("%s",info1.qq);
		//strcpy(info1.name, "黄hh");
		posNode1->data = info1;
		//printf("%s", info1.name);
		printf("\n\n修改成功!!");
		Sleep(1000);
		system("pause");
		system("cls");
		return List1;
		break;
	case 5:
                system("cls");
                k=info1.department_num;
                info1 = posNode1->data;
                while(1)
                {
                        printf("请输入新的部门编号：");
                        scanf("%d",&info1.department_num);
                        if (k==info1.department_num)
                        {
                                printf("\n\n该部门为%s同学原来所属部门，请重新输入！！",posData);
                                Sleep(1000);
                        }else
                        {
                                break;
                        }
                        system("cls");
                }
                posNode1->data = info1;
                printf("\n\n修改成功!!");
                Sleep(1000);
                system("pause");
                system("cls");
                return List1;

                break;
	case 6:
		return 0;
		break;
	}
	//free(p1);
	//free(posNode1);
	return List1;
}

void deleteNode(struct Node* List, char* posData,struct student info1)
{
	struct Node* p = List;
	struct Node* posNode = List->next;
	while (strcmp(posNode->data.name, posData) != 0)
	{
		/*
		原始方法
		p=p->next;
		posNode=posNode->next;
		*/
		//快捷方法

		p = posNode;
		posNode = p->next;
		if (posNode == NULL)
		{
			printf("\n\n未找到！！");
			return;
		}
	}
	p->next = posNode->next;
	free(posNode);
	printf("\n\n删除成功！！");
	time_t timep;
        FILE *ofp99 = NULL;
        ofp99 = fopen("out.txt","a");
        time(&timep);
        fprintf(ofp99,"%s",ctime(&timep));
        rewind(ofp99);
        fprintf(ofp99,"%s的信息被删除\n",posData);
        fclose(ofp99);
}

//文件导入链表
void getinfo(struct Node* List1)
{
        struct Node* p11=(struct Node*)malloc(sizeof(struct Node*));
        FILE *p_get = NULL;
        if ((p_get = fopen("massage.txt","r")) == NULL)
        {
                p_get = fopen("massage.txt","w+");
                fclose(p_get);
                return ;
        }
        else
        {
                while(fscanf(p_get,"%s %s %s %s %d",info1.name,info1.num,info1.qq,info1.tele,&info1.department_num)!=EOF)
                {
                        creatNode(info1);
                        insertNode(List1,info1);
                }
                p11->next = NULL;
        }
        fclose(p_get);
}

struct student info1;

int main()
{
	int choice1;
	int k;                                                  //储存scanf的返回值！！
	int num;                                                //选择部门内的选项序号
	int choice;                                             //选择部门的序号
	int result;                                             //接收返回值
	char *name = NULL;                                        //储存用户名
	name = (char*)malloc(sizeof(char) * 10);
	//char *password = NULL;                                    //储存密码
	//password = (char*)malloc(sizeof(char) * 20);
        //char name[20]={};
        //struct Node* List2 = creatList();
        struct Node* List1 = creatList();
        //struct Node* ptr_List1 = List1;
        char cop[20]="部员登录系统";
        //分情况执行：部员和部长
        ///字体颜色///
        system("color 09");
        ///文件内容存进链表///
        getinfo(List1);
        while(1)
        {
                input(name,List1);
                while (1)
		{
			if (*(name + 1) == 'e')
			{
				//部员
				time_t timep;
                                FILE *ofp1 = NULL;
                                ofp1 = fopen("out.txt","a");
                                time(&timep);
                                fprintf(ofp1,"%s",ctime(&timep));
                                rewind(ofp1);
                                fprintf(ofp1,"%s","部员登录系统\n");
				fclose(ofp1);
				member();
                                break;

			}
			else
			{
				//部长
				time_t timep;
                                FILE *ofp2 = NULL;
                                ofp2 = fopen("out.txt","a");
                                time(&timep);
                                fprintf(ofp2,"%s",ctime(&timep));
                                fprintf(ofp2,"%s","部长登录系统\n");
				fclose(ofp2);
				minister(List1);
				struct Node* p2 = List1->next;
                                FILE *p_writein = NULL;
                                p_writein = fopen("massage.txt","w+");
                                while(p2)
                                {
                                        fprintf(p_writein,"%s %s %s %s %d\n", p2->data.name, p2->data.num, p2->data.tele, p2->data.qq,p2->data.department_num);
                                        p2 = p2 ->next;
                                }
                                fclose(p_writein);
				break;
			}
		}
        }
	return 0;
}
