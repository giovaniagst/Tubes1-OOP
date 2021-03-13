#include <iostream>
#include "Map.hpp"

using namespace std;

int main()
{
    char C;
    Map M;
    M.InitMap();
    M.TulisMatriks();

    while (true){
        printf("\nMasukkan command : ");
        C = getchar();
        getchar();
        if (C == 'w'){
            M.Up();
        }
        else if (C == 's'){
            M.Down();
        }
        else if (C == 'a'){
            M.Left();
        }
        else if (C == 'd'){
            M.Right();
        }
    }

    return 0;
}
