#include<stdio.h>
void main() {
	double x, y, d, h;//x,yΪ����ֵ,dΪ����Ŀ���ľ���ƽ��,hΪ�����ĸ߶ȡ�
	//�ڷ�Χ�ڵĻ��߶���10���ڷ�Χ�ڵĻ��߶�Ϊ0
	printf("����x,y������ֵ\n");
	scanf_s("%lf%lf", &x, &y);//��ȡxy��ֵ
	if (x < 0)//��xy��ֵ��Ϊ������
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
	printf("�����ĸ߶�Ϊ%.1lf", h);
}