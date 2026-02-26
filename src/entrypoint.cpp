#include "entrypoint.h"

#include "Paddle.h"
#include "Ball.h"

#define W 800
#define H 600
const Vector2 player_dim = {100,25};
const Vector2 ball_dim = {25,25};

void raylib_start(void){
//---------------Player---------------
    Paddle player;
    player.SetPosition(CLITERAL(Vector2){W * 0.5f - player_dim.x * 0.5f, H - player_dim.y * 2});
    player.SetSize(player_dim);
//---------------Ball---------------
     Ball ball;
     ball.SetPosition({(W * 0.5f - player_dim.x * 0.5f) + 50, H - player_dim.y - 25 * 2});
     ball.SetSize(ball_dim);


    InitWindow(W,H,"Breakout");
    SetTargetFPS(60);

    while(!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(BLACK);

        player.Draw();
        ball.Draw();
        player.Move();


        EndDrawing();
    }
    CloseWindow();
}