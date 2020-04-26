//#include<stdio.h>
//#include<math.h>
//void main() {
//	int a,b,c,count,i;//a用来取得输入的函数，b用来计算输入的函数，c用来计算每一位的数字
//	printf("输入一个不多于5位的正整数\n");
//	scanf_s("%d", &a);
//	b = a;
//	if (a < 100000) {
//		for (i = 0; b != 0; i++) {
//			c = b % 10;
//			b = b / 10;
//			printf("%d", c);
//		}
//		count = i;
//		b = a;
//		printf("\n这是一个%d位数\n", i);
//		int power = pow(10, (count - 1));
//		for (i = 0; i < count; i++) {
//			c = b / power;
//			printf("%d", c);
//			b %= power;
//			power /= 10;
//
//		}
//	}
//	else {
//		printf("输入的整数超出区间");
//	}
//}
//#include<stdio.h>//用选择结构做出的不多于5位的正整数
//void main() {
//	int a, b, c, i;//a用来取得输入的函数，b用来计算输入的函数，c用来计算每一位的数字
//	printf("输入一个不多于5位的正整数\n");
//	scanf_s("%d", &a);
//	b = a;
//	if (b > 99999) {
//		printf("超出范围");
//	}
//	else {
//		if (b > 9999) {
//			printf("%d", b / 10000);
//			b = b % 10000;
//		}
//		if (b > 999) {
//			printf("%d", b / 1000);
//			b = b % 1000;
//		}
//		if (b > 99) {
//			printf("%d", b / 100);
//			b = b % 100;
//		}
//		if (b > 9) {
//			printf("%d", b / 10);
//			b = b % 10;
//		}
//		if (b > -1) {
//			printf("%d", b);
//		}
//		else {
//			printf("输入错误范围");
//		}
//	}
//}
//	//if (a < 100000) {
//	//	for (i = 0; b != 0; i++) {
//	//		c = b % 10;
//	//		b = b / 10;
//	//		printf("%d", c);
//	//	}
//	//	printf("\n这是一个%d位数", i);
//	//}
//	//else {
//	//	printf("输入的整数超出区间");
//	//}