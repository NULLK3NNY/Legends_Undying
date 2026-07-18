#pragma once
#include "raylib.h"

class Entity
{
public:
	~Entity();
	void RenderEntity();
	void SetPositionV(Vector2 position);
	void SetPositionF(float x, float y);
	void SetTexture(Texture texture);
	void Move();
protected:
	Vector2 position = { 0, 0 };
	Texture2D texture = {};
};

