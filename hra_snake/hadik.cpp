#include <iostream>
#include <conio.h>
#include <windows.h>

bool gameOver;

// premenne a konstanty

int flag;

void Setup();
void Draw();
void Input();
void Logic();

int main()
{
    Setup();
    while (!gameOver)
    {
        Draw();
        Input();
        Logic();
        Sleep(10);
    }

    return 0;
}

void Setup()
{
    // premenne a konstanty pre zakladne nastavenia
}

void Draw()
{
    system("cls");

    for ()
    {
        for ()
        {
            // vykreslenie hranic mapy, hadika, ovocia, a vnutra mapy
        }
    }
    std::cout << std::endl;
}

std::cout << std::endl;
// vypisanie skore
}

void Input()
{
    // priradenie WSAD klaves k smerom UP, DOWN, LEFT, RIGHT a klavesy X
    // pre ukoncenie hry

    if (_kbhit())
    {

        switch (_getch())
        {
        case klavesa1:
            // prikaz 1
            break;
        case klavesa2:
            // prikaz 2
            break;
        case klavesa3:
            // prikaz 3
            break;
        case klavesa4:
            // prikaz 4
            break;
        case klavesa5:
            // prikaz 5
            break;
        }
    }
}

void Logic()
{
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X, prev2Y;
    tailX[0] = x;
    tailY[0] = y;

    for (int i = 1; i < nTail; i++)
    { // kod, aby chvost nasledoval hlavu
        prev2X = tailX[i];
        prev2Y = tailY[i];

        tailX[i] = prevX;
        tailY[i] = prevY;

        prevX = prev2X;
        prevY = prev2Y;
    }

    switch (flag)
    {
    case smer1:
        // prikaz 1
        break;
    case smer2:
        // prikaz 2
        break;
    case smer3:
        // prikaz 3
        break;
    case smer4:
        // prikaz 4
        break;
    default:
        break;
    }

    // co sa stane, ked hadik narazi do hranic mapy

    for ()
    {
        // co sa stane, ked hadik narazi do svojho chvosta
    }

    // co sa stane, ked hadik zje ovocie
}
