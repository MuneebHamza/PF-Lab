#include <iostream>
#include <windows.h>
using namespace std;

// global arrays and variables
// player bullets
int bulletX[100];
int bulletY[100];
bool isbulletactive[100];
int bulletcount = 0;
string enemydirection = "down";
int score = 0;
int timer = 0;
// player character

char box = 219;
char tank1[6] = {box, box, box, '-', '-', '>'};
char tank2[6] = {'0', ' ', '0', ' ', ' ', ' '};

// enemy character
char enemy1[6] = {' ', ' ', ' ', '-', '-', '-'};
char enemy2[6] = {'<', '=', '=', '(', '-', ')'};
char enemy3[6] = {' ', ' ', ' ', '\\', '@', '/'};
char enemy4[6] = {' ', ' ', ' ', '*', '*', '*'};

// player coordinates
int tankX = 5;
int tankY = 5;

// enemy coordinates
int enemyX = 30;
int enemyY = 10;

// Printing

void printmaze()
{
    cout << "#########################################" << endl;
    cout << "#                                       #" << endl;
    cout << "#                                       #" << endl;
    cout << "#                                       #" << endl;
    cout << "#                                       #" << endl;
    cout << "#                                       #" << endl;
    cout << "#                                       #" << endl;
    cout << "#                                       #" << endl;
    cout << "#                                       #" << endl;
    cout << "#                                       #" << endl;
    cout << "#                                       #" << endl;
    cout << "#                                       #" << endl;
    cout << "#                                       #" << endl;
    cout << "#                                       #" << endl;
    cout << "#                                       #" << endl;
    cout << "#                                       #" << endl;
    cout << "#                                       #" << endl;
    cout << "#########################################" << endl;
}

// supporting function
char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void eraseenemy()
{
    gotoxy(enemyX, enemyY);
    for (int index = 0; index < 6; index++)
    {
        cout << " ";
    }
    gotoxy(enemyX, enemyY + 1);
    for (int index = 0; index < 6; index++)
    {
        cout << " ";
    }
    gotoxy(enemyX, enemyY + 2);
    for (int index = 0; index < 6; index++)
    {
        cout << " ";
    }
    gotoxy(enemyX, enemyY + 3);
    for (int index = 0; index < 6; index++)
    {
        cout << " ";
    }
}

void erasetank()
{
    gotoxy(tankX, tankY);
    for (int index = 0; index < 6; index++)
    {
        cout << " ";
    }
    gotoxy(tankX, tankY + 1);
    for (int index = 0; index < 6; index++)
    {
        cout << " ";
    }
}

void printbullet(int x, int y)
{
    gotoxy(x, y);
    cout << ".";
}

void erasebullet(int x, int y)
{
    gotoxy(x, y);
    cout << " ";
}

void makebulletinactive(int index)
{
    isbulletactive[index] = false;
}

void addscore()
{
    score++;
}


//printing
void printtank()
{
    gotoxy(tankX, tankY);
    for (int index = 0; index < 6; index++)
    {
        cout << tank1[index];
    }
    gotoxy(tankX, tankY + 1);
    for (int index = 0; index < 6; index++)
    {
        cout << tank2[index];
    }
}

void printenemy()
{
    gotoxy(enemyX, enemyY);
    for (int index = 0; index < 6; index++)
    {
        cout << enemy1[index];
    }
    gotoxy(enemyX, enemyY + 1);
    for (int index = 0; index < 6; index++)
    {
        cout << enemy2[index];
    }
    gotoxy(enemyX, enemyY + 2);
    for (int index = 0; index < 6; index++)
    {
        cout << enemy3[index];
    }
    gotoxy(enemyX, enemyY + 3);
    for (int index = 0; index < 6; index++)
    {
        cout << enemy4[index];
    }
}

// character movement
void movetankleft()
{
    char next = getCharAtxy(tankX - 1, tankY);
    if (next == ' ')
    {
        erasetank();
        tankX = tankX - 1;
        printtank();
    }
}

void movetankright()
{
    char next = getCharAtxy(tankX + 6, tankY);
    if (next == ' ')
    {
        erasetank();
        tankX = tankX + 1;
        printtank();
    }
}

void movetankup()
{
    char next = getCharAtxy(tankX, tankY - 1);
    if (next == ' ')
    {
        erasetank();
        tankY = tankY - 1;
        printtank();
    }
}

void movetankdown()
{
    char next = getCharAtxy(tankX, tankY + 2);
    if (next == ' ')
    {
        erasetank();
        tankY = tankY + 1;
        printtank();
    }
}

// enemy movement

void moveenemy()
{
    if (enemydirection == "Up")
    {
        char next = getCharAtxy(enemyX, enemyY - 1);
        if (next == ' ')
        {
            eraseenemy();
            enemyY--;
            printenemy();
        }
        if (next == '#')
        {
            enemydirection = "Down";
        }
    }
    if (enemydirection == "Down")
    {
        char next = getCharAtxy(enemyX, enemyY + 4);
        if (next == ' ')
        {
            eraseenemy();
            enemyY++;
            printenemy();
        }
        if (next == '#')
        {
            enemydirection = "Up";
        }
    }
}

// generate bullet
void generatebullet()
{
    bulletX[bulletcount] = tankX + 7;
    bulletY[bulletcount] = tankY;
    isbulletactive[bulletcount] = true;
    gotoxy(tankX + 7, tankY);
    cout << ".";
    bulletcount++;
}

// move bullet
void movebullet()
{
    for (int x = 0; x < bulletcount; x++)
    {
        if (isbulletactive[x] == true)
        {
            char next = getCharAtxy(bulletX[x] + 1, bulletY[x]);
            if (next != ' ')
            {
                erasebullet(bulletX[x], bulletY[x]);
                makebulletinactive(x);
            }
            else
            {
                erasebullet(bulletX[x], bulletY[x]);
                bulletX[x] = bulletX[x] + 1;
                printbullet(bulletX[x], bulletY[x]);
            }
        }
    }
}

// collision
// with enemy
void bulletcollisionwithenemy()
{
    for (int x = 0; x < bulletcount; x++)
    {
        if (isbulletactive[x] == true)
        {
            if (bulletX[x] + 1 == enemyX && (bulletY[x] == enemyY || bulletY[x] == enemyY + 2 || bulletY[x] == enemyY + 3))
            {
                addscore();
            }
            if (enemyX - 1 == bulletX[x] && enemyY + 1 == bulletY[x])
            {
                addscore();
            }
        }
    }
}

// reward
void printscore()
{
    gotoxy(45, 8);
    cout << "Score: " << score;
}

// main function

main()
{
    system("cls");
    printmaze();
    printtank();
    printenemy();
    while (true)
    {
        printscore();
        if (GetAsyncKeyState(VK_LEFT))
        {
            movetankleft();
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            movetankright();
        }
        if (GetAsyncKeyState(VK_UP))
        {
            movetankup();
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            movetankdown();
        }
        if (GetAsyncKeyState(VK_SPACE))
        {
            generatebullet();
        }
        if (timer == 3)
        {
            moveenemy();
            timer = 0;
        }
        movebullet();
        bulletcollisionwithenemy();
        timer++;
        Sleep(90);
    }
}