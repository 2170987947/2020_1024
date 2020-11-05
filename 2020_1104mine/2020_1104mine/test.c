#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define ROW 9
#define COL 9
#define MINECOUNT 10

void Input(char showMap[ROW][COL], char mineMap[ROW][COL], int* row, int* col){
	while (1){
		printf("��������Ҫ���λ������:");
		scanf("%d %d", row, col);
		if (((*row) < 0) || ((*row) >= ROW)
			|| ((*col) < 0) || ((*col) >= COL)){
			printf("�������� ");
			continue;
		}
		if (showMap[*row][*col] == '*'){
			showMap[*row][*col] = ' ';
			break;
		}
	}
}

//����1��ʾ��;����0��ʾ������
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
	printf("ɨ����Ϸ��ʼ��!\n");
	while (1){
		//��ӡ��ͼ
		print(showMap);
		//����ص�
		int row, col;
		Input(showMap, mineMap, &row, &col);
		//�ж��Ƿ�������
		if (isMine(mineMap, row, col) == 1){
			printf(" ���ֵ�,������!\n���������׵Ĳ���\n");
			print(mineMap);
			break;
		}
		//�жϸ����׵����
		showMap[row][col]=MineNerborhood(mineMap, row, col);

		notMineCount++;
		//�ж��Ƿ�Ӯ��
		if (notMineCount == ROW*COL - MINECOUNT){
			print(mineMap);
			printf("��ϲ��Ӯ��!\n");
			break;
		}
	}
	
}
int menu(){
	printf("===================\n");
	printf("1.��ʼ��Ϸ\n");
	printf("0.������Ϸ\n");
	printf("===================\n");
	printf("����������ѡ��:");
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
			printf("��������,����������\n");
		}
	}
	system("pause");
	return 0;
}