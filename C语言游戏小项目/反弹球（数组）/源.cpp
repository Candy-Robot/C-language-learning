//#include<stdio.h>
//#include<stdlib.h>
//#include<Windows.h>
//#include<conio.h>
//
//#define High 15
//#define Width 20
//
//int ball_x, ball_y;
//int ball_vx, ball_vy;
//int canvas[High][Width] = { 0 };
//int position_x, position_y;
//int ridus;
//int left, right;
//
//void getoxy(int x, int y)
//{
//    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
//    COORD pos;
//    pos.X = x;
//    pos.Y = y;
//    SetConsoleCursorPosition(handle, pos);
//}
//void HideCursor() //隐藏光标
//{
//    CONSOLE_CURSOR_INFO cursor_info = { 1,0 };
//    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
//}
//void startup()
//{
//    ball_vx = 1;
//    ball_vy = 1;
//    ball_x = 4;
//    ball_y = Width / 3;
//
//    canvas[ball_x][ball_y] = 1;
//    position_x = High - 1;
//    position_y = Width / 2;
//    ridus = 5;
//    left = position_y - ridus;
//    right = position_y + ridus;
//    for (int i = left ; i <= right; i++)
//        canvas[position_x][i] = 2;
//    for (int i = 0; i < 3; i++)
//        for (int j = 0; j < Width; j++)
//            canvas[i][j] = 3;
//}
//void show()
//{
//    int i, j;
//    getoxy(0, 0);
//    HideCursor();
//    for (i = 0; i < High; i++)
//    {
//        for (j = 0; j < Width; j++)
//        {
//            if (canvas[i][j] == 1)
//                printf("o");
//            else if (canvas[i][j] == 2)
//                printf("*");
//            else if (canvas[i][j] == 3)
//                printf("#");
//            else
//                printf(" ");
//        }
//        printf("|\n");
//    }
//    for (i = 0; i <= Width; i++)
//        printf("-");
//    printf("\n");
//}
//void updataWithoutInput()
//{
//    if (ball_x == High) {
//        printf("你输了\n");
//        system("pause");
//        exit(0);
//    }
//    if (ball_x == position_x - 1 && ball_y >= left && ball_y <= right)
//    {
//        ball_vx = -ball_vx;
//        printf("\a");
//    }
//    canvas[ball_x][ball_y] = 0;
//    ball_x += ball_vx;
//    ball_y += ball_vy;
//    canvas[ball_x][ball_y] = 1;
//    if (ball_y == 0 || ball_y == Width - 1)
//        ball_vy = -ball_vy;
//    if (ball_x == 0)
//        ball_vx = -ball_vx;
//    if (canvas[ball_x - 1][ball_y] == 3)
//    {
//        canvas[ball_x - 1][ball_y] = 0;
//        ball_vx = -ball_vx;
//        printf("\a");
//    }
//
//   Sleep(150);
//}
//void updataWithInput()
//{
//    char input;
//    if (_kbhit())
//    {
//        input = _getch();
//        if (input == 'd' && right < Width - 1) {        //向右移动
//            canvas[position_x][left] = 0;
//            position_y++;
//            left = position_y - ridus;
//            right = position_y + ridus;
//            canvas[position_x][right] = 2;
//        }
//        if (input == 'a' && left > 0) {              //向左移动
//            canvas[position_x][right] = 0;
//            position_y--;
//            left = position_y - ridus;
//            right = position_y + ridus;
//            canvas[position_x][left] = 2;
//        }
//
//    }
//}
//int main()
//{
//    startup();
//    while (true)
//    {
//        show();
//        updataWithoutInput();
//        updataWithInput();
//    }
//}