////有10个地区的面积，由小到大排列
//#include<stdio.h>
//void main()
//{
//	int a[10], i, j, t;
//	printf("enter 10 numbers:");
//	for (i = 0; i < 10; i++) {
//		scanf_s("%d", &a[i]);
//	}
//	for(i=0;i<10;i++)
//		for (j = i; j < 10; j++) {
//			if (a[i] > a[j]) {
//				t = a[i];
//				a[i] = a[j];
//				a[j] = t;
//			}
//		}
//	for (i = 0; i < 10; i++) {
//		printf("%4d", a[i]);
//	}
//}