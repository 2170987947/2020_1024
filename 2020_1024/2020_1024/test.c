#include<stdio.h>
#include<math.h>
//ʵ��һ���������ж�һ�����ǲ���������
int isPrime(int n){
	for (int i = 2; i <= sqrt(n); i++)
	if (n%i == 0){
		return -1;
	}
	return 1;
}

//��������ʵ�ֵĺ�����ӡ100��200֮���������
int main(){
	for (int i = 100; i <= 200; i++){
		int ret = isPrime(i);
		if (ret == 1){
			printf("%d\n", i);
		}
	}
	system("pause");
	return 0;
}

//int main(){
//	printf("Hello World!\n");
//	system("pause");
//	return 0;
//}
