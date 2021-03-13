#ifndef Map_HPP
#define Map_HPP

#include <iostream>
#include <cstdio>

#define Height 12
#define Width 14

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
        bool isBorder();
        void Up();
        void Down();
        void Left();
        void Right();

};
#endif // Map_HPP
