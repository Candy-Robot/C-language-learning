//#include<stdio.h>
//void main() 
//{
//	int n, m, i,j,rit=1;
//	printf("输入两个正整数\n");
//	scanf_s("%d%d", &n, &m);
//	for (i = 1; m * i % n != 0; i++);
//	printf("最小公倍数%d\n", m * i);
//	for (j = 1; j <= m && j <= n; j++) {
//		if (m % j == 0 && n % j == 0) {
//			rit = j;
//		}
//	}
//	//for (; m % j != 0 || n % j != 0; j--) {
//	//	printf("%d\t", j);
//	//}
//	printf("最大公约数是%d\n", rit);
//}