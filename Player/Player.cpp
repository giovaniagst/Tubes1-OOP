#include "Player.hpp"
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


Inventory<Engimon> Player::getlistEngimon(){
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
      this->engimonKepemilikan.push(e);
      this->jumlahEngimonKepemilikan++;
      cout << "sukses menambahkan " << e.getName() << "kedalam koleksi" << endl; 
  } else {
      cout << "Koleksi Engimon Penuh" << endl;
  }
};

void Player::printlistEngimon(){
    cout << "List Engimon yang dimiliki yaitu :" << endl;
    Inventory<Engimon> l = getlistEngimon();
    for (int i =0; i<jumlahEngimonKepemilikan;i++){
        cout << "----------------------------------------------- " << endl;
        cout << i+1 <<". " << l.getItem(i).getName() << ":"<< endl;
        cout <<"    Exp        : " <<  l.getItem(i).getCumulativeExperience()<< endl;
        cout <<"    level      : " <<  l.getItem(i).getLevel()<< endl;
        cout <<"    Elements   : " <<  l.getItem(i).getElements()<< endl;
        cout <<"    Parent     : " <<  l.getItem(i).getParentName()<< endl;
        cout <<"    Parent Spec: " <<  l.getItem(i).getParentSpecies()<< endl;
        cout << "----------------------------------------------- " << endl;
    }
}

void Player::printActiveEngimon(){
    cout << ((getActiveEngimon())).getName() << " aktif"<< endl;
}

void Player::changeActiveEngimon(int pos){
    Inventory<Engimon> l = getlistEngimon();
    ((this->activeEngimon)).setActive(false);
    l.getItem(pos).setActive(true);
    ((this->activeEngimon)) = l.getItem(pos);   
}

