#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//�������
//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222
int sum(int num, int term){
	int total = 0;
	int n=num;
	for (int i = 1; i <= term; i++){
		total += num;
		//printf("%f\n", pow(num, i));
		num = n+num*10;
	}
	return total;
}
int main()
{
	//printf("%f\n", pow(2, 3));
	printf("���������ֺ�����:");
	int num = 0, term = 0;
	scanf("%d %d", &num, &term);
	printf("���Ϊ:%d\n", sum(num, term));
	system("pause");
	return 0;
}


//�ַ�������
//дһ����������������һ���ַ��������ݡ�
//char *reverse(char* string){
//	if (strlen(string) < 2){
//		return string;
//	}
//	//��ʱ������ŵ�һ���ַ�(����Ҫ����)
//	char ch = *(string);
//	//��ǰ�ַ����ĳ���
//	int len = strlen(string);
//	//�����һ���ַ������ݸ�ֵ����һ���ַ�
//	*(string) = *(string + len - 1);
//	//�����һ���ַ���ֵΪ'\0'(���ַ�������)
//	*(string + len - 1) = '\0';
//	//�ݹ����
//	reverse(string + 1);
//	//����һ���ַ��������һ���ַ�
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

//ʹ��ָ���ӡ��������
//дһ��������ӡarr���������
//��ʹ�������±꣬ʹ��ָ�롣
//arr��һ������һά���顣      
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