//#include<stdio.h>
//int main()
//{
//	void Transposition(int(*p)[3]);
//	void putout(int(*p)[3]);
//	int a[][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int i, j, k;
//	putout(a);
//	Transposition(a);
//	putout(a);
//}
//void Transposition(int(* p)[3])
//{
//	int* q,i,j,temp;
//	for(i=0;i<3;i++)
//		for (j = 0; j < i; j++) {
//			temp = *(*(p + i) + j);
//			*(*(p + i) + j) = *(*(p + j) + i);
//			*(*(p + j) + i) = temp;
//		}
//}
//void putout(int(*p)[3])
//{
//	int i, j;
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 3; j++)
//			printf("%d", *(*(p + i) + j));
//		printf("\n");
//	}
//}