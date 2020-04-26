//#include<stdio.h>
//int main()
//{
//	void getin(int* p, int n);
//	void exchange(int* p, int n);
//	void putout(int* p, int n);
//	int a[10], n = 10;
//	getin(a, n);
//	exchange(a,n);
//	putout(a, n);
//	return 0;
//}
//void getin(int* p, int n)
//{
//	int* q = p;
//	while (q < p + n)scanf_s("%d", q++);
//}
//void exchange(int* p,int n)
//{
//	void swap(int* p, int* q);
//	int* q = p;
//	int	* max = p+n-1,* min = p, temp=0;
//	while (q < p+n) {
//		if (*q > * max)  max = q;
//		if (*q < * min)  min = q;
//		q++;
//	}
//	swap(p, min);
//	swap(p + n - 1, max);
//}
//void putout(int* p, int n)
//{
//	int* q=p;
//	while (q < p + n) 
//		printf("%d\t", *q++);
//}
//void swap(int* p, int* q)
//{
//	int temp;
//	temp = *p; *p = *q; *q = temp;
//}