#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define ROW 9
#define COL 9
#define MINECOUNT 10

void Input(char showMap[ROW][COL], char mineMap[ROW][COL], int* row, int* col){
	while (1){
		printf("请输入您要点的位置坐标:");
		scanf("%d %d", row, col);
		if (((*row) < 0) || ((*row) >= ROW)
			|| ((*col) < 0) || ((*col) >= COL)){
			printf("输入有误 ");
			continue;
		}
		if (showMap[*row][*col] == '*'){
			showMap[*row][*col] = ' ';
			break;
		}
	}
}

//返回1表示雷;返回0表示不是雷
int  isMine(char mineMap[ROW][COL], int row, int col){
	if (mineMap[row][col] == 'L'){
		return 1;
	}
	return 0;
}
void init(char showMap[ROW][COL], char mineMap[ROW][COL]){

	for (int row = 0; row < ROW; row++){

		for (int col = 0; col < COL; col++){
			showMap[row][col] = '*';
		}
	}
	for (int row = 0; row < ROW; row++){

		for (int col = 0; col < COL; col++){
			mineMap[row][col] = '*';
		}
	}
	int count = 0;
	while (count<MINECOUNT){
		int row = rand() % 9;
		int col = rand() % 9;
		mineMap[row][col] = 'L';
		count++;
	}
}
void print(char Map[ROW][COL]){
	printf("  |0|1|2|3|4|5|6|7|8|\n");
	for (int row = 0; row < ROW; row++){
		printf("%d |", row);
		for (int col = 0; col < COL; col++){
			printf("%c ", Map[row][col]);
		}
		printf("\n");
	}
}
int  MineNerborhood(char mineMap[ROW][COL], int row, int col){
	if (row < 0 || row >= ROW
		|| col < 0 || col >= COL){
		return '0';
	}
	int count = 0;
	for (int r = row - 1; r <= row + 1; r++){
		for (int c = col - 1; c <= col + 1; c++){
			if (mineMap[r][c] == 'L'){
				count++;
			}
		}
	}
	return count + '0';
}
void game(){
	srand(time(0));
	char showMap[ROW][COL];
	char mineMap[ROW][COL];
	init(showMap, mineMap);
	//print(mineMap);
	int notMineCount = 0;
	printf("扫雷游戏开始啦!\n");
	while (1){
		//打印地图
		print(showMap);
		//输入地点
		int row, col;
		Input(showMap, mineMap, &row, &col);
		//判断是否是雷区
		if (isMine(mineMap, row, col) == 1){
			printf(" 大兄弟,踩雷咧!\n给您看看雷的布局\n");
			print(mineMap);
			break;
		}
		//判断附近雷的情况
		showMap[row][col]=MineNerborhood(mineMap, row, col);

		notMineCount++;
		//判断是否赢了
		if (notMineCount == ROW*COL - MINECOUNT){
			print(mineMap);
			printf("恭喜您赢啦!\n");
			break;
		}
	}
	
}
int menu(){
	printf("===================\n");
	printf("1.开始游戏\n");
	printf("0.结束游戏\n");
	printf("===================\n");
	printf("请输入您的选择:");
	int choice;
	scanf("%d", &choice);
	return choice;
}
int main(){
	while (1){
		int choice = menu();
		if (choice == 1){
			game();
		}else if (choice==0){
			break;
		}else{
			printf("输入有误,请重新输入\n");
		}
	}
	system("pause");
	return 0;
}