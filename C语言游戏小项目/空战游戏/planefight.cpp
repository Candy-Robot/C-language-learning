/*
��Ŀ���ɻ���ս
���ܣ�����ĵл������Է����ӵ����ел�
���ŷ��������ӣ���ʹ�õл��ٶȱ��

*/


#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<conio.h>
#include<time.h>

#define High 25
#define Width 50
#define EnemeyNum 2         //�л��ĸ���
#define E_levef 2

int position_x, position_y;
int canvas[High][Width] = { 0 };            //0Ϊ�ո�1Ϊ�ɻ���2Ϊ�ӵ���3Ϊ�л�
int enemy_x[EnemeyNum], enemy_y[EnemeyNum];
int score;
int BulletWidth;
int EnemyMoveSpeed;             //�л�������ٶ�
int EnemyBlood[EnemeyNum];



void getoxy(int x, int y);
void HideCursor();

//���ݳ�ʼ��
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
    
    BulletWidth = 0;            //�ӵ��ĳ�ʼ�����0
    canvas[position_x][position_y] = 1;     
    EnemyMoveSpeed = 20;
    //�л�Ѫ����ʼֵΪ1
    for (int i = 0; i < EnemeyNum; i++) {
        EnemyBlood[i] = E_levef;
    }
}
//��ʾ����
void show()
{
    int i, j;
    getoxy(0, 0);
    HideCursor();

    for (i = 0; i < High; i++)
    {
        for (j = 0; j < Width; j++)
        {
            if (canvas[i][j] == 1)      //1Ϊ�Լ��ķɻ�
                printf("*");
            else if (canvas[i][j] == 2)     //2��ʾ�ӵ�
                printf("$");
            else if (canvas[i][j] == 3) //3Ϊ�л�
                printf("@");
            else
                printf(" ");
        }
        printf("|\n");
    }
    for (i = 0; i <= Width; i++)
        printf("-");
    printf("\n��Ļ���:%3d\n", score);
    Sleep(20);
}
//���û��޹صĸ���
void updataWithoutInput()
{

    int i, j, k,a;
    for (i = 0; i < High; i++) {
        for (j = 0; j < Width; j++) {
            if (canvas[i][j] == 2) { 
                canvas[i][j] = 0;
                for (k = 0; k < EnemeyNum; k++) {
                    if (i == enemy_x[k] && (j >= enemy_y[k] - 2)&&(j <= enemy_y[k] + 2))     //�ӵ������˵л�
                    {
                        EnemyBlood[k]--;
                        if (!EnemyBlood[k]) {
                            //�õл���ʧ
                            for (int temp = enemy_y[k] - 2; temp <= enemy_y[k] + 2; temp++) {
                                canvas[enemy_x[k]][temp] = 0;
                            }
                            canvas[enemy_x[k] + 1][enemy_y[k]] = 0;
                            canvas[enemy_x[k] - 1][enemy_y[k] - 1] = 0;
                            canvas[enemy_x[k] - 1][enemy_y[k] + 1] = 0;
                            EnemyBlood[k] = E_levef;
                            score++;            //��������
                            if (score % 5 == 0 && score > 5)
                                EnemyMoveSpeed--;
                            if (score % 5 == 0)
                                BulletWidth++;
                            //�����ʱ���ڻ��ел��Ļ�����֮������ܵл���ͬһ���ط�ˢ��   
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
    //�����ӵ���·���ٶȣ�ͨ��ѭ���ķ�����
    static int spe = 0;
    if (spe < EnemyMoveSpeed)
        spe++;
    for (a = 0; a < EnemeyNum; a++) {
        if (enemy_x[a] == position_x && enemy_y[a] == position_y)   //�л�ײ���һ�
        {
            printf("��������������\n");
            Sleep(3000);
            system("pause");
            exit(0);
        }
        if (enemy_x[a] >= High)                                     //�л��ɳ���Ļ
        {
            srand((unsigned)time(NULL));    
            //�����ʱ�������������Ļ��ᵼ�����ͬһʱ�����̫�࣬�ɻ���ˢ����ͬһ���ط�

            canvas[enemy_x[a]][enemy_y[a]] = 0;
            enemy_x[a] = rand() % 2;
            enemy_y[a] = rand() % (Width-1);
            canvas[enemy_x[a]][enemy_y[a]] = 3;
            score--;
        }

        //ѭ��ʱ�䵽���л�����
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
//���û��йصĸ���
void updataWithInput()
{
    int input;
    if (_kbhit())
    {
        input = _getch();
        if (input == 'a' && position_y > 0) {           //�����ƶ�
            canvas[position_x][position_y] = 0;
            position_y--;
            canvas[position_x][position_y] = 1;
        }
        if (input == 'd' && position_y < Width - 1) {    //�����ƶ�
            canvas[position_x][position_y] = 0;
            position_y++;
            canvas[position_x][position_y] = 1;
        }
        if (input == 'w' && position_x > (High / 2)) {  //�����ƶ�
            canvas[position_x][position_y] = 0;
            position_x--;
            canvas[position_x][position_y] = 1;
        }
        if (input == 's' && position_x < High - 1) {  //�����ƶ�
            canvas[position_x][position_y] = 0;
            position_x++;
            canvas[position_x][position_y] = 1;
        }
        //�����ӵ�
        if (input == ' ') {
            //�����ӵ��Ŀ��
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







//������ƶ���(x,y)��λ��
void getoxy(int x, int y)
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos;
    pos.X = x;
    pos.Y = y;
    SetConsoleCursorPosition(handle, pos);
}
//���ع��
void HideCursor()
{
    CONSOLE_CURSOR_INFO cursor_info = { 1,0 };
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
}