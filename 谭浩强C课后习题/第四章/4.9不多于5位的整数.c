//#include<stdio.h>
//#include<math.h>
//void main() {
//	int a,b,c,count,i;//a����ȡ������ĺ�����b������������ĺ�����c��������ÿһλ������
//	printf("����һ��������5λ��������\n");
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
//		printf("\n����һ��%dλ��\n", i);
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
//		printf("�����������������");
//	}
//}
//#include<stdio.h>//��ѡ��ṹ�����Ĳ�����5λ��������
//void main() {
//	int a, b, c, i;//a����ȡ������ĺ�����b������������ĺ�����c��������ÿһλ������
//	printf("����һ��������5λ��������\n");
//	scanf_s("%d", &a);
//	b = a;
//	if (b > 99999) {
//		printf("������Χ");
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
//			printf("�������Χ");
//		}
//	}
//}
//	//if (a < 100000) {
//	//	for (i = 0; b != 0; i++) {
//	//		c = b % 10;
//	//		b = b / 10;
//	//		printf("%d", c);
//	//	}
//	//	printf("\n����һ��%dλ��", i);
//	//}
//	//else {
//	//	printf("�����������������");
//	//}