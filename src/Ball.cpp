#include "Ball.h"

    void Ball::SetPosition(Vector2 pos){
        this->pos.x = pos.x;
        this->pos.y = pos.y;
    }
    void Ball::SetSize(Vector2 size){
        this->size.x = size.x;
        this->size.y = size.y;
    }
    void Ball::Draw(){
        DrawCircle(pos.x, pos.y, size.x * 0.5f, col);
    }