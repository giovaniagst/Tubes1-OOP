#include "Player.hpp"
#include "../Engimon/Engimon.hpp"
#include <iostream>


using namespace std;

Player::Player(){
    this->nama = "default";
    // this->engimonKepemilikan = new Engimon[100];
    this->jumlahEngimonKepemilikan = 0;
}

Player::Player(string nama){
    this->nama = nama;
    // this->engimonKepemilikan = new Engimon[100];
    this->jumlahEngimonKepemilikan = 0;
}

Player::~Player(){
   
}

string Player::getName(){
    return this->nama;
}


array<Engimon,100> Player::getlistEngimon(){
    return this->engimonKepemilikan;
}
int Player::getJumlahEngimon(){
    return this->jumlahEngimonKepemilikan;
}

Engimon Player::getActiveEngimon(){
    return this->activeEngimon;
}

void Player::move(Map* m,string command){
    if (command == "up"){
        (*m).Up();
    }else if (command == "left"){
        (*m).Left();
    }else if ((command == "right")){
        (*m).Right();
    }else{
        (*m).Down();
    }
};

void Player::addEngimon(Engimon e){
  if (this->jumlahEngimonKepemilikan<100){
      this->engimonKepemilikan[jumlahEngimonKepemilikan] = e;
      this->jumlahEngimonKepemilikan++;
      cout << "sukses menambahkan " << e.getName() << "kedalam koleksi" << endl; 
  } else {
      cout << "Koleksi Engimon Penuh" << endl;
  }
};

void Player::printlistEngimon(){
    cout << "List Engimon yang dimiliki yaitu :" << endl;
    Engimon* l = getlistEngimon();
    for (int i =0; i<jumlahEngimonKepemilikan;i++){
        cout << "----------------------------------------------- " << endl;
        cout << i+1 <<". " << l[i].getName() << ":"<< endl;
        cout <<"    Exp        : " <<  l[i].getCumulativeExperience()<< endl;
        cout <<"    level      : " <<  l[i].getLevel()<< endl;
        cout <<"    Elements   : " <<  l[i].getElements()<< endl;
        cout <<"    Parent     : " <<  l[i].getParentName()<< endl;
        cout <<"    Parent Spec: " <<  l[i].getParentSpecies()<< endl;
        cout << "----------------------------------------------- " << endl;
    }
}

void Player::printActiveEngimon(){
    cout << ((getActiveEngimon())).getName() << " aktif"<< endl;
}

void Player::changeActiveEngimon(string engimon){
    Engimon* l = getlistEngimon();
    for (int i =0; i<jumlahEngimonKepemilikan;i++){ 
        if (l[i].getName() == engimon){
            ((this->activeEngimon)).setActive(false);
            l[i].setActive(true);
            ((this->activeEngimon)) = l[i];
        } else {
            cout << "kamu tidak mempunyai Engimon tersebut" << endl;
        }
    }
}
void Player::battle(Engimon lawan){
    cout << "battle telah dimulai "<< endl;
    float myElementAdvantage,enemyElementAdvantage
    Engimon my = this->getActiveEngimon();
    string* myEl = my.getElements();
    string* enemyEl = enemyEl.getElements();
    
    myElementAdvantage = compareElement(myEl,enemyEl);
    enemyElementAdvantage = compareElement(myEl,enemyEl);
    int myPowerLevel, enemyPowerLevel;
    
    myPowerLevel = my.getLevel() * int(myElementAdvantage) + sumSkill(me);
    enemyPowerLevel = lawan.getLevel() * int(enemyElementAdvantage) + sumSkill(lawan);
    cout << "Engimon "<< my.getName() << endl;
    cout << "Power : " << myPowerLevel << endl;
    cout << "VS" << endl;
    cout << "Engimon" << lawan.getName() << endl;
    cout << "Power : " << enemyPowerLevel << endl;
    if (myPowerLevel > enemyPowerLevel) {
        //add engimon
        //dapet skill
        //tambah experience
    }else{
        // remove engimon
    }
}

int sumSkill(Engimon me){
    int mysum = 0;
    for (int i =0; i<my.getNumSkill();i++){
        mysum += me.getSkill(i);
    }
    return mySum ;
}


