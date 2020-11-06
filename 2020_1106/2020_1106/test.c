#include<stdio.h>
#include<stdlib.h>

int main(){
	printf("请输入数字和项数:");
	int num = 0, term = 0;
	scanf("%d %d", &num, &term);
	printf("结果为:%d\n", sum(num, term));
	system("pause");
	return 0;
}


//字符串逆序
//写一个函数，可以逆序一个字符串的内容。
//char *reverse(char* string){
//	if (strlen(string) < 2){
//		return string;
//	}
//	//临时变量存放第一个字符(即将要倒置)
//	char ch = *(string);
//	//当前字符串的长度
//	int len = strlen(string);
//	//将最后一个字符的内容赋值给第一个字符
//	*(string) = *(string + len - 1);
//	//将最后一个字符赋值为'\0'(即字符串结束)
//	*(string + len - 1) = '\0';
//	//递归调用
//	reverse(string + 1);
//	//将第一个字符赋给最后一个字符
//	*(string + len - 1) = ch;
//
//}
//int main()
//{
//	char str[] = "hello world!";
//	reverse(str);
//	printf("%s\n", str);
//	system("pause");
//	return 0;
//}

//使用指针打印数组内容
//写一个函数打印arr数组的内容
//不使用数组下标，使用指针。
//arr是一个整形一维数组。      
//void arr(int* a,int length){
//	for (int i = 1; i <= length;i++){
//		printf("%d\t", *a);
//		a++;
//	}
//}
//int main() {
//	int a[] = { 0, 1, 2, 3, 4 };
//	arr(a,sizeof(a)/sizeof(a[0]));
//	printf("\n");
//	system("pause");
//	return 0;
//}