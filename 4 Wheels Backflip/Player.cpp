#include "Player.h"

void InitPlayer(Player& player)
{
	player.isAlive = true;
	player.height = 20;
	player.width = 50;
	player.points = 0;
	player.speed = 0.1f;
	player.pos.x = 15.0f;
	player.pos.y = 300.0f;
}

void MovePlayer(Player& player)
{
	if (IsKeyDown(KEY_W))
	{
		player.pos.x += player.speed;
	}
}

void UpdatePlayer(Player& player)
{
	MovePlayer(player);
}

void DrawPlayer(Player player)
{
	DrawRectangle(static_cast<int>(player.pos.x), static_cast<int>(player.pos.y), player.width, player.height, RED);
}