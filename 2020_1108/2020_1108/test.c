#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//喝汽水问题
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水
//给20元，可以多少汽水（编程实现）。
int main()
{
	int money = 0;
	printf("请输入您的资金:");
	scanf("%d", &money);
	//汽水数
	int sodaNum = 0;
	//当前瓶子数
	int bottle = 0;
	//汽水价格
	int price = 1;
	bottle = money / price;
	sodaNum = money/price;
	//用瓶子换汽水
	while (bottle > 1){
		sodaNum += bottle / 2;
		bottle = bottle % 2+bottle/2;

	}
	printf("您可以得到%d瓶汽水\n", sodaNum);
	system("pause");
	return 0;
}