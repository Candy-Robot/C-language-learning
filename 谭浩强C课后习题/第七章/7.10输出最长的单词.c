//#include<stdio.h>
//#include<string.h>
//void putlongword(char c[], char s[]);
//int main()
//{
//	char s[40],string[20];
//	gets(s);
//	putlongword(s,string);
//	puts(string);
//}
//void putlongword(char c[],char s[])
//{
//	int word = 0, i, j=0, k=0, cnt=0, max=0;
//	for (i = 0; c[i] != '\0'; i++) {
//		if (c[i] >='a'&&c[i]<='z'||c[i]>='A'&&c[i]<='Z') 
//		{
//			if (word == 0) {
//				j = i;
//				word = 1;
//			}
//			cnt++;
//		}	
//		else {
//			word = 0;
//			if (cnt > max) {
//				k = j;
//				max = cnt;
//			}
//			cnt = 0;
//		}
//	}
//	for (i = 0; i < max; i++,k++) {
//		s[i] = c[k];
//	}
//	s[i] = '\0';
//}