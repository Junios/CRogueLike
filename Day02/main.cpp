#include "Engine.h"
#include "Player.h"
#include "Map.h"
#include "Util.h"

#define LEFT   75      // 좌측방향키 
#define RIGHT  77      // 우측방향키 
#define UP     72      // 위쪽방향키 
#define DOWN   80      // 아래방향키


int main()
{
	Engine* engine = new Engine();
	engine->Run();

	delete engine;
	return 0;
}