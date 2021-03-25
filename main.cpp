#include <iostream>
// #include "./Map/Map.hpp"
#include <stdlib.h>
// #include "./Player/Player.hpp"
#include "./Engimon/Species.hpp"

using namespace std;

int main()
{
    system ("clear");
    // char C;
    // Map M;
    // M.InitMap();    
    string nama;
    string command;
    cout << "Selamat Datang di Game" << endl;
    cout << "Masukkan nama anda :" << endl;
    cin >> nama;
    cout << "halo " << nama << "!!" << endl;
    // Player P(nama);
    // cout << "press any key to countinue!!";
    string* parentname = new string[2];
    parentname[0] = "yeay";
    parentname[1] = "oke";
    string* parentspecies = new string[2];
    parentspecies[0] = "Charizard";
    parentspecies[1] = "Wooper";
    Wooper W("nama", parentname, parentspecies, 1);
    string* elemen = W.getElements();
    cout << elemen[0] << endl;
    cout << elemen[1] << endl;
    // while (true){
        
    //     system ("clear");
    //     M.TulisMatriks();
    //     // printf("\nMasukkan command : ");
    //     // C = getchar();
    //     // getchar();
    //     // if (C == 'w'){
    //     //     M.Up();
    //     // }
    //     // else if (C == 's'){
    //     //     M.Down();
    //     // }
    //     // else if (C == 'a'){
    //     //     M.Left();
    //     // }
    //     // else if (C == 'd'){
    //     //     M.Right();
    //     // }
    //     // cin >> command;
    //     // if ((command == "up") || (command == "down") || (command == "left") || (command == "right")) {
    //     //     P.move(&M,command);
    //     // } 
        
    // }

    return 0;
}
