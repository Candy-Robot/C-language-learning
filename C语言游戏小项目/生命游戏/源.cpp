#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<conio.h>
#include<time.h>
#define High 25
#define Width 50

int cells[High][Width];
int speed;

void getoxy(int x, int y)
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
	srand((unsigned)time(NULL));
	int i, j;
	for (i = 0; i < High; i++)
		for (j = 0; j < Width; j++)
			cells[i][j] = rand() % 2;
	speed = 30;
}

void show()
{
	getoxy(0,0);
	HideCursor();
	for (int i = 0; i < High; i++) {
		for (int j = 0; j < Width; j++)
		{
			if (cells[i][j])
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	Sleep(300);
}

void updataWithoutInput()
{
	int i, j,num;
	int NewCells[High][Width];
	for (i = 1; i < High - 1; i++)
	{
		for (j = 1; j < Width - 1; j++)
		{
			num = cells[i - 1][j - 1] + cells[i][j - 1] + cells[i + 1][j - 1] + cells[i - 1][j] + cells[i + 1][j] + cells[i - 1][j + 1] + cells[i][j + 1] + cells[i + 1][j + 1];
			if (num >= 5)
				NewCells[i][j] = 1;
			else if (num == 4)
				NewCells[i][j] = cells[i][j];
			else
				NewCells[i][j] = 0;
		}
	}

	for (i = 1; i < High - 1; i++)
		for (j = 1; j < Width - 1; j++)
			cells[i][j] = NewCells[i][j];
}

void updataWithInput()
{
	int input;
	if (_kbhit)
	{
		input = _getch();
		if (input == '-')
			speed += 50;
		if (input == '=')
			speed -= 50;
		if (input == 'p')
		{
			printf("\nÓÎÏ·ÔÝÍ£\n");
			system("pause");
			system("cls");
		}
		if (input == 'r')
		{
			srand((unsigned)time(NULL));
			int i, j;
			for (i = 0; i < High; i++)
				for (j = 0; j < Width; j++)
					cells[i][j] = rand() % 2;
		}
	}
}


int main()
{
	startup();
	while (true)
	{
		show();
		updataWithoutInput();
		updataWithInput();
	}
}