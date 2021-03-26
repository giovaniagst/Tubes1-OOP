#include "Map.hpp"
#include <iostream>
#include <cstdio>
#include <fstream>

using namespace std;

Map::Map(){
    this->absis = 6;
    this->ordinat = 8;
    M = new char*[Height];
    for (int i=0; i<Height; i++){
        M[i] = new char[Width];
        for (int j=0; j<Width; j++){
            M[i][j] = 'X';
        }
    }
    //M[Width][Height] = 'X';
}
Map::~Map(){}
void Map::ReadMatriks(FILE * file, char *c){
//ifstream file;
//file.open("Map.txt", "r");
//
//for (int i = 0; i < Height; i++) {
//    for (int j = 0; j < Width; j++) {
//        file >> M[i][j];
//    }
//}
//file.close();
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
void Map::initEngimon(Engimon engimon){
    int posX = engimon.getX();
    int posY = engimon.getY();
    if (engimon.getActive()){
        M[posY][posX] = 'X';
    }
    else {
        if (engimon.getLevel() < minLV){
            if (engimon.getElements()[0] == "Water" && engimon.getElements()[1] == "Ice"){
                M[posY][posX] = 's';
            }
            else if (engimon.getElements()[0] == "Water" && engimon.getElements()[1] == "Ground"){
                M[posY][posX] = 'n';
            }
            else if (engimon.getElements()[0] == "Fire" && engimon.getElements()[1] == "Electric"){
                M[posY][posX] = 'l';
            }
            else if (engimon.getElements()[0] == "Electric"){
                M[posY][posX] = 'e';
            }
            else if (engimon.getElements()[0] == "Ground"){
                M[posY][posX] = 'g';
            }
            else if (engimon.getElements()[0] == "Fire"){
                M[posY][posX] = 'f';
            }
            else if (engimon.getElements()[0] == "Ice"){
                M[posY][posX] = 'i';
            }
            else if (engimon.getElements()[0] == "Water"){
                M[posY][posX] = 'w';
            }
        }
        else if(engimon.getLevel() >= minLV){
            if (engimon.getElements()[0] == "Water" && engimon.getElements()[1] == "Ice"){
                M[posY][posX] = 'S';
            }
            else if (engimon.getElements()[0] == "Water" && engimon.getElements()[1] == "Ground"){
                M[posY][posX] = 'N';
            }
            else if (engimon.getElements()[0] == "Fire" && engimon.getElements()[1] == "Electric"){
                M[posY][posX] = 'L';
            }
            else if (engimon.getElements()[0] == "Electric"){
                M[posY][posX] = 'E';
            }
            else if (engimon.getElements()[0] == "Ground"){
                M[posY][posX] = 'G';
            }
            else if (engimon.getElements()[0] == "Fire"){
                M[posY][posX] = 'F';
            }
            else if (engimon.getElements()[0] == "Ice"){
                M[posY][posX] = 'I';
            }
            else if (engimon.getElements()[0] == "Water"){
                M[posY][posX] = 'W';
            }
        }
    }
}
int Map::randomMove(){
    return rand()%(5-1)+1;
}
int Map::random2ndMove(){
    return rand()%(4-1)+1;
}
void Map::engimonMove(Engimon *engimon){
    int random = randomMove();
    if (random == 1){ //ke kanan
        int posX = engimon->getX()+1;
        int posY = engimon->getY();
        if (isBorderEngimon(posX, posY)){
            engimonMove(engimon);
        }
        else{
            if(isGroundYBorder(posX, posY)){
                engimonMove(engimon);
            }
            else{
                engimon->setX(posX);
                M[posY][posX] = getSymbolEngimon(*engimon);
                if (posX-1 > 6 && posY< 7){
                    M[posY][posX-1] = '~';
                }
                else{
                    M[posY][posX-1] = '-';
                }
            }

        }
    }
    else if (random == 2){ // ke kiri
        int posX = engimon->getX()-1;
        int posY = engimon->getY();
        if (isBorderEngimon(posX, posY)){
            engimonMove(engimon);
        }
        else{
            if (isGroundYBorder(posX+1, posY)){
                engimonMove(engimon);
            }
            else{
                engimon->setX(posX);
                M[posY][posX] = getSymbolEngimon(*engimon);
                if (posX+1 > 6 && posY< 7){
                    M[posY][posX+1] = '~';
                }
                else{
                    M[posY][posX+1] = '-';
                }
            }

        }
    }
    else if (random == 3){ // ke bawah
        int posX = engimon->getX();
        int posY = engimon->getY()+1;
        if (isBorderEngimon(posX, posY)){
            engimonMove(engimon);
        }
        else{
            if(isGroundXBorder(posX, posY-1)){
                engimonMove(engimon);
            }
            else{
                engimon->setY(posY);
                M[posY][posX] = getSymbolEngimon(*engimon);
                if (posX > 6 && posY-1< 7){
                    M[posY-1][posX] = '~';
                }
                else{
                    M[posY-1][posX] = '-';
                }
            }

        }

    }
    else if (random == 4){ // ke atas
        int posX = engimon->getX();
        int posY = engimon->getY()- 1;
        if (isBorderEngimon(posX, posY)){
            engimonMove(engimon);
        }
        else{
            if (isGroundXBorder(posX, posY)){
                engimonMove(engimon);
            }
            else{
                engimon->setY(posY);
                M[posY][posX] = getSymbolEngimon(*engimon);
                if (posX > 6 && posY+1< 7){
                    M[posY+1][posX] = '~';
                }
                else{
                    M[posY+1][posX] = '-';
                }
            }

        }

    }
}
void Map::engimonUp(Engimon *engimon){
    int posX = engimon->getX();
    int posY = engimon->getY()-1;

    cout << engimon->getX()<<engimon->getY() << endl;
    engimon->setY(posY);
    //engimon.setY(posY);
    if (isBorderEngimon(engimon->getX(), engimon->getY()-1)){
        //posY = posY - 1;
    }
    else{

        M[posY][posX] = getSymbolEngimon(*engimon);
        cout << engimon->getX()<< engimon->getY()<< endl;
        if (engimon->getX() > 6 && engimon->getY()+1< 7){
            M[engimon->getY()+1][engimon->getX()] = '~';
        }
        else{
            M[engimon->getY()+1][engimon->getX()] = '-';
        }
    }

}
char Map::getSymbolEngimon(Engimon engimon){
    char ch;
    if (engimon.getLevel() < minLV){
        if (engimon.getElements()[0] == "Water" && engimon.getElements()[1] == "Ice"){
            ch = 's';
        }
        else if (engimon.getElements()[0] == "Water" && engimon.getElements()[1] == "Ground"){
            ch = 'n';
        }
        else if (engimon.getElements()[0] == "Fire" && engimon.getElements()[1] == "Electric"){
            ch = 'l';
        }
        else if (engimon.getElements()[0] == "Electric"){
            ch = 'e';
        }
        else if (engimon.getElements()[0] == "Ground"){
            ch = 'g';
        }
        else if (engimon.getElements()[0] == "Fire"){
            ch = 'f';
        }
        else if (engimon.getElements()[0] == "Ice"){
            ch = 'i';
        }
        else if (engimon.getElements()[0] == "Water"){
            ch = 'w';
        }
    }
    else{
        if (engimon.getElements()[0] == "Water" && engimon.getElements()[1] == "Ice"){
            ch = 'S';
        }
        else if (engimon.getElements()[0] == "Water" && engimon.getElements()[1] == "Ground"){
            ch = 'N';
        }
        else if (engimon.getElements()[0] == "Fire" && engimon.getElements()[1] == "Electric"){
            ch = 'L';
        }
        else if (engimon.getElements()[0] == "Electric"){
            ch = 'E';
        }
        else if (engimon.getElements()[0] == "Ground"){
            ch = 'G';
        }
        else if (engimon.getElements()[0] == "Fire"){
            ch = 'F';
        }
        else if (engimon.getElements()[0] == "Ice"){
            ch = 'I';
        }
        else if (engimon.getElements()[0] == "Water"){
            ch = 'W';
        }
    }
    return ch;
}
bool Map::isBorder(){
    return (Map::absis == 0 || Map::absis == Width - 1 || Map::ordinat == 0 || Map::ordinat == Height - 1);
}
bool Map::isBorderEngimon(int posX, int posY){
    return (posX == 0 || posX == Width-1 || posY == 0 || posY == Height-1);
}
bool Map::isGroundYBorder(int posX, int posY){
    return (posX == 7 && posY <= 6);
}
bool Map::isGroundXBorder(int posX, int posY){
    return (posX >= 7 && posY == 6);
}
bool Map::isNearEngimon(){
    for (int i=this->ordinat-1; i<this->ordinat+1; i++){
        for (int j=this->absis-1; j<this->absis+1; j++){
            if (M[i][j] != '-' || M[i][j] != '~'){
                return true;
            }
        }
    }
    return false;
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
       // TulisMatriks();
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
       // TulisMatriks();
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
       // TulisMatriks();
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
       // TulisMatriks();
    }
}
