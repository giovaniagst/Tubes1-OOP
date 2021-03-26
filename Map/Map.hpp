#ifndef Map_HPP
#define Map_HPP
//#ifdef _MSC_VER
//#define _CRT_SECURE_NO_WARNINGS
//#endif

#include "../Engimon/Engimon.hpp"
#include <iostream>
#include <cstdio>

#define Height 12
#define Width 14
#define minLV 10

using namespace std;

class Map{

    private:
        char **M;
        int ordinat;
        int absis;
    public:
        Map();
        ~Map();
        void ReadMatriks(FILE * file, char*c);
        void TulisMatriks();
        void InitMap();
        void initEngimon(Engimon engimon);
        int randomMove();
        int random2ndMove();
        void engimonMove(Engimon);
        char getSymbolEngimon(Engimon engimon);
        bool isBorder();
        bool isBorderEngimon(int x, int y);
        bool isGroundYBorder(int x, int y);
        bool isGroundXBorder(int x, int y);
        bool isNearEngimon();
        void engimonUp(Engimon engimon);
        void Up();
        void Down();
        void Left();
        void Right();

};
#endif // Map_HPP
