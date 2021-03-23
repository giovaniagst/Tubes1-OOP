#include <iostream>
#include "./Map/Map.hpp"
#include <stdlib.h>
#include "./Player/Player.hpp"
using namespace std;

int main()
{
    system ("clear");
    char C;
    Map M;
    M.InitMap();    
    string nama;
    string command;
    cout << "Selamat Datang di Game" << endl;
    cout << "Masukkan nama anda :" << endl;
    cin >> nama;
    cout << "halo " << nama << "!!" << endl;
    Player P(nama);
    // cout << "press any key to countinue!!";

    while (true){
        
        system ("clear");
        M.TulisMatriks();
        // printf("\nMasukkan command : ");
        // C = getchar();
        // getchar();
        // if (C == 'w'){
        //     M.Up();
        // }
        // else if (C == 's'){
        //     M.Down();
        // }
        // else if (C == 'a'){
        //     M.Left();
        // }
        // else if (C == 'd'){
        //     M.Right();
        // }
        cin >> command;
        if ((command == "up") || (command == "down") || (command == "left") || (command == "right")) {
            P.move(&M,command);
        } 
        
    }

    return 0;
}
