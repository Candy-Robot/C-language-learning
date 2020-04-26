//#include<stdio.h>
//void main()
//{
//	int j=0,i=0, sum=0, k,a[1000];
//	for (i = 0; i < 1000; i++) {
//		a[i] = 0;
//	}
//	for (k = 6; k <= 1000; k++)
//	{
//		j = 0;
//		sum = 0;
//		for (i = 1; i < k; i++)
//		{
//			if (k % i == 0) {
//				sum = sum + i;
//				a[j] = i;
//				j++;
//			}
//		}
//		if (sum == k) 
//		{
//			 printf("%d its factors are ", k);
//			 for (i = 0; i < j; i++) 
//			 {
//				 printf("%d ", a[i]);
//			 }
//			 printf("\n");
//		}
//	}
//}