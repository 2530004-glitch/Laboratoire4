#pragma once
#include "raylib.h"
#define speed 10

class Paddle {
    private:
        Vector2 pos;
        Vector2 size;
        Color col = BLUE;
    public:
    void SetPosition(Vector2 pos);
    void SetSize(Vector2 size);
    inline Vector2 GetPos(){ return pos;};
    inline Vector2 GetSize(){ return size;};
    void Draw();
    void Move();
};