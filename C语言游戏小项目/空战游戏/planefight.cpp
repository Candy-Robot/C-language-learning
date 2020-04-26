/*
项目：飞机大战
功能：下落的敌机，可以发射子弹击中敌机
随着分数的增加，会使得敌机速度变快

*/


#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<conio.h>
#include<time.h>

#define High 25
#define Width 50
#define EnemeyNum 2         //敌机的个数
#define E_levef 2

int position_x, position_y;
int canvas[High][Width] = { 0 };            //0为空格，1为飞机，2为子弹，3为敌机
int enemy_x[EnemeyNum], enemy_y[EnemeyNum];
int score;
int BulletWidth;
int EnemyMoveSpeed;             //敌机下落的速度
int EnemyBlood[EnemeyNum];



void getoxy(int x, int y);
void HideCursor();

//数据初始化
void startup()      
{
    srand((unsigned) time(NULL));
    score = 0;
    position_x = High - 1;
    position_y = Width / 2;
    for (int k=0; k < EnemeyNum; k++)
    {
        enemy_x[k] = (rand() % 2 + 1);
        enemy_y[k] = (rand() % (Width-5)) + 2;
        int e_left = enemy_y[k] - 2;
        int e_right = enemy_y[k] + 2;
        if (e_left < 0)
            e_left = 0;
        if (e_right > Width - 1)
            e_right = Width - 1;
        for (int i = e_left; i <= e_right; i++) {
            canvas[enemy_x[k]][i] = 3;
        }
        canvas[enemy_x[k] + 1][enemy_y[k]] = 3;
        canvas[enemy_x[k] - 1][enemy_y[k] + 1] = 3;
        canvas[enemy_x[k] - 1][enemy_y[k] - 1] = 3;
    }
    
    BulletWidth = 0;            //子弹的初始宽度是0
    canvas[position_x][position_y] = 1;     
    EnemyMoveSpeed = 20;
    //敌机血量初始值为1
    for (int i = 0; i < EnemeyNum; i++) {
        EnemyBlood[i] = E_levef;
    }
}
//显示画面
void show()
{
    int i, j;
    getoxy(0, 0);
    HideCursor();

    for (i = 0; i < High; i++)
    {
        for (j = 0; j < Width; j++)
        {
            if (canvas[i][j] == 1)      //1为自己的飞机
                printf("*");
            else if (canvas[i][j] == 2)     //2表示子弹
                printf("$");
            else if (canvas[i][j] == 3) //3为敌机
                printf("@");
            else
                printf(" ");
        }
        printf("|\n");
    }
    for (i = 0; i <= Width; i++)
        printf("-");
    printf("\n你的积分:%3d\n", score);
    Sleep(20);
}
//与用户无关的更新
void updataWithoutInput()
{

    int i, j, k,a;
    for (i = 0; i < High; i++) {
        for (j = 0; j < Width; j++) {
            if (canvas[i][j] == 2) { 
                canvas[i][j] = 0;
                for (k = 0; k < EnemeyNum; k++) {
                    if (i == enemy_x[k] && (j >= enemy_y[k] - 2)&&(j <= enemy_y[k] + 2))     //子弹击中了敌机
                    {
                        EnemyBlood[k]--;
                        if (!EnemyBlood[k]) {
                            //让敌机消失
                            for (int temp = enemy_y[k] - 2; temp <= enemy_y[k] + 2; temp++) {
                                canvas[enemy_x[k]][temp] = 0;
                            }
                            canvas[enemy_x[k] + 1][enemy_y[k]] = 0;
                            canvas[enemy_x[k] - 1][enemy_y[k] - 1] = 0;
                            canvas[enemy_x[k] - 1][enemy_y[k] + 1] = 0;
                            EnemyBlood[k] = E_levef;
                            score++;            //分数增加
                            if (score % 5 == 0 && score > 5)
                                EnemyMoveSpeed--;
                            if (score % 5 == 0)
                                BulletWidth++;
                            //如果短时间内击中敌机的话会让之后的两架敌机在同一个地方刷新   
                            enemy_x[k] = rand() % 2;
                            enemy_y[k] = rand() % (Width - 1);
                            canvas[enemy_x[k]][enemy_y[k]] = 3;
                            canvas[i][j] = 0;
                        }
                    }
                }
                canvas[i][j];
                if (i != 0)
                    canvas[i - 1][j] = 2;
            }
        }
    }
    //控制子弹下路的速度，通过循环的方法。
    static int spe = 0;
    if (spe < EnemyMoveSpeed)
        spe++;
    for (a = 0; a < EnemeyNum; a++) {
        if (enemy_x[a] == position_x && enemy_y[a] == position_y)   //敌机撞到我机
        {
            printf("你输啦！！哈哈\n");
            Sleep(3000);
            system("pause");
            exit(0);
        }
        if (enemy_x[a] >= High)                                     //敌机飞出屏幕
        {
            srand((unsigned)time(NULL));    
            //如果用时间进行重新随机的话会导致如果同一时间击落太多，飞机会刷新在同一个地方

            canvas[enemy_x[a]][enemy_y[a]] = 0;
            enemy_x[a] = rand() % 2;
            enemy_y[a] = rand() % (Width-1);
            canvas[enemy_x[a]][enemy_y[a]] = 3;
            score--;
        }

        //循环时间到，敌机下落
        if (spe >= EnemyMoveSpeed)
        {
            for (k = 0; k < EnemeyNum; k++) {
                int e_left = enemy_y[k] - 2;
                int e_right = enemy_y[k] + 2;
                if (e_left < 0)
                    e_left = 0;
                if (e_right > Width - 1)
                    e_right = Width - 1;
                for (int i = e_left; i <= e_right; i++) {
                    canvas[enemy_x[k]][i] = 0;
                }
                canvas[enemy_x[k] + 1][enemy_y[k]] = 0;
                canvas[enemy_x[k] - 1][enemy_y[k] + 1] = 0;
                canvas[enemy_x[k] - 1][enemy_y[k] - 1] = 0;
                canvas[enemy_x[k]][enemy_y[k]] = 0;
                enemy_x[k]++;
                for (int i = e_left; i <= e_right; i++) {
                    canvas[enemy_x[k]][i] = 3;
                }
                canvas[enemy_x[k] + 1][enemy_y[k]] = 3;
                canvas[enemy_x[k] - 1][enemy_y[k] + 1] = 3;
                canvas[enemy_x[k] - 1][enemy_y[k] - 1] = 3;
                spe = 0;
            }
        }
    }

}
//与用户有关的更新
void updataWithInput()
{
    int input;
    if (_kbhit())
    {
        input = _getch();
        if (input == 'a' && position_y > 0) {           //向左移动
            canvas[position_x][position_y] = 0;
            position_y--;
            canvas[position_x][position_y] = 1;
        }
        if (input == 'd' && position_y < Width - 1) {    //向右移动
            canvas[position_x][position_y] = 0;
            position_y++;
            canvas[position_x][position_y] = 1;
        }
        if (input == 'w' && position_x > (High / 2)) {  //向上移动
            canvas[position_x][position_y] = 0;
            position_x--;
            canvas[position_x][position_y] = 1;
        }
        if (input == 's' && position_x < High - 1) {  //向下移动
            canvas[position_x][position_y] = 0;
            position_x++;
            canvas[position_x][position_y] = 1;
        }
        //发射子弹
        if (input == ' ') {
            //调整子弹的宽度
            int left = position_y - BulletWidth;
            int right = position_y + BulletWidth;
            if (left < 0)
                left = 0;
            if (right > Width - 1)
                right = Width - 1;
            for (int i = left; i <= right; i++) {
                canvas[position_x - 1][i] = 2;
            }
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







//将光标移动到(x,y)的位置
void getoxy(int x, int y)
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos;
    pos.X = x;
    pos.Y = y;
    SetConsoleCursorPosition(handle, pos);
}
//隐藏光标
void HideCursor()
{
    CONSOLE_CURSOR_INFO cursor_info = { 1,0 };
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
}