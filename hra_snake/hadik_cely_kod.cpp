#include <iostream>
#include <conio.h>
#include <windows.h>

bool gameOver;
const int width = 20;
const int height = 20;
int x, y, fruitX, fruitY, score;
int tailX[100], tailY[100];
int nTail;
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
		Sleep(10); // sleep(10);
	}
	return 0;
}

void Setup()
{
	gameOver = false;
	flag = 0;
	x = width / 2;
	y = height / 2;
	fruitX = rand() % width;
	fruitY = rand() % height;
	score = 0;
}

void Draw()
{
	system("cls");

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (j == 0 || j == width - 1 || i == 0 || i == height - 1)
				std::cout << "#";
			else if (i == y && j == x)
				std::cout << "O";
			else if (i == fruitY && j == fruitX)
				std::cout << "F";
			else
			{
				bool print = false;
				for (int k = 0; k < nTail; k++)
				{
					if (tailX[k] == j && tailY[k] == i)
					{
						std::cout << "o";
						print = true;
					}
				}
				if (!print)
					std::cout << " ";
			}
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;
	std::cout << "Score:" << score << std::endl;
}

void Input()
{
	if (_kbhit())
	{
		switch (_getch())
		{
		case 'a':
			flag = 1;
			break;
		case 'd':
			flag = 2;
			break;
		case 'w':
			flag = 3;
			break;
		case 's':
			flag = 4;
			break;
		case 'x':
			gameOver = true;
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
	{
		prev2X = tailX[i];
		prev2Y = tailY[i];
		tailX[i] = prevX;
		tailY[i] = prevY;
		prevX = prev2X;
		prevY = prev2Y;
	}
	switch (flag)
	{
	case 1:
		x--;
		break;
	case 2:
		x++;
		break;
	case 3:
		y--;
		break;
	case 4:
		y++;
		break;
	default:
		break;
	}

	// ak by hadik po naraze do hranic na druhej strane
	/* if (x >= width) x = 0;
	else if (x < 0) x = width - 1;

	if (y >= height) y = 0;
	else if (y < 0) y = height - 1; */

	if (x < 0 || x > height || y < 0 || y > width)
		gameOver = true;

	for (int i = 0; i < nTail; i++)
		if (tailX[i] == x && tailY[i] == y)
			gameOver = true;

	if (x == fruitX && y == fruitY)
	{
		score += 10;
		fruitX = rand() % width;
		fruitY = rand() % height;
		nTail++;
	}
}