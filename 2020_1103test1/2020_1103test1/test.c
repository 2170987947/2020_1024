#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//�ݹ�ʵ��n��k�η�
//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ��
int Power(int n, int k){
	if (k==0){
		return 1;
	}
	return n*Power(n, k - 1);
}
int main()
{
	int n,k;
	printf("������n��k:");
	scanf("%d %d", &n, &k);
	printf("%d��%d�η�=%d\n", n,k,Power(n, k));
	system("pause");
	return 0;
}

////����һ������ÿλ֮�ͣ��ݹ�ʵ��)
////дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
////���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
////���룺1729�������19
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
//	printf("����������:");
//	scanf("%d", &num);
//	printf("���ĺ�Ϊ:%d\n", DigitSum(num));
//	system("pause");
//	return 0;
//}

//�ַ������򣨵ݹ�ʵ�֣�
//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�����������
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


////strlen��ģ�⣨�ݹ�ʵ�֣�
////�ݹ�ͷǵݹ�ֱ�ʵ��strlen
////�ݹ�
//int  strLen1(char* a){
//	if ((*a) == '\0'){
//		return 0;
//	}
//	return 1+strLen1(a + 1);
//}
////�ǵݹ�
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
//	printf("�ݹ��󳤶ȵĽ��Ϊ:%d\n", strLen1(a));
//	printf("�ǵݹ��󳤶ȵĽ��Ϊ:%d\n", strLen2(a));
//	system("pause");
//	return 0;
//}