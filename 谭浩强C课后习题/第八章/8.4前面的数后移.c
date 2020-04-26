//#include<stdio.h>
//int main()
//{
//	void Backward(int* p, int n, int m);
//	int a[20],n, m, i;
//	printf("输入有多少个数，需要向后移动多少个位置\n");
//	scanf_s("%d%d", &n, &m);
//	printf("输入整数：\n");
//	for ( i = 0; i < n; i++) {
//		scanf_s("%d", &a[i]);
//	}
//	printf("原来的数列为:\n");
//	for (i = 0; i < n; i++) printf("%d  ", a[i]);
//	Backward(a,n, m);
//	printf("\n移动后的数列为:\n");
//	for (i = 0; i < n; i++) printf("%d  ", a[i]);
//	return 0;
//}
//void Backward(int* p, int n, int m)
//{
//	int b[20];
//	int* pb=b, * pa=p+n-m;//p+n-m指向的是m的第一块
//	while (pa < p + n)
//		*pb++ = *pa++;
//	pa = p + n - m - 1 ;//移动的话需要移动m的前一块，所以需要多减一个1
//	printf("%d\n", *(p + n));
//	while (pa >= p) 
//		*(pa + m) = *pa--;//pa最后会减到a[-1]造成下溢
//	printf("%d\n", *(p + n));
//	pb = b;
//	pa = p;
//	while (pa < p + m) 
//		*pa++ = *pb++;
//}