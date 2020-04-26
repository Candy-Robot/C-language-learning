#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<conio.h>
#include<time.h>

#define High 15
#define Width 20

int gold_x, gold_y;
int canvas[High][Width] = { 0 };
int position_x, position_y;
int ridus;
int left, right;
int score;

void getoxy(int x, int y)
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos;
    pos.X = x;
    pos.Y = y;
    SetConsoleCursorPosition(handle, pos);
}
void HideCursor() //隐藏光标
{
    CONSOLE_CURSOR_INFO cursor_info = { 1,0 };
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
}
void startup()
{
    srand((unsigned)time(NULL));
    gold_x = 0;
    gold_y = rand() % (Width - 1);
    canvas[gold_x][gold_y] = 1;         //初始化金币位置

    position_x = High - 1;
    position_y = Width / 2;
    ridus = 5;
    left = position_y - ridus;
    right = position_y + ridus;
    for (int i = left; i <= right; i++)
        canvas[position_x][i] = 2;
}
void show()
{
    int i, j;
    getoxy(0, 0);
    HideCursor();
    for (i = 0; i < High; i++)
    {
        for (j = 0; j < Width; j++)
        {
            if (canvas[i][j] == 1)
                printf("$");
            else if (canvas[i][j] == 2)
                printf("*");
            else
                printf(" ");
        }
        printf("|\n");
    }
    for (i = 0; i <= Width; i++)
        printf("-");
    printf("\n");
    printf("你的分数是：%d\n", score);
}
void updataWithoutInput()
{
    canvas[gold_x][gold_y] = 0;
    gold_x++;
    canvas[gold_x][gold_y] = 1;
    if (gold_x == High) {
        printf("你输了\n");
        system("pause");
        exit(0);
    }

    if (gold_x == position_x - 1 && gold_y >= left && gold_y <= right)
    {
        canvas[gold_x][gold_y] = 0;
        score++;
        srand((unsigned)time(NULL));
        gold_x = 0;
        gold_y = rand() % (Width - 1);
        canvas[gold_x][gold_y] = 1;
        printf("\a");
    }
    Sleep(300);

}
void updataWithInput()
{
    char input;
    if (_kbhit())
    {
        input = _getch();
        if (input == 'd' && right < Width - 1) {        //向右移动
            canvas[position_x][left] = 0;
            position_y++;
            left = position_y - ridus;
            right = position_y + ridus;
            canvas[position_x][right] = 2;
        }
        if (input == 'a' && left > 0) {              //向左移动
            canvas[position_x][right] = 0;
            position_y--;
            left = position_y - ridus;
            right = position_y + ridus;
            canvas[position_x][left] = 2;
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