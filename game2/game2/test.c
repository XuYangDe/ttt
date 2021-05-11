#define _CRT_SECURE_NO_WARNINGS 
#include "game.h"
void menu()
{
	printf("************************\n");
	printf("**  1.play     *********\n");
	printf("**  0.exit     *********\n");
	printf("************************\n");

}
void game()
{    //雷的信息存储
	//1.布置雷 是雷的位置放置字符1 不是雷的位置放置字符0
	char mine[ROWS][COLS]={0};//11*11
	//2.排查雷  存放雷的信息（临界行和列的周边不好判断8个点是否合法 所以将数组范围扩大至11*11但是存放雷的数组还是9*9）     存放排查出来雷的信息（没排查的放* 排查了的放排查的数字）（给玩家打印的是这个数组）
	char show[ROWS][COLS]={0};
	//初始化
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show,ROWS,COLS,'*');
	//打印棋盘
	Displayboard(show,ROW,COL);
	//布置雷
	Setmine(mine,ROW,COL);
	Displayboard(mine,ROW,COL);
	//Displayboard(mine,ROW,COL);
	//扫雷
	FindMine(mine,show,ROW,COL);


}
void test()
{    int input=0;
     srand((unsigned int)time(NULL));
	do 
	{
		menu();
		printf("请选择:>");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择!\n");
			break;
		}


	}while(input);
}
int main()
{
	test();
	return 0;
}