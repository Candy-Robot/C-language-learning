//#include<stdio.h>
//void main() {
//	int award, money,m;
//	int a1, a2, a4, a6, a10;
//	a1 = 100000 * 0.1;//10000
//	a2 = (200000 - 100000) * 0.75 + a1;//85000
//	a4 = (400000 - 200000) * 0.05 + a2;//95000
//	a6 = (600000 - 400000) * 0.03 + a4;//101000
//	a10 = (1000000 - 600000) * 0.015 + a6;//107000
//	printf("输入当前的利润\t");
//	scanf_s("%d", &money);
//	m = money;
//	award = 0;
//	if (m > 1000000) 
//		award = (m - 1000000) * 0.01 + a10;
//	else 
//		if (m > 600000) 
//			award = (m - 600000) * 0.015 + a6;
//		else 
//			if (m > 400000) 
//				award = (m - 400000) * 0.03 + a4;
//			else 
//				if (m > 200000) 
//					award = (m - 200000) * 0.05 + a2;
//				else 
//					if (m > 100000) 
//						award = (m - 100000) * 0.75 + a1;
//					else
//						if (m > 0) 
//							award = m * 0.1;
//						else {
//							award = 0;
//							printf("当前利润为负\n");
//						}
//	printf("应得的奖金为%d", award);
//	return;
//}