//#include<stdio.h>
//#include<math.h>
//void more(double a, double b, double c);
//void equal(double a, double b, double c);
//void less(double a, double b, double c);
//int main()
//{
//	double a, b, c, t;
//	printf("ax2+bx+c enter abc:\n");
//	scanf_s("%lf%lf%lf", &a, &b, &c);
//	t = b * b - 4 * a * c;
//	if (t > 0) {
//		more(a, b, c);
//	}
//	else
//		if (t == 0) {
//			equal(a, b, c);
//		}
//		else {
//			less(a, b, c);
//		}
//	return 0;
//}
//void more(double a, double b, double c)
//{
//	double t = b * b - 4 * a * c;
//	double one, two;
//	one = (-b + sqrt(t)) / (2 * a);
//	two = (-b - sqrt(t)) / (2 * a);
//	printf("有两个不相等的根:x1=%.1f x2=%.1f\n", one, two);
//}
//void equal(double a, double b, double c)
//{
//	double one;
//	one = -b / (2 * a);
//	printf("有两个相等的根:x1=x2=%.1f\n", one);
//}
//void less(double a, double b, double c) 
//{
//	double m, n;//(m=)-b/2a+(n=)sqrt(4ac-b*b)
//	double t= 4 * a * c-b*b;
//	n = sqrt(t);
//	m = -b / (2 * a);
//	printf("有两个共轭复根：\n");
//	printf("x1 = %.1f + %.1f * i\n", m, n);
//	printf("x2 = %.1f - %.1f * i\n", m, n);
//}