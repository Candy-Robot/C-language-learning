//#include<stdio.h>
//void count(char a[], int b[4]);
//int main()
//{
//	char c[20];//0为字母，1为数字，2为空格，3为其他字符
//	int i, num[4];
//	for (i = 0; i < 4; i++) {
//		num[i] = 0;
//	}
//	gets(c);
//	count(c, num);
//	printf("字母的个数为%d,数字的个数为%d，空格的个数为%d,其他字符的个数为%d", num[0], num[1], num[2], num[3]);
//}
//void count(char a[], int b[4])//a为读取字符，b为统计的个数
//{
//	int i;
//	for (i = 0; a[i] != '\0'; i++) {
//		if (a[i] >= 'a' && a[i] <= 'z' || a[i] >= 'A' && a[i] <= 'Z')
//			b[0]++;
//		else
//			if (a[i] >= '0' && a[i] <= '9')
//				b[1]++;
//			else
//				if (a[i] == ' ')
//					b[2]++;
//				else
//					b[3]++;
//	}
//}