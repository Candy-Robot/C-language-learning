//#include<stdio.h>
//#include<stdlib.h>
//void main() {
//	int num, n, a, cnt = 0;//num�����û����������n���������a������������������
//	scanf_s("%d%d", &num, &n);
//	a = rand() % 100;
//	if (num > 0) {
//		while (a != cnt) {
//			printf("%d ", a);
//			cnt++;
//			if (cnt > n) {
//				printf("Game Over\n");
//				break;
//			}
//			if (a > num)
//				printf("Too big\n");
//			else
//				if (a < num)
//					printf("Too small\n");
//				else {
//					if (cnt == 1)
//						printf("Bingo\n");
//					else
//						if (cnt <= 3)
//							printf("Lucky You!\n");
//						else
//							printf("Good Guess!\n");
//					break;
//				}
//			a = rand() % 100;
//		}
//	}
//	else
//		printf("Game Over");
//}