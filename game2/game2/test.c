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
{    //�׵���Ϣ�洢
	//1.������ ���׵�λ�÷����ַ�1 �����׵�λ�÷����ַ�0
	char mine[ROWS][COLS]={0};//11*11
	//2.�Ų���  ����׵���Ϣ���ٽ��к��е��ܱ߲����ж�8�����Ƿ�Ϸ� ���Խ����鷶Χ������11*11���Ǵ���׵����黹��9*9��     ����Ų�����׵���Ϣ��û�Ų�ķ�* �Ų��˵ķ��Ų�����֣�������Ҵ�ӡ����������飩
	char show[ROWS][COLS]={0};
	//��ʼ��
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show,ROWS,COLS,'*');
	//��ӡ����
	Displayboard(show,ROW,COL);
	//������
	Setmine(mine,ROW,COL);
	Displayboard(mine,ROW,COL);
	//Displayboard(mine,ROW,COL);
	//ɨ��
	FindMine(mine,show,ROW,COL);


}
void test()
{    int input=0;
     srand((unsigned int)time(NULL));
	do 
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��!\n");
			break;
		}


	}while(input);
}
int main()
{
	test();
	return 0;
}