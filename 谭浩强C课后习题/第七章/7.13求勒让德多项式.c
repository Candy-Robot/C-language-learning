//#include<stdio.h>
//double Legendre(double n, double x);
//int main()
//{
//	double y, n, x;
//	printf("enter n,x:\n");
//	scanf_s("%lf%lf", &n,&x);
//	y=Legendre(n,x);
//	printf("%f", y);
//	return 0;
//}
//double Legendre(double n,double x)
//{
//	double t;
//	if (n == 0)
//		t = 1;
//	else
//		if (n == 1)
//			t = x;
//		else
//			t = ((2 * n - 1) * x - Legendre(n - 1, x) - (n - 1) * Legendre(n - 2, x)) / n;
//	return t;
//}