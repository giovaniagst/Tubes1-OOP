#include "Map.hpp"
#include <iostream>
#include <cstdio>

using namespace std;

Map::Map(){
    this->absis = 5;
    this->ordinat = 4;
    M = new char*[Height];
    for (int i=0; i<Height; i++){
        M[i] = new char[Width];
        for (int j=0; j<Width; j++){
            M[i][j] = 'X';
        }
    }
}
Map::~Map(){}
void Map::ReadMatriks(FILE * file, char *c){
    for (int i=0; i<Height; i++){
        for (int j=0; j<Width; j++){
            *c = (char)fgetc(file);
            M[i][j] = *c;
            *c = (char)fgetc(file); //blank
        }
    }
    *c = (char)fgetc(file); //blank
}
void Map::TulisMatriks(){
    for (int i=0; i<Height; i++){
        for (int j=0; j<Width; j++){
            if (j == Width-1){
                cout << M[i][j];
            }
            else{
                cout << M[i][j] << " ";
            }
        }
        cout << endl;
    }
}
void Map::InitMap(){
    FILE * file = fopen("./Map/Map.txt", "r");
    char c;
    ReadMatriks(file, &c);
    fclose(file);
}
bool Map::isBorder(){
    return (Map::absis == 0 || Map::absis == Width - 1 || Map::ordinat == 0 || Map::ordinat == Height - 1);
}
void Map::Up(){
    this->ordinat = this->ordinat - 1;
    if (isBorder()){
        printf("Kamu menabrak tembok\n");
        this->ordinat = this->ordinat + 1;
    }
    else{
        M[this->ordinat][this->absis] = 'P';
        if (this->absis > 6 && this->ordinat+1 < 7){
            M[this->ordinat+1][this->absis] = '~';
        }
        else{
            M[this->ordinat+1][this->absis] = '-';
        }
        TulisMatriks();
    }
}
void Map::Down(){
    this->ordinat = this->ordinat + 1;
    if (isBorder()){
        printf("Kamu menabrak tembok\n");
        this->ordinat = this->ordinat - 1;
    }
    else{
        M[this->ordinat][this->absis] = 'P';
        if (this->absis > 6 && this->ordinat-1 < 7){
            M[this->ordinat-1][this->absis] = '~';
        }
        else{
            M[this->ordinat-1][this->absis] = '-';
        }
        TulisMatriks();
    }
}
void Map::Left(){
    this->absis = this->absis - 1;
    if (isBorder()){
        printf("Kamu menabrak tembok\n");
        this->absis = this->absis + 1;
    }
    else{
        M[this->ordinat][this->absis] = 'P';
        if (this->absis+1 > 6 && this->ordinat< 7){
            M[this->ordinat][this->absis+1] = '~';
        }
        else{
            M[this->ordinat][this->absis+1] = '-';
        }
        TulisMatriks();
    }
}
void Map::Right(){
    this->absis = this->absis + 1;
    if (isBorder()){
        printf("Kamu menabrak tembok\n");
        this->absis = this->absis - 1;
    }
    else{
        M[this->ordinat][this->absis] = 'P';
        if (this->absis-1 > 6 && this->ordinat< 7){
            M[this->ordinat][this->absis-1] = '~';
        }
        else{
            M[this->ordinat][this->absis-1] = '-';
        }
        TulisMatriks();
    }
}
