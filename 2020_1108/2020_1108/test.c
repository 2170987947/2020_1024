#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//����ˮ����
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ
//��20Ԫ�����Զ�����ˮ�����ʵ�֣���
int main()
{
	int money = 0;
	printf("�����������ʽ�:");
	scanf("%d", &money);
	//��ˮ��
	int sodaNum = 0;
	//��ǰƿ����
	int bottle = 0;
	//��ˮ�۸�
	int price = 1;
	bottle = money / price;
	sodaNum = money/price;
	//��ƿ�ӻ���ˮ
	while (bottle > 1){
		sodaNum += bottle / 2;
		bottle = bottle % 2+bottle/2;

	}
	printf("�����Եõ�%dƿ��ˮ\n", sodaNum);
	system("pause");
	return 0;
}