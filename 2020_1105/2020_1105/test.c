#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//交换两个变量（不创建临时变量)
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


////统计二进制中1的个数
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
//	printf("请输入数字:");
//	scanf("%d", &num);
//	printf("二进制中1的个数为:%d\n",
//		oneBitCount(num));
//	system("pause");
//	return 0;
//}



//打印整数二进制的奇数位和偶数位
//void printOddBit(int num){
//	printf("%d的奇数位为:",num);
//	for (int i = 30; i >=0; i -= 2){
//		//如果该比特位非0,打印1
//		//否则,打印0
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
//	printf("%d的偶数位为:", num);
//	for (int i = 31; i >=0; i -= 2){
//		//如果该比特位为0,打印1
//		//否则,打印0
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
//	printf("请输入数字:");
//	scanf("%d", &num);
//	printOddBit(num);
//	printEvenBit(num);
//
//	system("pause");
//	return 0;
//}

//求两个数二进制中不同位的个数
//int notBitCount(int num1, int num2){
//	//bit1用于存放num1的比特位的数字
//	int bit1 = 0;
//	//bit2用于存放num2的比特位的数字
//	int bit2 = 0;
//	//用于计算num1和num2中比特位不同的个数
//	int count=0;
//	//取出每一个比特位的数字
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
//	printf("请输入两个数(中间用空格间隔):");
//	scanf("%d %d", &num1, &num2);
//	printf("比特位不相同的个数为:%d\n",notBitCount(num1, num2));
//	system("pause");
//	return 0;
//}

