#pragma once
#include "raylib.h"

class Ball {
    private:
        Vector2 pos;
        Vector2 size;
        Color col = RED;
    public:
    void SetPosition(Vector2 pos);
    void SetSize(Vector2 size);
    inline Vector2 GetPos(){ return pos;};
    inline Vector2 GetSize(){ return size;};
    void Draw();
};
