#include "Game.h"

int main(void)
{
	std::unique_ptr<Game> game = std::make_unique<Game>();
    while (!WindowShouldClose()) 
    {
		game->Update();
        BeginDrawing();
        ClearBackground(BLACK);
		game->Render();
        EndDrawing();
    }
    CloseWindow();
    return 0;
}