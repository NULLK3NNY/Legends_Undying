#include "Player.h"

void Player::UpdatePlayer(float dt)
{
	// Player movement
	if (IsKeyDown(Input::UP))
	{
		position.y -= speed * dt;
	}
	if (IsKeyDown(Input::DOWN))
	{
		position.y += speed * dt;
	}
	if (IsKeyDown(Input::LEFT))
	{
		position.x -= speed * dt;
	}
	if (IsKeyDown(Input::RIGHT))
	{
		position.x += speed * dt;
	}
}
