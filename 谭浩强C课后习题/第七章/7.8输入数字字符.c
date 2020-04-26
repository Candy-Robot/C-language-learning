////输入4个数字输出字符。//只能4位数。
//#include<stdio.h>
//void putout(int a);
//int main()
//{
//	int a;
//	scanf_s("%d", &a);
//	putout(a);
//	return 0;
//}
//void putout(int a)
//{
//	int i,t,num[4];
//	char c='0';
//	t = a;
//	for (i = 0; i < 4; i++)
//		num[i] = 0;
//	i = 0;
//	while (t != 0) {
//		num[3 - i] = t % 10;
//		t = t / 10;
//		i++;
//	}
//	for (i = 0; i < 4; i++) {
//		switch (num[i])
//		{
//		case 1:c = '1'; break;
//		case 2:c = '2'; break;
//		case 3:c = '3'; break;
//		case 4:c = '4'; break;
//		case 5:c = '5'; break;
//		case 6:c = '6'; break;
//		case 7:c = '7'; break;
//		case 8:c = '8'; break;
//		case 9:c = '9'; break;
//		case 0:c = '0'; 
//		}
//		printf("%c",c);
//		if (i != 3) {
//			printf(" ");
//		}
//	}
//}