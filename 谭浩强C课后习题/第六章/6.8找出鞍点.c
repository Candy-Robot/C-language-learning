//#include<stdio.h>
//int main()
//{
//	int a[3][3];
//	int i, j, k;
//	int max,xi,xj,flag,cnt=0;
//	for(i=0;i<3;i++)
//		for (j = 0; j < 3; j++) 
//			scanf_s("%d", &a[i][j]);
//	for (i = 0; i < 3; i++) {
//		max = a[i][0];
//		xi = i;
//		xj = 0;
//		flag = 1;
//		for (j = 0; j < 3; j++) {
//			if (a[i][j] > max) {
//				max = a[i][j];
//				xi = i;
//				xj = j;
//			}
//		}
//		for (k = 0; k < 3; k++) {
//			if (a[xi][xj] > a[k][xj]) {
//				flag = 0;
//			}
//		}
//		if (flag)
//			printf("anpiont is a[%d][%d] :%d\n",xi+1,xj+1,a[xi][xj]);
//		else
//			cnt++;
//	}
//	if (cnt == 3)
//		printf("arr dont have anpiont");
//	return 0;
//}