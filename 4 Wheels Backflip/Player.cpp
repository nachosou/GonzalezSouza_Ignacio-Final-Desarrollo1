#include "Player.h"

void InitPlayer(Player& player)
{
	player.isAlive = true;
	player.points = 0;
	player.speed = 100.0f;
	player.pos.x = 15.0f;
	player.pos.y = 300.0f;
	player.rect.x = player.pos.x; 
	player.rect.y = player.pos.y; 
	player.rect.width = 50;
	player.rect.height = 20;
	player.rotationOrigin = { player.rect.width / 2, player.rect.height / 2 };
	player.rotation = 0.0f;
	player.rotationSpeed = 150.0f;
}

void MovePlayer(Player& player)
{
	if (IsKeyDown(KEY_W))
	{
		player.rect.x += player.speed * GetFrameTime();
	}

	if (IsKeyDown(KEY_D))
	{
		player.rotation += player.rotationSpeed * GetFrameTime();
	}
	else if (IsKeyDown(KEY_A))
	{
		player.rotation -= player.rotationSpeed * GetFrameTime();
	}
}

void UpdatePlayer(Player& player)
{
	MovePlayer(player);
}

void DrawPlayer(Player player)
{
	DrawRectanglePro(player.rect, player.rotationOrigin, player.rotation, RED);
}