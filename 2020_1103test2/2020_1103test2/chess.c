#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define ROW 3
#define COL 3
//�������(��x��ʾ)
void playerMove(char chessbox[ROW][COL]){
	int row, col;
	while (1){
		printf("�������������ӵص�:");
		scanf("%d %d", &row, &col);
		if (row >= 3 || col >= 3){
			printf("�����������λ������,����������:");
			continue;
		}
		if (chessbox[row][col] == ' '){
			chessbox[row][col] = 'x';
			break;
		}
		printf("��λ����������,����������:");
	}
}
//��������(��o��ʾ)
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
//��ʼ������
void initChess(char chessbox[ROW][COL]){
	for (int row = 0; row < ROW; row++){
		for (int col = 0; col < COL; col++){
			chessbox[row][col] = ' ';
		}
	}
}
//��ӡ����
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
//�ж������Ƿ����,��������1;δ������0
int isFullChess(char chessbox[ROW][COL]){
	for (int row = 0; row < ROW; row++){
		for (int col = 0; col < COL; col++){
			//�ҵ��ո�,˵��δ��
			if (chessbox[row][col] == ' '){
				return 0;
			}
		}
	}
	return 1;
}
//Լ��:����x�������Ӯ��;����o�������Ӯ��;����a�������
char isWinner(char chessbox[ROW][COL]){
	//��
	for (int row = 0; row < ROW; row++){
		if (chessbox[row][0] != ' '
			&&chessbox[row][0] == chessbox[row][1]
			&& chessbox[row][0] == chessbox[row][2]){
			return chessbox[row][0];
		}
	}
	//��
	for (int col = 0; col < COL; col++){
		if (chessbox[0][col] != ' '
			&&chessbox[0][col] == chessbox[1][col]
			&& chessbox[0][col] == chessbox[2][col]){
			return chessbox[0][col];
		}
	}
	//�Խ���
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
	//����
	if (isFullChess(chessbox)){
		return 'a';
	}
	return 0;
}
//��ʼһ����Ϸ
void game(){

	char chessbox[ROW][COL] = { 0 };
	initChess(chessbox);
	printf("��Ϸ��ʼ��!\n");
	printChess(chessbox);
	while (1){
		//�������
		playerMove(chessbox);
		//��ӡ����
		printChess(chessbox);
		//�ж�ʤ��
		if (isWinner(chessbox) == 'x'){
			printf("��ϲ��Ӯ��!\n");
			break;
		}
		if (isWinner(chessbox) == 'a'){
			printf("��͵���ͬһˮƽ��!\n");
			break;
		}
		//��������
		computerMove(chessbox);
		//��ӡ����
		printChess(chessbox);
		//�ж�ʤ��
		if (isWinner(chessbox) == 'o'){
			printf("���ź�,������!\n");
			break;
		}
		if (isWinner(chessbox) == 'a'){
			printf("��͵���ͬһˮƽ��!\n");
			break;
		}
	}
}
//�˵�
int menu(){
	printf("===============\n");
	printf("1.��ʼ��Ϸ\n");
	printf("0.������Ϸ\n");
	printf("===============\n");
	int choice;
	printf("����������ѡ��:");
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
			printf("��������,������������!\n");
			continue;
		}
	}
	system("pause");
	return 0;
}
