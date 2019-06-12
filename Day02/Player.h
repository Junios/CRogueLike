#pragma once
class Player
{
public:
	Player();
	~Player();

	const static int LEFT = 75;      // 좌측방향키 
	const static int RIGHT = 77;      // 우측방향키 
	const static int UP = 72;      // 위쪽방향키 
	const static int DOWN = 80;      // 아래방향키

	int X;
	int Y;

	void Move(int KeyCode);

	void Tick(int KeyCode);

	void Draw();
};

