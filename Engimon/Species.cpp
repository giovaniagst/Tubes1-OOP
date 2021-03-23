// Species.cpp
#include "Species.hpp"
#include <iostream>
#include <string>

using namespace std;

Charizard::Charizard(string name, string* parentname, string* parentspecies, int numskill) :
Engimon(name, parentname, parentspecies, {"Fire", ""}, numskill) {
    skills[0] = SkillCharizard();
}

Charizard::Charizard(const Charizard& c) : Engimon(c) {
    // 
}

Charizard& Charizard::operator=(const Charizard& c) {
    Engimon::operator=(c);
    return *this;
}

void Charizard::interact() {
    cout << "[" << this->getName() << "]: 불타오르네" << endl;
}

Glaceon::Glaceon(string name, string* parentname, string* parentspecies, int numskill) : 
Engimon(name, parentname, parentspecies, {"Ice", ""}, numskill) {
    skills[0] = SkillGlaceon();
}

Glaceon::Glaceon(const Glaceon& g) : Engimon(g) {
    //
}

Glaceon& Glaceon::operator=(const Glaceon& g) {
    Engimon::operator=(g);
    return *this;
}

void Glaceon::interact() {
    cout << "[" << this->getName() << "]: Hai I'm Glaceon" << endl;
}

Onix::Onix(string name, string* parentname, string* parentspecies, int numskill) : 
Engimon(name, parentname, parentspecies, {"Ground", ""}, numskill) {
    skills[0] = SkillOnix();
}

Onix::Onix(const Onix& o) : Engimon(o) {
    //
}

Onix& Onix::operator=(const Onix& o) {
    Engimon::operator=(o);
    return *this;
}

void Onix::interact() {
    cout << "[" << this->getName() << "]: Hai I'm Onix" << endl;
}

Pikachu::Pikachu(string name, string* parentname, string* parentspecies, int numskill) :
Engimon(name, parentname, parentspecies, {"Electric", ""} , numskill) {
    skills[0] = SkillPikachu();
}

Pikachu::Pikachu(const Pikachu& p) : Engimon(p) {
    //
}

Pikachu& Pikachu::operator=(const Pikachu& p) {
    Engimon::operator=(p);
    return *this;
}

void Pikachu::interact() {
    cout << "[" << this->getName() << "]: pika pika pika pika" << endl;
}

Squirtle::Squirtle(string name, string* parentname, string* parentspecies, int numskill) :
Engimon(name, parentname, parentspecies, {"Water", ""} , numskill) {
    skills[0] = SkillSquirtle();
}

Squirtle::Squirtle(const Squirtle& s) : Engimon(s) {
    //
}

Squirtle& Squirtle::operator=(const Squirtle& s) {
    Engimon::operator=(s);
    return *this;
}

void Squirtle::interact() {
    cout << "[" << this->getName() << "]: splish splash" << endl;
}

Rotom::Rotom(string name, string* parentname, string* parentspecies, int numskill) :
Engimon(name, parentname, parentspecies, {"Fire", "Electric"} , numskill) {
    skills[0] = SkillRotom();
}

Rotom::Rotom(const Rotom& r) : Engimon(r) {
    //
}

Rotom& Rotom::operator=(const Rotom& r) {
    Engimon::operator=(r);
    return *this;
}

void Rotom::interact() {
    cout << "[" << this->getName() << "]: i AM GOD Of ThuNDeR" << endl;
}


Wooper::Wooper(string name, string* parentname, string* parentspecies, int numskill) :
Engimon(name, parentname, parentspecies, {"Water", "Ground"} , numskill) {
    skills[0] = SkillWooper();
}

Wooper::Wooper(const Wooper& w) : Engimon(w) {
    //
}

Wooper& Wooper::operator=(const Wooper& w) {
    Engimon::operator=(w);
    return *this;
}

void Wooper::interact() {
    cout << "[" << this->getName() << "]: woooPpPppSiiiE" << endl;
}

Cloyster::Cloyster(string name, string* parentname, string* parentspecies, int numskill) :
Engimon(name, parentname, parentspecies, {"Water", "Ice"} , numskill) {
    skills[0] = SkillCloyster();
}

Cloyster::Cloyster(const Cloyster& c) : Engimon(c) {
    //
}

Cloyster& Cloyster::operator=(const Cloyster& c) {
    Cloyster::operator=(c);
    return *this;
}

void Cloyster::interact() {
    cout << "[" << this->getName() << "]: bless me achoo" << endl;
}