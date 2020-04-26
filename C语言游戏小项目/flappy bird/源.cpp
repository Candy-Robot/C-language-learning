#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
#include<conio.h>

int high, width;
int bird_x, bird_y;
int barl_y1, barl_xDown1, barl_xTop1;
int barl_y2, barl_xDown2, barl_xTop2;
int score;

void gotoxy(int x, int y)
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(handle, pos);
}
void HideCursor() //Òþ²Ø¹â±ê
{
	CONSOLE_CURSOR_INFO cursor_info = { 1,0 };
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
}

void startup()
{
	high = 15;
	width = 40;
	bird_x = 3;
	bird_y = width / 5;
	barl_xDown1 = high / 3;
	barl_xTop1 = high / 2;
	barl_y1 = width / 2;
	barl_xDown2 = high / 3;
	barl_xTop2 = high / 2;
	barl_y2 = width;
	score = 0;
}

void show()
{
	int i, j;
	gotoxy(0, 0);
	HideCursor();
	for (i = 0; i < high; i++)
	{
		for (j = 0; j < width; j++)
		{
			if (i == bird_x && j == bird_y)
				printf("@");
			else if ((i > barl_xTop1 || i < barl_xDown1) && j == barl_y1)
				printf("#");
			else if ((i > barl_xTop2 || i < barl_xDown2) && j == barl_y2)
				printf("#");
			else
				printf(" ");
		}
		printf("\n");
	}
	printf("ÄãµÄ·ÖÊýÊÇ£º%d", score);
}
void updateWithoutInput()
{
	bird_x++;
	barl_y1--;
	barl_y2--;
	Sleep(150);
	if (bird_y == barl_y1 ) {
		if (bird_x <= barl_xTop1 && bird_x >= barl_xDown1)
			score++;
		else
		{
			printf("\nÄãÊäÀ²£¬¹þ¹þ¹þ¹þ¹þ¹þ\n");
			system("pause");
			exit(0);
		}
	}
	if (bird_y == barl_y2) {
		if (bird_x <= barl_xTop2 && bird_x >= barl_xDown2)
			score++;
		else
		{
			printf("\nÄãÊäÀ²£¬¹þ¹þ¹þ¹þ¹þ¹þ\n");
			system("pause");
			exit(0);
		}
	}
	if (bird_x > high)
	{
		printf("\nÄãÊäÀ²£¬¹þ¹þ¹þ¹þ¹þ¹þ\n");
		system("pause");
		exit(0);
	}
	if (barl_y1 < 0)
	{
		barl_y1 = width;
		int temp1 = rand() % int(high * 0.8);
		int gapSize1 = (rand() % 2) + 1;
		barl_xDown1 = temp1 - gapSize1;
		barl_xTop1 = temp1 + gapSize1;
	}
	if (barl_y2 < 0)
	{
		barl_y2 = width;
		int temp2 = rand() % int(high * 0.8);
		int gapSize2 = (rand() % 2) + 1;
		barl_xDown2 = temp2 - gapSize2;
		barl_xTop2 = temp2 + gapSize2;
	}
}
void updateWithInput()
{
	int input;
	if (_kbhit())
	{
		input = _getch();
		if (input == ' ')
			bird_x -= 2;
	}
}

int main()
{
	startup();
	while (true)
	{
		show();
		updateWithoutInput();
		updateWithInput();
	}
	return 0;
}