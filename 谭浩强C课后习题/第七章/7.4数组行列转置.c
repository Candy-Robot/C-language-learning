//#include<stdio.h>
//void cout(int arr[3][3]);
//void exchange(int a[3][3]);
//int main()
//{
//	int a[3][3];
//	int i, j;
//	for (i = 0; i < 3; i++)
//		for (j = 0; j < 3; j++)
//			scanf_s("%d", &a[i][j]);
//	printf("原来的矩阵为：\n");
//	cout(a);
//	exchange(a);
//	printf("现在的矩阵为：\n");
//	cout(a);
//	return 0;
//}
//void cout(int arr[3][3])
//{
//	int i, j,cnt=0;
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 3; j++) {
//			printf("%d", arr[i][j]);
//			cnt++;
//			if (cnt % 3 != 0)
//				printf("\t");
//		}
//		printf("\n");
//	}
//}
//void exchange(int a[3][3])
//{
//	int i, j,t;
//	for (i = 0; i < 3; i++)
//		for (j = 0; j < i; j++) {
//			t = a[i][j];
//			a[i][j] = a[j][i];
//			a[j][i] = t;
//		}
//}