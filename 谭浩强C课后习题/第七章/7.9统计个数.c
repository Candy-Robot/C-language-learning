//#include<stdio.h>
//void count(char a[], int b[4]);
//int main()
//{
//	char c[20];//0Ϊ��ĸ��1Ϊ���֣�2Ϊ�ո�3Ϊ�����ַ�
//	int i, num[4];
//	for (i = 0; i < 4; i++) {
//		num[i] = 0;
//	}
//	gets(c);
//	count(c, num);
//	printf("��ĸ�ĸ���Ϊ%d,���ֵĸ���Ϊ%d���ո�ĸ���Ϊ%d,�����ַ��ĸ���Ϊ%d", num[0], num[1], num[2], num[3]);
//}
//void count(char a[], int b[4])//aΪ��ȡ�ַ���bΪͳ�Ƶĸ���
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