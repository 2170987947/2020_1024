#include<stdio.h>
//ð������
void bubble(int* arr,int len){
	//���ѭ����ʾִ�е�����
	//��������β����
	for (int bound = 0; bound < len-1; bound++){
		for (int i = 0; i < len-bound-1; i++){
			if (arr[i]>arr[i + 1]){
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}
}
int main()
{
	int arr[6] = { 3, 8, 9, 2, 6, 5 };
	int len = sizeof(arr) / sizeof(arr[0]);
	printf("ԭ����Ϊ:");
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	bubble(arr,len);
	printf("���������Ϊ:");
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]);i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}