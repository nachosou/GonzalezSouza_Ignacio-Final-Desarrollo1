#pragma once
#include "Raylib/include/raylib.h"

struct Player
{
	Rectangle rect;
	Vector2 pos;
	Vector2 rotationOrigin;
	float speed;
	float dir;
	float rotation;
	float rotationSpeed;
	float gravity;
	int points;
	bool isAlive;
};

void InitPlayer(Player& player);

void MovePlayer(Player& player);

void UpdatePlayer(Player& player);

void DrawPlayer(Player player);