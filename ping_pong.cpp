#include<iostream>
#include"raylib.h"
using namespace std;

int main(){

    cout<<"starting the game"<<endl;
    const int screen_width=1200;
    const int screen_height=800;

    InitWindow(screen_width,screen_height,"the pong game!");
    SetTargetFPS(60);
    while(WindowShouldClose()==false){
        BeginDrawing();

        EndDrawing();
    }

    CloseWindow();
    return 0;

}