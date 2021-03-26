#include <iostream>
#include "Map/Map.hpp"
#include "Engimon/Species.hpp"

using namespace std;


bool compareString(string x, string y){
    int res = x.compare(y);
    bool cek = false;
    if (res == 0){
        cek = true;
    }
    return cek;
}
bool isInWater(string* str){
    for (int i=0; i<2; i++){
        if (compareString("Water", str[i]) || compareString("Ice", str[i])){
            return true;
        }
    }
    return false;
}
bool isInGroundWater(string* str){
    if (compareString("Water", str[0]) && compareString("Ground", str[1])){
        return true;
    }
    return false;
}
int randomAllX(){

    return rand()% (13-1)+1;
}
int randomAllY(){

    return rand()% (11-1)+1;
}
int randomWaterX(){

    return rand()% (13-7)+7;
}
int randomWaterY(){

    return rand()% (7-1)+1;
}
int randomGroundKuadran1(){

    return rand()% (4-1)+1;
}
int randomGroundKuadran2(){

    return rand()% (7-4)+4;
}
int randomGroundKuadran3X(){

    return rand()% (7-1)+1;
}
int randomGroundKuadran3Y(){

    return rand()% (11-7)+7;
}
int randomGroundKuadran4X(){

    return rand()% (13-7)+7;
}
int randomGroundKuadran4Y(){

    return rand()% (11-7)+7;
}
void init(Map M){
    string nama = "tes";
    string *nama1 = new string[2];
    string *nama2 = new string[2];
    int numSkill = 3;
    nama1[0] = "bambang";
    nama1[1] = "jono";

    Charizard charizard("tes",nama1, nama2, numSkill, randomGroundKuadran1(), randomGroundKuadran1());
    Glaceon glaceon("tes",nama1, nama2, numSkill, randomWaterX(), randomWaterY());
    Onix onix("tes",nama1, nama2, numSkill, randomGroundKuadran2(), randomGroundKuadran2());
    Pikachu pikachu("tes",nama1, nama2, numSkill, randomGroundKuadran3X(), randomGroundKuadran3Y());
    Squirtle squirtle("tes",nama1, nama2, numSkill, randomWaterX(), randomWaterY());
    Rotom rotom("tes",nama1, nama2, numSkill, randomGroundKuadran4X(), randomGroundKuadran4Y());
    Wooper wooper("tes",nama1, nama2, numSkill, randomAllX(), randomAllY());
    Cloyster cloyster("tes",nama1, nama2, numSkill, randomWaterX(), randomWaterY());

}

int main()
{
<<<<<<< HEAD
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
    Wooper W("nama", parentname, parentspecies, 1, 0, 1);
    string* elemen = W.getElements();
    cout << elemen[0] << endl;
    cout << elemen[1] << endl;
    cout << W.getName() << endl;
    W.printInfo();
    cout << "Test" << endl;
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
=======

//    string nama;
//    string command;
//    cout << "Selamat Datang di Game" << endl;
//    cout << "Masukkan nama anda :" << endl;
//    cin >> nama;
//    cout << "halo " << nama << "!!" << endl;
//    // Player P(nama);
//    // cout << "press any key to countinue!!";
//    string* parentname = new string[2];
//    parentname[0] = "yeay";
//    parentname[1] = "oke";
//    string* parentspecies = new string[2];
//    parentspecies[0] = "Charizard";
//    parentspecies[1] = "Wooper";
//    // while (true){

    Map M;
    M.InitMap();

    string namaEngimon = "tes";
    string *nama1 = new string[2];
    string *nama2 = new string[2];
    int numSkill = 3;
    nama1[0] = "bambang";
    nama1[1] = "jono";
    Charizard *chrzrd = new Charizard("tes",nama1, nama2, numSkill, randomGroundKuadran1(), randomGroundKuadran1());
    Glaceon *glcn = new Glaceon("tes",nama1, nama2, numSkill, randomWaterX(), randomWaterY());
    Onix *onx = new Onix("tes",nama1, nama2, numSkill, randomGroundKuadran2(), randomGroundKuadran2());
    Pikachu *pkch = new Pikachu("tes",nama1, nama2, numSkill, randomGroundKuadran3X(), randomGroundKuadran3Y());
    Squirtle *sqrtl = new Squirtle("tes",nama1, nama2, numSkill, randomWaterX(), randomWaterY());
    Rotom *rtm = new Rotom("tes",nama1, nama2, numSkill, randomGroundKuadran4X(), randomGroundKuadran4Y());
    Wooper *woper = new Wooper("tes",nama1, nama2, numSkill, randomAllX(), randomAllY());
    Cloyster *clystr = new Cloyster("tes",nama1, nama2, numSkill, randomWaterX(), randomWaterY());

    Engimon charizard = Engimon(*chrzrd);
    Engimon glaceon = Engimon(*glcn);
    Engimon onix = Engimon(*onx);
    Engimon pikachu = Engimon(*pkch);
    Engimon squirtle = Engimon(*sqrtl);
    Engimon rotom = Engimon(*rtm);
    Engimon wooper = Engimon(*woper);
    Engimon cloyster = Engimon(*clystr);


    M.initEngimon(charizard);
    M.initEngimon(glaceon);
    M.initEngimon(onix);
    M.initEngimon(pikachu);
    M.initEngimon(squirtle);
    M.initEngimon(rotom);
    M.initEngimon(wooper);
    M.initEngimon(cloyster);

    int turn = 1;
    while (turn>0){
        cout << "============== round " << turn-1 << " =============" << endl;
        M.TulisMatriks();

        char c;
        printf("\nmasukkan command : ");
        c = getchar();
        getchar();

        if ((turn % 3) == 0){
            M.engimonMove(charizard);
            M.engimonMove(glaceon);
            M.engimonMove(onix);
            M.engimonMove(pikachu);
            M.engimonMove(squirtle);
            M.engimonMove(rotom);
            M.engimonMove(wooper);
            M.engimonMove(cloyster);

//            M.engimonUp(charizard);
//            M.engimonUp(glaceon);
//            M.engimonUp(onix);
//            M.engimonUp(pikachu);
//            M.engimonUp(squirtle);
//            M.engimonUp(rotom);
//            M.engimonUp(wooper);
//            M.engimonUp(cloyster);
        }
//        for (int i=0; i<10; i++){
//            cout << M.randomMove() << endl;
//        }
        if (c == 'w'){
            M.Up();
        }
        else if (c == 's'){
            M.Down();
        }
        else if (c == 'a'){
            M.Left();
        }
        else if (c == 'd'){
            M.Right();
        }
        turn++;
    }
>>>>>>> 26ddd8bf10ca090746916459804f5af7705f6d49

    return 0;
}
