#include "Game.h"

Game::Game()
{
	// Create window
	InitWindow(screenWidth, screenHeight, title);
	SetTargetFPS(fps);

	std::cout << "Game fully loaded!" << std::endl;
}

Game::~Game()
{
	std::cout << "Game unloaded!" << std::endl;
}

void Game::Update()
{
	player->UpdatePlayer(GetFrameTime());
}

void Game::Render()
{
	player->RenderEntity();
}
