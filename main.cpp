#include <iostream>
#include "maze.h"
#include <windows.h>

using namespace std;

bool gamerunning = true;

maze maze;



int main()
{

     while(gamerunning){
        system("cls");

        cout << "I have become lost in this maze.... I have to find a key escape!" << endl;
        cout << "(Use arrow keys to move)" << endl;

        string items;

        for (int i = 0; i < 21; ++i){
            cout << map[i] << endl;
        }
        for (int i = 0; i < 1; ++i){
            cout << "Backpack: " << backpack << endl;
        }
        for (int i = 0; i < 1; ++i){
            cout << dialog << endl;
        }

        if (GetAsyncKeyState(VK_UP))
            maze.movement(-1,0);
        if (GetAsyncKeyState(VK_DOWN))
            maze.movement(1,0);
        if (GetAsyncKeyState(VK_RIGHT))
            maze.movement(0,1);
        if (GetAsyncKeyState(VK_LEFT))
            maze.movement(0,-1);

     }



    return 0;
}