float compareElementAd(string * myEl,string * enemyEl){
    if (myEl[1] != ""){
        if (enemyEl[1] != ""){
            elementAdvantage = imax(imax(compareElement(myEl[0],enemyEl[0]),compareElement(myEl[0],enemyEl[1]))
            ,imax(compareElement(myEl[1],enemyEl[0]),compareElement(myEl[1],enemyEl[1])));
        }else{
            elementAdvantage = imax(compareElement(myEl[0],enemyEl[0]),compareElement(myEl[1],enemyEl[0]));
        }
    }else{
        if (enemyEl[1] != ""){
            elementAdvantage = imax(compareElement(compareElement(myEl[0],enemyEl[0]),compareElement(myEl[0],enemyEl[1])));
        }else{
            elementAdvantage = compareElement(compareElement(myEl[0],enemyEl[0];
        }
    }
};

float imax(int x, int y){ // dipakai di battle dan breeding
    return x > y ? x : y;
}

string smax(string x, string y){ // dipakai di breeding
    if (compareElement(x,y) > compareElement(y,x)) {
        return x;
    } else if (compareElement(x,y) < compareElement(y,x)) {
        return y;
    } else {
        return "0";
    }
}
float compareElement(string x, string y){
    if (x == "Fire"){
        if (y == "Fire"){
            return 1.0;
        }else if (y == "Water"){
            return 0;
        }else if (y == "Electric"){
            return 1.0;
        }else if (y == "Ground"){
            return 0.5;
        }else {
            return 2.0;
        }
    }else if (x == "Water"){
        if (y == "Fire"){
            return 2.0;
        }else if (y == "Water"){
            return 1.0;
        }else if (y == "Electric"){
            return 0;
        }else if (y == "Ground"){
            return 1;
        }else {
            return 1;
        }
    }else if (x == "Electric"){
        if (y == "Fire"){
            return 1.0;
        }else if (y == "Water"){
            return 2.0;
        }else if (y == "Electric"){
            return 1.0;
        }else if (y == "Ground"){
            return 0;
        }else {
            return 1.5;
        }
    }else if (x == "Ground"){
        if (y == "Fire"){
            return 1.5;
        }else if (y == "Water"){
            return 1.0;
        }else if (y == "Electric"){
            return 2.0;
        }else if (y == "Ground"){
            return 1.0;
        }else {
            return 0;
        }
    }else {
        if (y == "Fire"){
            return 0;
        }else if (y == "Water"){
            return 1;
        }else if (y == "Electric"){
            return 0.5;
        }else if (y == "Ground"){
            return 2.0;
        }else {
            return 1.0;
        }
    }
}

void Player::doBreeding(string Engimon1, string Engimon2){
    Engimon* l = getlistEngimon();
    // cari Engimon1
    int idx1 = -1;
    for (int i = 0; i < jumlahEngimonKepemilikan; i++) {
        if (l[i].getName() == Engimon1 && l[i].getLevel() > 30) {
            idx1 = i;
        }
    }
    if (idx1 == -1) {
        cout << Engimon1 << " tidak ada atau level tidak cukup" << endl;
        return;
    }
    // cari Engimon2
    int idx2 = -1;
    for (int i = 0; i < jumlahEngimonKepemilikan; i++) {
        if (l[i].getName() == Engimon2 && l[i].getLevel() > 30) {
            idx2 = i;
        }
    }
    if (idx2 == -1) {
        cout << Engimon2 << " tidak ada atau level tidak cukup" << endl;
        return;
    }
    // kedua engimon ditemukan dan memenuhi syarat
    l[idx1].setLevel(l[idx1].getLevel() - 30);
    l[idx2].setLevel(l[idx2].getLevel() - 30);
    cout << "Masukkan nama engimon anak: ";
    string namaanak;
    cin >> namaanak;
    // pemberian spesies dan elemen
    if (l[idx1].getElements()[0] == l[idx2].getElements()[0]) { // iya elemennya cuma 1 no bonus
        // construct anak yang spesies dan elemen sama seperti induk 1
        // masukkan ke inventory pemain
    } else {
        string elemenanak = smax(l[idx1].getElements()[0], l[idx2].getElements()[0]);
        if (elemenanak == "0") {
            // construct anak yang spesies dan elemen sama seperti elemenanak
            // masukkan ke inventory pemain
        } else {
            // construct anak yang spesies dan elemen dari kedua parent (kombinasi 2 elemen)
            // masukkan ke inventory pemain
        }
    }

    // pemberian skill
    int countskill = 0;
    int iter1 = l[idx1].getNumSkill();
    int iter2 = l[idx2].getNumSkill()
    while (countskill < 3 && countskill < iter1 + iter2) {
        // salin skill ke suatu list, pilih dari yang bernama sama
        Skill* s = new Skill[iter1 + iter2];
        for (int i = 0; i < iter1; i++) {
            s[i] = l[idx1].getSkill(i);
        }
        for (int i = 0; i < iter2; i++) {
            if (l[idx1].getSkill(i).get)
                if (l[idx1].getSkill(i).getMasteryLevel() == l[idx2].getSkill(i).getMasteryLevel() /*
            Kedua parent memiliki mastery level yang sama, maka skill
            yang di-inherit memiliki mastery level bernilai mastery level
            parent A + 1
            2. Kedua parent memiliki mastery level yang berbeda, maka skill
            yang di-inherit memiliki mastery level bernilai max(mastery
            level parent A, mastery level parent B) */
            s[i + iter1] = l[idx2].getSkill(i);
            if
        }
        // ambil skill berdasarkan prio (?)
        
    }
}

// void Player::skill(){

// }


