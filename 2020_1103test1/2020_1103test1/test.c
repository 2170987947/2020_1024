#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//递归实现n的k次方
//编写一个函数实现n的k次方，使用递归实现
int Power(int n, int k){
	if (k==0){
		return 1;
	}
	return n*Power(n, k - 1);
}
int main()
{
	int n,k;
	printf("请输入n和k:");
	scanf("%d %d", &n, &k);
	printf("%d的%d次方=%d\n", n,k,Power(n, k));
	system("pause");
	return 0;
}

////计算一个数的每位之和（递归实现)
////写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
////例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
////输入：1729，输出：19
//int DigitSum(int num){
//	if (num < 10){
//		return num;
//	}
//	 return num%10+DigitSum(num/10);	
//}
//
//int main()
//{
//	int num = 0;
//	printf("请输入数字:");
//	scanf("%d", &num);
//	printf("它的和为:%d\n", DigitSum(num));
//	system("pause");
//	return 0;
//}

//字符串逆序（递归实现）
//编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数
//char *reverse_string(char* string){
//	if (strlen(string) < 2){
//		return string;
//	}
//	char ch = *string;
//	int len = strlen(string);
//	*string = *(string + len - 1);
//	*(string + len - 1) = '\0';
//
//	reverse_string(string + 1);
//
//	*(string + len - 1) = ch;
//	return string;
//
//}
//
//int main()
//{
//	char a[] = "Hello World!";
//	printf("%s\n", a);
//	printf("%s\n", reverse_string(a));
//	system("pause");
//	return 0;
//}


////strlen的模拟（递归实现）
////递归和非递归分别实现strlen
////递归
//int  strLen1(char* a){
//	if ((*a) == '\0'){
//		return 0;
//	}
//	return 1+strLen1(a + 1);
//}
////非递归
//int  strLen2(char* a){
//	int count = 0;
//	for (; (*a) != '\0'; a++){
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char a[] = "Hello World!";
//	printf("递归求长度的结果为:%d\n", strLen1(a));
//	printf("非递归求长度的结果为:%d\n", strLen2(a));
//	system("pause");
//	return 0;
//}