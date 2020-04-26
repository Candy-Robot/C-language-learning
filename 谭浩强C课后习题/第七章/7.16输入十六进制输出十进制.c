//#include<stdio.h>
//#include<string.h>
//#include<math.h>
//int convert(char s[]);
//int main()
//{
//	char a[30];
//	gets(a);
//	printf("%d", convert(a));
//}
//int convert(char s[])
//{
//	int i = 0, n,sum = 0, t = 0;
//	n = strlen(s);
//	for (i = n-1; i >= 0; i--) {
//		if (s[i] >= '0' && s[i] <= '9')
//			t = s[i] - '0';
//		else
//			if(s[i]>='A'&&s[i]<='F')
//				t = s[i] - 'A' + 10;
//			else
//				if(s[i] >= 'a' && s[i] <= 'f')
//					t = s[i] - 'a' + 10;
//		printf("%d  ", t);
//		sum = sum + t * pow(16,n-1-i);
//	}
//	return sum;
//}