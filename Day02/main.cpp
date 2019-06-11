#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

#define LEFT   75      // ��������Ű 
#define RIGHT  77      // ��������Ű 
#define UP     72      // ���ʹ���Ű 
#define DOWN   80      // �Ʒ�����Ű

bool bIsRunning = true;

int PlayerX = 1;
int PlayerY = 1;

int Map[10][10] = {
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
};

int Input()
{
	int KeyCode = getch();

	return KeyCode;
}

void Tick(int KeyCode)
{

	switch (KeyCode)
	{
	case RIGHT:
		PlayerX++;
		break;
	case LEFT:
		PlayerX--;
		break;
	case UP:
		PlayerY--;
		break;
	case DOWN:
		PlayerY++;
		break;
	case 'Q':
	case 'q':
		bIsRunning = false;
		break;
	}
}

void Draw()
{
	system("cls");
	for (int Y = 0; Y < 10; ++Y)
	{
		for (int X = 0; X < 10; ++X)
		{
			if (X == PlayerX && Y == PlayerY)
			{
				printf("@ ");
			}
			else
			{
				printf("%d ", Map[Y][X]);
			}
		}
		printf("\n");
	}
}


int main()
{
	while (bIsRunning)
	{
		int KeyCode = Input();
		Tick(KeyCode);
		Draw();
	}
}