//#include<stdio.h>
//int main()
//{
//	void Backward(int* p, int n, int m);
//	int a[20],n, m, i;
//	printf("�����ж��ٸ�������Ҫ����ƶ����ٸ�λ��\n");
//	scanf_s("%d%d", &n, &m);
//	printf("����������\n");
//	for ( i = 0; i < n; i++) {
//		scanf_s("%d", &a[i]);
//	}
//	printf("ԭ��������Ϊ:\n");
//	for (i = 0; i < n; i++) printf("%d  ", a[i]);
//	Backward(a,n, m);
//	printf("\n�ƶ��������Ϊ:\n");
//	for (i = 0; i < n; i++) printf("%d  ", a[i]);
//	return 0;
//}
//void Backward(int* p, int n, int m)
//{
//	int b[20];
//	int* pb=b, * pa=p+n-m;//p+n-mָ�����m�ĵ�һ��
//	while (pa < p + n)
//		*pb++ = *pa++;
//	pa = p + n - m - 1 ;//�ƶ��Ļ���Ҫ�ƶ�m��ǰһ�飬������Ҫ���һ��1
//	printf("%d\n", *(p + n));
//	while (pa >= p) 
//		*(pa + m) = *pa--;//pa�������a[-1]�������
//	printf("%d\n", *(p + n));
//	pb = b;
//	pa = p;
//	while (pa < p + m) 
//		*pa++ = *pb++;
//}