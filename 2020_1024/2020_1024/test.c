#include<stdio.h>
#include<math.h>
//实现一个函数，判断一个数是不是素数。
int isPrime(int n){
	for (int i = 2; i <= sqrt(n); i++)
	if (n%i == 0){
		return -1;
	}
	return 1;
}

//利用上面实现的函数打印100到200之间的素数。
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
