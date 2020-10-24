#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>




//求阶乘
//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）

//递归求阶乘
int  recursion(int n){
	if (n ==1){
		return 1;
	}
	return n*(recursion(n - 1));
}

//非递归
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
	printf("请输入阶乘的数字:");
	scanf("%d", &num);
	printf("%d\n", recursion(num));
	printf("%d\n", notRecursion(num));
	system("pause");
	return 0;
}


////打印一个数的每一位
////递归方式实现打印一个整数的每一位
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

////乘法口诀表
////实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
////如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。
////column表示打印的列数
//void mul(int column){
//	for (int i = 1; i <= column; i++){
//		printf("%d*%d=%d\t", column, i, column*i);
//	}
//	printf("\n");
//
//}
////row表示打印的行数
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
//	printf("请输入口诀表的行数:");
//	scanf("%d", &n);
//	mantraSheet(n);
//	system("pause");
//	return 0;
//
//}




////交换两个整数
////实现一个函数来交换两个整数的内容。
//void swap(int* a, int* b){
//	//临时变量
//	int temp;
//	//*a,*b表示解引用
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


////函数判断闰年
////若是闰年,返回1;不是闰年,返回0.
//int isLeapYear(int year){
//	if (year % 100 == 0){
//		if (year % 400 == 0){
//			return 1;//世纪闰年
//		}
//	}else if(year%4==0){
//		return 1;//普通闰年
//	}else{
//		return 0;
//	}
//}
//
//int main()
//{
//	int year;
//	printf("请输入年份:");
//	scanf("%d", &year);
//	if (isLeapYear(year) == 1){
//		printf("%d是闰年\n", year);
//	}else{
//		printf("%d不是闰年\n", year);
//	}
//	system("pause");
//	return 0;
//
//}
//

////实现一个函数，判断一个数是不是素数。
//int isPrime(int n){
//	for (int i = 2; i <= sqrt(n); i++)
//	if (n%i == 0){
//		return -1;
//	}
//	return 1;
//}

////利用上面实现的函数打印100到200之间的素数。
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
