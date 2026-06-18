#include "Game.h"

Game::~Game()
{
	// Unload things

	std::cout << "Game unloaded!" << std::endl;
}

Game::Game()
{
	// Init things
	
	// Create window
	InitWindow(screenWidth, screenHeight, title);
	SetTargetFPS(fps);

	std::cout << "Game fully loaded!" << std::endl;
}

void Game::Update()
{
	player->UpdatePlayer(GetFrameTime());
}

void Game::Render()
{
	player->RenderEntity();
}
