#include "entrypoint.h"
#include "raylib.h"

const int screenWidth = 500;
const int screenHeight = 500;

const float speed = 100.0f;

struct ball
{
    float x = 0.0f;
    float y = 0.0f;
};


void raylib_start(void){
    InitWindow(screenHeight,screenWidth,"sfuihsifgu");

    SetTargetFPS(60); 
    ball Ball;
    while(!WindowShouldClose())
    {
        float dt = GetFrameTime();
        //Start Drawing
        BeginDrawing();

        //Clear background at each start.
        ClearBackground(RAYWHITE);
        
        //Close window
        if(IsKeyDown(KEY_ESCAPE))
        {
            break;
        }

        //Move x axis
        if(IsKeyDown(KEY_D))
        {
            Ball.x += speed * dt;
        }
        //Move y axis
        if(IsKeyDown(KEY_S))
        {
            Ball.y += speed * dt;
        }
        DrawCircle(Ball.x,Ball.y,10,RED);
        EndDrawing();
    }
    

    CloseWindow();

}