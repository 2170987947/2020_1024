#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 5
#define MAX 100

//쳲���������
//ѭ��
int fibonacci1(int num){
	int f[MAX];
	f[1] = 1;
	f[2] = 1;
	for (int i = 3; i <= num; i++){
		f[i] = f[i - 1] + f[i - 2];
	}
	return f[num];
}
//�ݹ�
int fibonacci2(int num){
	if (num == 1){
		return 1;
	}
	if (num == 2){
		return 1;
	}
	return fibonacci2(num - 1) + fibonacci2(num - 2);
}

int main()
{
	int num;
	printf("�����������쳲�������:");
	scanf("%d", &num);
	printf("ѭ��f(5)=%d\n",fibonacci1(num));
	printf("�ݹ�f(5)=%d\n",fibonacci2(num));

	system("pause");
	return 0;
}

////������A�е����ݺ�����B�����ݽ��н���(����һ����)
//void swap(int a[], int b[]){
//	int temp = 0;
//	for (int i = 0; i < SIZE; i++){
//		temp = a[i];
//		a[i] = b[i];
//		b[i] = temp;
//	}
//}
//void print(int a[]){
//	for (int i = 0; i < SIZE; i++){
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int a[SIZE] = { 4, 3, 9, 2, 1 };
//	int b[SIZE] = { 5, 0, 3, 2, 7 };
//	printf("a����:");
//	print(a);
//	printf("b����:");
//	print(b);
//	swap(a, b);
//	printf("�������a����:");
//	print(a);
//	printf("�������b����:");
//	print(b);
//	system("pause");
//	return 0;
//}


//void init(int a[]){
//	for (int  i = 0; i < SIZE; i++){
//		a[i] = 0;
//	}
//}
//void update(int a[]){
//	printf("������%d������Ԫ��:", SIZE);
//	for (int i = 0; i < SIZE; i++){
//		scanf("%d", &a[i]);
//	}
//}
//void print(int a[]){
//	for (int i = 0; i < SIZE; i++){
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//}
//void reverse(int* a){
//	int temp = 0;
//	int left = 0;
//	int right = SIZE - 1;
//	for (; left<=right;right--,left++){
//		temp = a[left];
//		a[left] = a[right];
//		a[right] = temp;
//	}
//}
//int main()
//{
//	int a[SIZE];
//	init(a);
//	print(a);
//	update(a);
//	reverse(a);
//	printf("���ú������:");
//	print(a);
//	system("pause");
//	return 0;
//}





//
