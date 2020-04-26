//	//a	b
//	//12	18	12
//	//18	12	6
//	//12	6	0
//	//6	0
//	//9	24	9
//	//24	9	6
//	//9	6	3
//	//6	3	0
//	//3	0
//
//#include<stdio.h>
//int Max(int a, int b);
//int Min(int a, int b);
//int main()
//{
//	int a, b,max=0,min=0;
//	printf("enter two number:");
//	scanf_s("%d%d", &a, &b);
//	max = Max(a, b);
//	min = Min(a, b);
//	printf("max=%d,min=%d", max, min);
//}
//int Max(int a, int b)
//{
//	int t = 0;
//	while (b != 0) {
//		t = a % b;
//		a = b;
//		b = t;
//	}
//	return a;
//}
//int Min(int a, int b)
//{
//	int i,t;
//	t = a > b ? a:b;
//	for (i = 1; i * t % a != 0 || i * t % b != 0; i++);
//	return i * t;
//}