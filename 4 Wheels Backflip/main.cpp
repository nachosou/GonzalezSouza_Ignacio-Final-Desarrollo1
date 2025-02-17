#include <iostream>
#include "Raylib/include/raylib.h"
#include "Player.h"

using namespace std;

int main()
{
	InitWindow(768, 640, "4 Wheel Backflip");

	Player player;

	InitPlayer(player);

	while (!WindowShouldClose())
	{
		BeginDrawing();

		UpdatePlayer(player);

		DrawPlayer(player);

		ClearBackground(RAYWHITE);

		EndDrawing();
	}

	CloseWindow();
}