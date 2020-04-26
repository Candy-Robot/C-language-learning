//#include<stdio.h>
//void main()
//{
//	int a[100];
//	int i,j,cnt=0;
//	for (i = 0; i < 100; i++) {
//		a[i] = 1;//标记为1的数是素数
//	}
//	for (i = 2; i < 100; i++) {
//		for (j = 2; j < i + 1; j++) {
//			if ((i+1) % j == 0) {
//				a[i] = 0;//如果可以被前面的数整除就标记为非素数
//			}
//		}
//	}
//	for (i = 1; i < 100; i++) {
//		if (a[i]) {
//			printf("%d\t", i+1);
//			cnt++;
//			if (cnt % 5 == 0) {
//				printf("\n");
//			}
//		}
//	}
//
//}