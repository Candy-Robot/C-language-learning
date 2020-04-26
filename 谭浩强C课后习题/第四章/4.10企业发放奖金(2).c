//#include<stdio.h>
//void main() {
//	int award, money, m, n;
//	int a1, a2, a4, a6, a10;
//	a1 = 100000 * 0.1;
//	a2 = (200000 - 100000) * 0.75 + a1;
//	a4 = (400000 - 200000) * 0.05 + a2;
//	a6 = (600000 - 400000) * 0.03 + a4;
//	a10 = (1000000 - 600000) * 0.015 + a6;
//	printf("输入当前的利润\t");
//	scanf_s("%d", &money);
//	m = money;
//	award = 0;
//	n = m / 100000;
//	if (m < 0) {
//		printf("获得的利润为负数");
//		award = 0;
//	}
//	else {
//		switch (n) {
//		case 0:award = m * 0.1; break;
//		case 1:award = (m - 100000) * 0.075 + a1; break;
//		case 2:
//		case 3:award = (m - 200000) * 0.05 + a2; break;
//		case 4:
//		case 5:award = (m - 400000) * 0.03 + a4; break;
//		case 6:
//		case 7:
//		case 8:
//		case 9:award = (m - 600000) * 0.015 + a6; break;
//		default:award = (m - 1000000) * 0.01 + a10; break;
//		}
//	}
//	printf("应得的奖金为%d", award);
//	return;
//}