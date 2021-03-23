#include "Player.hpp"
#include <iostream>


using namespace std;

Player::Player(){
    this->nama = "default";
    this->EngimonKepemilikan = new Engimon[100];
}

Player::Player(string nama){
    this->nama = nama;
    this->EngimonKepemilikan = new Engimon[100];
}

Player::~Player(){
    // delete EngimonKepemilikan;
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
Engimon* Player::getlistEngimon(){
    
}
void Player::battle(){

}
// void Player::listEngimon(){

// }
void Player::whatEngimon(){

}
void Player::changeEngimon(){

}
// void Player::doBreeding(Engimon x, Engimon y){

// }
void Player::skill(){

}
// void Player::battle(){

// }

