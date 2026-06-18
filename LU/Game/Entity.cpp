#include "Entity.h"

Entity::~Entity()
{
	UnloadTexture(texture);
}

void Entity::RenderEntity()
{
	if (texture.id != 0)
	{
		DrawTexture(texture, position.x, position.y, WHITE);
	}
	else
	{
		DrawRectangle(position.x, position.y, 32, 32, WHITE);
	}
}

void Entity::SetPositionV(Vector2 position)
{
	this->position = position;
}

void Entity::SetPositionF(float x, float y)
{
	this->position.x = x;
	this->position.y = y;
}

void Entity::SetTexture(Texture texture)
{
	this->texture = texture;
}
