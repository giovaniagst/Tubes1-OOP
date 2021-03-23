#include "Player.hpp"
#include <iostream>


using namespace std;

Player::Player(){
    this->nama = "default";
    this->engimonKepemilikan = new Engimon[100];
    this->jumlahEngimonKepemilikan = 0;
}

Player::Player(string nama){
    this->nama = nama;
    this->engimonKepemilikan = new Engimon[100];
    this->jumlahEngimonKepemilikan = 0;
}

Player::~Player(){
   
}

string Player::getName(){
    return this->nama;
}


array<Engimon,100>  Player::getlistEngimon(){
    return this->engimonKepemilikan;
}
int Player::getJumlahEngimon(){
    return this->jumlahEngimonKepemilikan;
}

Engimon* Player::getActiveEngimon(){
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
    cout << (*(getActiveEngimon())).getName() << " aktif"<< endl;
}

void Player::changeActiveEngimon(string engimon){
    Engimon* l = getlistEngimon();
    for (int i =0; i<jumlahEngimonKepemilikan;i++){ 
        if (l[i].getName() == engimon){
            (*(this->activeEngimon)).setActive(false);
            l[i].setActive(true);
            (*(this->activeEngimon)) = l[i];
        } else {
            cout << "kamu tidak mempunyai Engimon tersebut" << endl;
        }
    }
}
void Player::battle(){
    cout << "battle telah dimulai " << endl;
}

void Player::doBreeding(string Engimon1, string Engimon2){
    this->engimonKepemilikan.
}

void Player::skill(){

}


// void Player::battle(){

// }

