//#include<stdio.h>
//int main()
//{
//	int cricle(int cri[], int n);
//	int a[50], n = 5, i;//有5个人围成一圈
//	for (i = 0; i < n; i++) {
//		a[i] = i + 1;
//	}
//	cricle(a, n);
//	for (i = 0; i < n; i++)
//		printf("%d\t", a[i]);
//	printf("\n");
//	printf("%d", cricle(a, n));
//}
//int cricle(int cri[5], int n)
//{
//	int* p = cri, * q = cri, num = 0, cnt = 0, stay = 0;
//	while (cnt < n - 1) {
//		if (*p != 0)
//			num++;
//		if (num == 3) {
//			cnt++;
//			num = 0;
//			*p = 0;
//		}
//		p++;
//		if (p == cri + n)
//			p = cri;
//	}
//	printf("\n");
//	while (q < cri + n) {
//		printf("%d ", *q);
//		q++;
//	}
//	return stay;
//}