//#include<stdio.h>
//void reverse(char s[]);
//int main()
//{
//	char s[20];
//	gets(s);
//	reverse(s);
//	puts(s);
//}
//void reverse(char s[])
//{
//	char* p = s,t;
//	int cnt = 0,i;
//	while (*p != '\0') {
//		p++;
//		cnt++;
//	}
//	int begin = 0, end = cnt - 1;
//	while (begin < end) {
//		t = s[begin];
//		s[begin] = s[end];
//		s[end] = t;
//		begin++;
//		end--;
//	}
//	//for (i = 0; (i+1) <= cnt / 2; i++) {
//	//	t = s[cnt - i-1];
//	//	s[cnt - i - 1] = s[i];
//	//	s[i] = t;
//	//}
//}