#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define ROW 3
#define COL 3
//玩家落子(用x表示)
void playerMove(char chessbox[ROW][COL]){
	int row, col;
	while (1){
		printf("请输入您的落子地点:");
		scanf("%d %d", &row, &col);
		if (row >= 3 || col >= 3){
			printf("您输入的落子位置有误,请重新输入:");
			continue;
		}
		if (chessbox[row][col] == ' '){
			chessbox[row][col] = 'x';
			break;
		}
		printf("该位置已有棋子,请重新输入:");
	}
}
//电脑落子(用o表示)
void computerMove(char chessbox[ROW][COL]){
	srand(time(0));
	while (1){
		int row = rand() % 3;
		int col = rand() % 3;
		if (chessbox[row][col] == ' '){
			chessbox[row][col] = 'o';
			break;
		}

	}
}
//初始化棋盘
void initChess(char chessbox[ROW][COL]){
	for (int row = 0; row < ROW; row++){
		for (int col = 0; col < COL; col++){
			chessbox[row][col] = ' ';
		}
	}
}
//打印棋盘
void printChess(char chessbox[ROW][COL]){
	system("cls");
	printf("+---+---+---+\n");
	for (int row = 0; row < ROW; row++){
		printf("| %c | %c | %c |\n", 
			chessbox[row][0], chessbox[row][1],
			chessbox[row][2]);
		printf("+---+---+---+\n");
	}
}
//判断棋盘是否摆满,摆满返回1;未满返回0
int isFullChess(char chessbox[ROW][COL]){
	for (int row = 0; row < ROW; row++){
		for (int col = 0; col < COL; col++){
			//找到空格,说明未满
			if (chessbox[row][col] == ' '){
				return 0;
			}
		}
	}
	return 1;
}
//约定:返回x代表玩家赢了;返回o代表电脑赢了;返回a代表和棋
char isWinner(char chessbox[ROW][COL]){
	//行
	for (int row = 0; row < ROW; row++){
		if (chessbox[row][0] != ' '
			&&chessbox[row][0] == chessbox[row][1]
			&& chessbox[row][0] == chessbox[row][2]){
			return chessbox[row][0];
		}
	}
	//列
	for (int col = 0; col < COL; col++){
		if (chessbox[0][col] != ' '
			&&chessbox[0][col] == chessbox[1][col]
			&& chessbox[0][col] == chessbox[2][col]){
			return chessbox[0][col];
		}
	}
	//对角线
	if (chessbox[0][0] != ' '
		&&chessbox[0][0] == chessbox[1][1]
		&& chessbox[0][0] == chessbox[2][2]){
		return chessbox[0][0];
	}
	if (chessbox[2][0] != ' '
		&&chessbox[2][0] == chessbox[1][1]
		&& chessbox[2][0] == chessbox[0][2]){
		return chessbox[2][0];
	}
	//和棋
	if (isFullChess(chessbox)){
		return 'a';
	}
	return 0;
}
//开始一局游戏
void game(){

	char chessbox[ROW][COL] = { 0 };
	initChess(chessbox);
	printf("游戏开始啦!\n");
	printChess(chessbox);
	while (1){
		//玩家落子
		playerMove(chessbox);
		//打印棋牌
		printChess(chessbox);
		//判断胜负
		if (isWinner(chessbox) == 'x'){
			printf("恭喜您赢啦!\n");
			break;
		}
		if (isWinner(chessbox) == 'a'){
			printf("你和电脑同一水平呦!\n");
			break;
		}
		//电脑落子
		computerMove(chessbox);
		//打印棋牌
		printChess(chessbox);
		//判断胜负
		if (isWinner(chessbox) == 'o'){
			printf("很遗憾,您输了!\n");
			break;
		}
		if (isWinner(chessbox) == 'a'){
			printf("你和电脑同一水平呦!\n");
			break;
		}
	}
}
//菜单
int menu(){
	printf("===============\n");
	printf("1.开始游戏\n");
	printf("0.结束游戏\n");
	printf("===============\n");
	int choice;
	printf("请输入您的选择:");
	scanf("%d", &choice);
	return choice;
}

int main()
{

	while (1){
		int choice=menu();
		if (choice == 1){
			game();
			continue;
		}
		else if (choice == 0){
			break;
		}else{
			printf("输入有误,请您重新输入!\n");
			continue;
		}
	}
	system("pause");
	return 0;
}
