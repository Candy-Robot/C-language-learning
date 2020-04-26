#include<stdio.h>
void main() {
	double x, y, d, h;//x,y为坐标值,d为点与目标点的距离平方,h为建筑的高度。
	//在范围内的话高度是10不在范围内的话高度为0
	printf("输入x,y的坐标值\n");
	scanf_s("%lf%lf", &x, &y);//读取xy的值
	if (x < 0)//把xy的值变为正整数
		x = -x;
	if (y < 0)
		y = -y;
	d = (x - 2) * (x - 2) + (y - 2) * (y - 2);
	if (d > 1) {
		h = 0;
	}
	else {
		h = 10;
	}
	printf("建筑的高度为%.1lf", h);
}