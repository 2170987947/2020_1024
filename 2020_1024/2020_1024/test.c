#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>




//��׳�
//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩

//�ݹ���׳�
int  recursion(int n){
	if (n ==1){
		return 1;
	}
	return n*(recursion(n - 1));
}

//�ǵݹ�
int  notRecursion(int n){
	int res=1;
	for (int i = 1; i <= n; i++){
		res *= i;
	}
	return res;
}
int main()
{
	int num;
	printf("������׳˵�����:");
	scanf("%d", &num);
	printf("%d\n", recursion(num));
	printf("%d\n", notRecursion(num));
	system("pause");
	return 0;
}


////��ӡһ������ÿһλ
////�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
//void func(int n){
//	if (n > 9){
//		func(n / 10);
//	}
//	printf("%d", n % 10);
//}
//
//int main()
//{
//	int num=1234;
//	func(num);
//	printf("\n");
//	system("pause");
//	return 0;
//}

////�˷��ھ���
////ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
////�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���
////column��ʾ��ӡ������
//void mul(int column){
//	for (int i = 1; i <= column; i++){
//		printf("%d*%d=%d\t", column, i, column*i);
//	}
//	printf("\n");
//
//}
////row��ʾ��ӡ������
//void mantraSheet(int row){
//	if (row > 0){
//		for (int i = 1; i <= row; i++){
//			mul(i);
//		}
//	}
//
//}
//int main()
//{
//	int n;
//	printf("������ھ��������:");
//	scanf("%d", &n);
//	mantraSheet(n);
//	system("pause");
//	return 0;
//
//}




////������������
////ʵ��һ�������������������������ݡ�
//void swap(int* a, int* b){
//	//��ʱ����
//	int temp;
//	//*a,*b��ʾ������
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//int main()
//{
//	int a=10,b=30;
//	swap(&a, &b);
//	printf("a=%d\nb=%d\n", a, b);
//	system("pause");
//	return 0;
//}
//


////�����ж�����
////��������,����1;��������,����0.
//int isLeapYear(int year){
//	if (year % 100 == 0){
//		if (year % 400 == 0){
//			return 1;//��������
//		}
//	}else if(year%4==0){
//		return 1;//��ͨ����
//	}else{
//		return 0;
//	}
//}
//
//int main()
//{
//	int year;
//	printf("���������:");
//	scanf("%d", &year);
//	if (isLeapYear(year) == 1){
//		printf("%d������\n", year);
//	}else{
//		printf("%d��������\n", year);
//	}
//	system("pause");
//	return 0;
//
//}
//

////ʵ��һ���������ж�һ�����ǲ���������
//int isPrime(int n){
//	for (int i = 2; i <= sqrt(n); i++)
//	if (n%i == 0){
//		return -1;
//	}
//	return 1;
//}

////��������ʵ�ֵĺ�����ӡ100��200֮���������
//int main(){
//	for (int i = 100; i <= 200; i++){
//		int ret = isPrime(i);
//		if (ret == 1){
//			printf("%d\n", i);
//		}
//	}
//	system("pause");
//	return 0;
//}

//int main(){
//	printf("Hello World!\n");
//	system("pause");
//	return 0;
//}
