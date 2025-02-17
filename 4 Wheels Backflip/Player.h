#pragma once
#include "Raylib/include/raylib.h"

struct Player
{
	Vector2 pos;
	float speed;
	float dir;
	int height;
	int width;
	float gravity;
	int points;
	bool isAlive;
};

void InitPlayer(Player& player);

void MovePlayer(Player& player);

void UpdatePlayer(Player& player);

void DrawPlayer(Player player);