#include <iostream>
#include <SDL2/SDL.h>
#include <vector>
#include <cmath>

// Structure to represent a 3D point
struct Point3D {
    float x, y, z;
};

// Structure to represent a 3D triangle
struct Triangle {
    Point3D p[3];
};

// Function to draw a triangle
void drawTriangle(SDL_Renderer* renderer, const Triangle& tri) {
    SDL_RenderDrawLine(renderer, tri.p[0].x, tri.p[0].y, tri.p[1].x, tri.p[1].y);
    SDL_RenderDrawLine(renderer, tri.p[1].x, tri.p[1].y, tri.p[2].x, tri.p[2].y);
    SDL_RenderDrawLine(renderer, tri.p[2].x, tri.p[2].y, tri.p[0].x, tri.p[0].y);
}

int main(int argc, char* argv[]) {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cerr << "SDL could not initialize! SDL_Error: " << SDL_GetError() << std::endl;
        return 1;
    }

    SDL_Window* window = SDL_CreateWindow("Simple Cube", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, SDL_WINDOW_SHOWN);
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255); // White background
    SDL_RenderClear(renderer);

    // Define the vertices of a cube
    std::vector<Point3D> vertices = {
        {-50, -50, -50}, {50, -50, -50}, {50, 50, -50}, {-50, 50, -50},
        {-50, -50, 50}, {50, -50, 50}, {50, 50, 50}, {-50, 50, 50}
    };

    // Define the triangles that make up the cube
    std::vector<Triangle> triangles = {
        {vertices[0], vertices[1], vertices[2]}, {vertices[2], vertices[3], vertices[0]},
        {vertices[4], vertices[5], vertices[6]}, {vertices[6], vertices[7], vertices[4]},
        {vertices[0], vertices[4], vertices[7]}, {vertices[7], vertices[3], vertices[0]},
        {vertices[1], vertices[5], vertices[6]}, {vertices[6], vertices[2], vertices[1]},
        {vertices[0], vertices[1], vertices[5]}, {vertices[5], vertices[4], vertices[0]},
        {vertices[3], vertices[2], vertices[6]}, {vertices[6], vertices[7], vertices[3]}
    };

    // Project 3D points to 2D screen coordinates
    for (Triangle& tri : triangles) {
        for (Point3D& p : tri.p) {
            p.x += 320; // Center the cube
            p.y += 240;
        }
        drawTriangle(renderer, tri);
    }

    SDL_RenderPresent(renderer);

    // Event Loop
    SDL_Event e;
    bool quit = false;
    while (!quit) {
        while (SDL_PollEvent(&e) != 0) {
            if (e.type == SDL_QUIT) {
                quit = true;
            }
        }
    }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}