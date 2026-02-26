#include "Paddle.h"

    void Paddle::SetPosition(Vector2 pos){
        this->pos.x = pos.x;
        this->pos.y = pos.y;
    }
    void Paddle::SetSize(Vector2 size){
        this->size.x = size.x;
        this->size.y = size.y;
    }
    void Paddle::Draw(){
        DrawRectangle(pos.x,pos.y,size.x,size.y, col);
    }

    void Paddle::Move(){
        if (IsKeyDown(KEY_D) || IsKeyPressed(KEY_D))
        {
            pos.x += speed;
        }
        if (IsKeyDown(KEY_A) || IsKeyPressed(KEY_A))
        {
            pos.x -= speed;
        }
    }