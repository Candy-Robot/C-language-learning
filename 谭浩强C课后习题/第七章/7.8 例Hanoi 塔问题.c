//#include<stdio.h>
//void hanoi(int n, char A, char B, char C);
//void move(char one, char two);
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	printf("the step to move %d diskes\n", n);
//	hanoi(n, 'A', 'B', 'C');
//	return 0;
//}
//void hanoi(int n, char A, char B, char C)//A�Ƶ�C��BΪ������
//{
//	if (n != 1) {
//		hanoi(n - 1, A, C, B);
//		move(A, C);
//		hanoi(n - 1, B, A, C);
//	}
//	else
//		move(A, C);
//	return;
//}
//void move(char one, char two)
//{
//	printf("%c ����> %c\n", one, two);
//}