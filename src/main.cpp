#include "raylib.h"

int main() {

    const int screenWidth = 800;
    const int screenHeight = 400;

    InitWindow(screenWidth, screenHeight, "RAYLIB");

    Vector2 rectanglePosition = {(float)screenWidth / 2 - 50, (float)screenHeight / 2 - 50};
    Vector2 rectangleSize = {100, 100};

    SetTargetFPS(60);

    while (!WindowShouldClose()) {

        if (IsKeyDown(KEY_W)) rectanglePosition.y -= 2.0f;
        if (IsKeyDown(KEY_S)) rectanglePosition.y += 2.0f;
        if (IsKeyDown(KEY_A)) rectanglePosition.x -= 2.0f;
        if (IsKeyDown(KEY_D)) rectanglePosition.x += 2.0f;

        BeginDrawing();

            ClearBackground(RAYWHITE);
            DrawRectangleV(rectanglePosition, rectangleSize, MAROON);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}