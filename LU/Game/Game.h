#pragma once
#include <iostream>
#include "raylib.h"
#include "Input.h"
#include "Player.h"

class Game
{
public:
	~Game();
	Game();
	void Update();
	void Render();
private:
	// Window settings
	const char* title = { "LEGENDS UNDYING" };
	const int screenWidth = { 800 };
	const int screenHeight = { 800 };
	int fps = { 60 };
	// Variables
	std::unique_ptr<Player> player = std::make_unique<Player>();
};

