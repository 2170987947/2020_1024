#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//����������������������ʱ����)
void swap1(int* num1,int* num2){
	*num1 = (*num1) + (*num2);
	*num2 = (*num1) - (*num2);
	*num1 = (*num1) - (*num2);
}
void swap2(int* num1, int* num2){
	*num1 = (*num1) ^ (*num2);
	*num2 = (*num1) ^ (*num2);
	*num1 = (*num1) ^ (*num2);
}

int main()
{
	int num1 = 10;
	int num2 = 20;
	//swap1(&num1,&num2);     
	//printf("%d,%d\n", num1, num2);
	swap2(&num1, &num2);
	printf("%d,%d\n", num1, num2);
	system("pause");
	return 0;

}


////ͳ�ƶ�������1�ĸ���
//int oneBitCount(int num){
//	int count = 0;
//	for (int i = 0; i < 32; i++){
//		if (num&(num << i)){
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int num = 0;
//	printf("����������:");
//	scanf("%d", &num);
//	printf("��������1�ĸ���Ϊ:%d\n",
//		oneBitCount(num));
//	system("pause");
//	return 0;
//}



//��ӡ���������Ƶ�����λ��ż��λ
//void printOddBit(int num){
//	printf("%d������λΪ:",num);
//	for (int i = 30; i >=0; i -= 2){
//		//����ñ���λ��0,��ӡ1
//		//����,��ӡ0
//		if (num&(1 << i)){
//			printf("%d", 1);
//		}
//		else {
//			printf("%d", 0);
//		}
//	}
//	printf("\n");
//}
//void printEvenBit(int num){
//	printf("%d��ż��λΪ:", num);
//	for (int i = 31; i >=0; i -= 2){
//		//����ñ���λΪ0,��ӡ1
//		//����,��ӡ0
//		if (num&(1 << i)){
//			printf("%d", 1);
//		}
//		else {
//			printf("%d", 0);
//		}
//	}
//	printf("\n");
//}
//int main()
//{
//	int num = 0;
//	printf("����������:");
//	scanf("%d", &num);
//	printOddBit(num);
//	printEvenBit(num);
//
//	system("pause");
//	return 0;
//}

//���������������в�ͬλ�ĸ���
//int notBitCount(int num1, int num2){
//	//bit1���ڴ��num1�ı���λ������
//	int bit1 = 0;
//	//bit2���ڴ��num2�ı���λ������
//	int bit2 = 0;
//	//���ڼ���num1��num2�б���λ��ͬ�ĸ���
//	int count=0;
//	//ȡ��ÿһ������λ������
//	for (int i = 0; i < 32; i++){
//		bit1 = (num1 & (1 << i));
//		bit2 = (num2 & (1 << i));
//		if (bit1!=bit2){
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 8;
//	printf("������������(�м��ÿո���):");
//	scanf("%d %d", &num1, &num2);
//	printf("����λ����ͬ�ĸ���Ϊ:%d\n",notBitCount(num1, num2));
//	system("pause");
//	return 0;
//}

