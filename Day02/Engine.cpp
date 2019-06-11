#include "Engine.h"
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>


void Engine::Run()
{
	while (bIsRunning)
	{
		int KeyCode = Input();
		Tick(KeyCode);
		Draw();
	}
}

void Engine::Draw()
{
	system("cls");
	//for (int Y = 0; Y < 10; ++Y)
	//{
	//	for (int X = 0; X < 10; ++X)
	//	{
	//		if (X == PlayerX && Y == PlayerY)
	//		{
	//			printf("@ ");
	//		}
	//		else
	//		{
	//			printf("%d ", Map[Y][X]);
	//		}
	//	}
	//	printf("\n");
	//}
}

void Engine::Tick(int KeyCode)
{
	//switch (KeyCode)
	//{
	//case RIGHT:
	//	PlayerX++;
	//	break;
	//case LEFT:
	//	PlayerX--;
	//	break;
	//case UP:
	//	PlayerY--;
	//	break;
	//case DOWN:
	//	PlayerY++;
	//	break;
	//case 'Q':
	//case 'q':
	//	bIsRunning = false;
	//	break;
	//}

	//PlayerX = Clamp(PlayerX, 1, 8);
	//PlayerY = Clamp(PlayerY, 1, 8);
}

int Engine::Input()
{
	int KeyCode = getch();

	return KeyCode;
}