void Player::battle(Engimon lawan){
    cout << "battle telah dimulai "<< endl;
    float myElementAdvantage,enemyElementAdvantage;
    Engimon my = this->getActiveEngimon();
    string* myEl = my.getElements(); 
    string* enemyEl = lawan.getElements();
    
    myElementAdvantage = compareElementAd(myEl,enemyEl);
    enemyElementAdvantage = compareElementAd(myEl,enemyEl);
    int myPowerLevel, enemyPowerLevel;
    
    myPowerLevel = my.getLevel() * int(myElementAdvantage) + sumSkill(my);
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

int Player::sumSkill(Engimon me){
    int mysum = 0;
    for (int i =0; i<me.getNumSkill();i++){
        Skill mySkill = me.getSkill(i);
        mysum += mySkill.getBasePower() * mySkill.getMasteryLevel();
    }
    return mysum ;
}


float Player::compareElementAd(string* myEl,string* enemyEl){
    float elementAdvantage;
    if (myEl[1] != ""){
        if (enemyEl[1] != ""){
            elementAdvantage = imax(imax(compareElement(myEl[0],enemyEl[0]),compareElement(myEl[0],enemyEl[1]))
            ,imax(compareElement(myEl[1],enemyEl[0]),compareElement(myEl[1],enemyEl[1])));
        }else{
            elementAdvantage = imax(compareElement(myEl[0],enemyEl[0]),compareElement(myEl[1],enemyEl[0]));
        }
    }else{
        if (enemyEl[1] != ""){
            elementAdvantage = imax(compareElement(myEl[0],enemyEl[0]),compareElement(myEl[0],enemyEl[1]));
        }else{
            elementAdvantage = compareElement(myEl[0],enemyEl[0]);
        }
    }
    return elementAdvantage;
};

float Player::imax(int x, int y){ // dipakai di battle dan breeding
    return x > y ? x : y;
}

int Player::intmax(int x, int y){ // dipakai di breeding
    return x > y ? x : y;
}

string Player::smax(string x, string y){ // dipakai di breeding
    if (compareElement(x,y) > compareElement(y,x)) {
        return x;
    } else if (compareElement(x,y) < compareElement(y,x)) {
        return y;
    } else {
        return "0";
    }
}
float Player::compareElement(string x, string y){
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
    Inventory<Engimon> l = getlistEngimon();
    // cari Engimon induk
    int idx1 = -1;
    int idx2 = -1;
    for (int i = 0; i < jumlahEngimonKepemilikan; i++) {
        if (l.getItem(i).getName() == Engimon1 && l.getItem(i).getLevel() > 30) {
            idx1 = i;
        }
        if (l.getItem(i).getName() == Engimon2 && l.getItem(i).getLevel() > 30) {
            idx2 = i;
        }
    }
    if (idx1 == -1) {
        cout << Engimon1 << " tidak ada atau levelnya tidak cukup" << endl;
        return;
    }
    if (idx2 == -1) {
        cout << Engimon2 << " tidak ada atau levelnya tidak cukup" << endl;
        return;
    }
    // kedua engimon ditemukan dan memenuhi syarat
    l.getItem(idx1).setLevel(l.getItem(idx1).getLevel() - 30);
    l.getItem(idx2).setLevel(l.getItem(idx2).getLevel() - 30);
    cout << "Masukkan nama engimon anak: ";
    string namaanak;
    cin >> namaanak;
    string* parentname = new string[2];
    parentname[0] = l.getItem(idx1).getName();
    parentname[1] = l.getItem(idx2).getName();
    string* parentspec = new string[2];
    parentspec[0] = l.getItem(idx1).getSpecies();
    parentspec[1] = l.getItem(idx2).getSpecies();
    // pemberian spesies dan elemen
    string elemenanak = smax(l.getItem(idx1).getElements()[0], l.getItem(idx2).getElements()[0]);
    Engimon *e = new Engimon();
    if (l.getItem(idx1).getElements()[0] == l.getItem(idx2).getElements()[0] || elemenanak != "0") {
        // elemen parent sama atau elemen beda tapi beda adv, pilih yang adv lebih tinggi
        string spesiesanak;
        if (l.getItem(idx1).getElements()[0] == l.getItem(idx2).getElements()[0]) {
            spesiesanak = l.getItem(idx1).getSpecies();
        } else {
            for (int i = 0; i < 2; i++) {
                if (elemenanak == l.getItem(i).getElements()[0]) {
                    spesiesanak = l.getItem(i).getSpecies();
                }
            }
        }
        if (spesiesanak == "Charizard") {
            Charizard *anak = new Charizard(namaanak, parentname, parentspec, 1, 0, 0);
            getlistEngimon().push(*anak);
            *e = *anak;
        } else if (spesiesanak == "Glaceon") {
            Glaceon *anak = new Glaceon(namaanak, parentname, parentspec, 1, 0, 0);
            getlistEngimon().push(*anak);
            *e = *anak;
        } else if (spesiesanak == "Onix") {
            Onix *anak = new Onix(namaanak, parentname, parentspec, 1, 0, 0);
            getlistEngimon().push(*anak);
            *e = *anak;
        } else if (spesiesanak == "Pikachu") {
            Pikachu *anak = new Pikachu(namaanak, parentname, parentspec, 1, 0, 0);
            getlistEngimon().push(*anak);
            *e = *anak;
        } else if (spesiesanak == "Squirtle") {
            Glaceon *anak = new Glaceon(namaanak, parentname, parentspec, 1, 0, 0);
            getlistEngimon().push(*anak);
            *e = *anak;
        } else {
            cout << "Ini adalah sebuah exception yang bukan merupakan exception, spesiesanak" << endl;
        }
    } else { // elemen beda dan adv parent sama
        string elmtanak1 = l.getItem(idx1).getElements()[0];
        string elmtanak2 = l.getItem(idx2).getElements()[0];
        if ((elmtanak1 == "Fire" && elmtanak2 == "Electric") || (elmtanak1 == "Electric" && elmtanak2 == "Fire")) {
            Rotom* anak = new Rotom(namaanak, parentname, parentspec, 1, 0, 0);
            getlistEngimon().push(*anak);
            *e = *anak;
        } else if (elmtanak1 == "Water" && elmtanak2 == "Ground" || (elmtanak1 == "Ground" && elmtanak2 == "Water")) {
            Wooper* anak = new Wooper(namaanak, parentname, parentspec, 1, 0, 0);
            getlistEngimon().push(*anak);
            *e = *anak;
        } else if (elmtanak1 == "Water" && elmtanak2 == "Ice" || (elmtanak1 == "Ice" && elmtanak2 == "Water")) {
            Cloyster* anak = new Cloyster(namaanak, parentname, parentspec, 1, 0, 0);
            getlistEngimon().push(*anak);
            *e = *anak;
        } else {
            cout << "Ini adalah sebuah exception yang bukan merupakan exception, anakhybrid" << endl;
        }
    }

    // pemberian skill
    int countskill = 1;
    int iter1 = l.getItem(idx1).getNumSkill();
    int iter2 = l.getItem(idx2).getNumSkill();
    // salin skill ke suatu list, pilih dari yang bernama sama
    Skill* s = new Skill[iter1 + iter2];
    int counter = 0;
    // masukin dari parent 1
    for (int i = 0; i < iter1; i++) {
        if (!l.getItem(idx1).getSkill(i).getBawaan()){
            s[counter] = l.getItem(idx1).getSkill(i);
            counter++;
        }
    }
    // masukkin dari parent 2
    for (int i = 0; i < iter2; i++) {
        bool exist = false;
        int idxsama = 0;
        for (int j = 0; j < counter; j++) {
            if (s[j].getNamaSkill() == l.getItem(idx1).getSkill(i).getNamaSkill()) {
                idxsama = j; // idx skill yang sudah ada
                exist = true;
            }
        }
        if (exist) {
            if (s[idxsama].getMasteryLevel() == l.getItem(idx2).getSkill(i).getMasteryLevel()) {
                s[idxsama].setMasteryLevel(s[idxsama].getMasteryLevel()+1);
            } else {
                int temp = intmax(s[idxsama].getMasteryLevel(), l.getItem(idx2).getSkill(i).getMasteryLevel());
                s[idxsama].setMasteryLevel(temp);
            }
        } else {
            if (!l.getItem(idx1).getSkill(i).getBawaan()) {
                s[counter+i] = l.getItem(idx2).getSkill(i);
                counter++;
            }
        }
    }
    
    while (countskill < 4 && countskill < counter) {
    int max = s[0].getMasteryLevel();
    Skill temp = s[0];
    for (int i = 1; i < counter; i++) {
        if (max < s[i].getMasteryLevel()) {
            max = s[i].getMasteryLevel();
            temp = s[i];
        }
    }
    
    e->setSkill(temp, countskill); // pending
    e->setNumSkill(e->getNumSkill() + 1);
    countskill++;
}

// void Player::skill(){

// }

