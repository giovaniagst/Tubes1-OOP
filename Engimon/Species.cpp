// Species.cpp
#include "Species.hpp"
#include <iostream>
#include <string>

using namespace std;

Charizard::Charizard(string name, string* parentname, string* parentspecies, int numskill) :
Fire(name, "Charizard", parentname, parentspecies, numskill) {
    skills[0] = SkillCharizard();
}

Charizard::Charizard(const Charizard& c) : Fire(c) {
    // 
}

Charizard& Charizard::operator=(const Charizard& c) {
    Fire::operator=(c);
    return *this;
}

void Charizard::interact() {
    cout << "[" << this->getName() << "]: 불타오르네" << endl;
}

Glaceon::Glaceon(string name, string* parentname, string* parentspecies, int numskill) : 
Ice(name, "Glaceon", parentname, parentspecies, numskill) {
    skills[0] = SkillGlaceon();
}

Glaceon::Glaceon(const Glaceon& g) : Ice(g) {
    //
}

Glaceon& Glaceon::operator=(const Glaceon& g) {
    Ice::operator=(g);
    return *this;
}

void Glaceon::interact() {
    cout << "[" << this->getName() << "]: Hai I'm Glaceon" << endl;
}

Onix::Onix(string name, string* parentname, string* parentspecies, int numskill) : 
Ground(name, "Onix", parentname, parentspecies, numskill) {
    skills[0] = SkillOnix();
}

Onix::Onix(const Onix& o) : Ground(o) {
    //
}

Onix& Onix::operator=(const Onix& o) {
    Ground::operator=(o);
    return *this;
}

void Onix::interact() {
    cout << "[" << this->getName() << "]: Hai I'm Onix" << endl;
}

Pikachu::Pikachu(string name, string* parentname, string* parentspecies, int numskill) :
Electric(name, "Pikachu", parentname, parentspecies, numskill) {
    skills[0] = SkillPikachu();
}

Pikachu::Pikachu(const Pikachu& p) : Electric(p) {
    //
}

Pikachu& Pikachu::operator=(const Pikachu& p) {
    Electric::operator=(p);
    return *this;
}

void Pikachu::interact() {
    cout << "[" << this->getName() << "]: pika pika pika pika" << endl;
}

Squirtle::Squirtle(string name, string* parentname, string* parentspecies, int numskill) :
Water(name, "Squirtle", parentname, parentspecies, numskill) {
    skills[0] = SkillSquirtle();
}

Squirtle::Squirtle(const Squirtle& s) : Water(s) {
    //
}

Squirtle& Squirtle::operator=(const Squirtle& s) {
    Water::operator=(s);
    return *this;
}

void Squirtle::interact() {
    cout << "[" << this->getName() << "]: splish splash" << endl;
}

Rotom::Rotom(string name, string* parentname, string* parentspecies, int numskill) :
FireElectric(name, "Rotom", parentname, parentspecies, numskill) {
    skills[0] = SkillRotom();
}

Rotom::Rotom(const Rotom& r) : FireElectric(r) {
    //
}

Rotom& Rotom::operator=(const Rotom& r) {
    FireElectric::operator=(r);
    return *this;
}

void Rotom::interact() {
    cout << "[" << this->getName() << "]: i AM GOD Of ThuNDeR" << endl;
}


Wooper::Wooper(string name, string* parentname, string* parentspecies, int numskill) :
WaterGround(name, "Wooper", parentname, parentspecies, numskill) {
    skills[0] = SkillWooper();
}

Wooper::Wooper(const Wooper& w) : WaterGround(w) {
    //
}

Wooper& Wooper::operator=(const Wooper& w) {
    WaterGround::operator=(w);
    return *this;
}

void Wooper::interact() {
    cout << "[" << this->getName() << "]: woooPpPppSiiiE" << endl;
}

Cloyster::Cloyster(string name, string* parentname, string* parentspecies, int numskill) :
WaterIce(name, "Cloyster", parentname, parentspecies, numskill) {
    skills[0] = SkillCloyster();
}

Cloyster::Cloyster(const Cloyster& c) : WaterIce(c) {
    //
}

Cloyster& Cloyster::operator=(const Cloyster& c) {
    WaterIce::operator=(c);
    return *this;
}

void Cloyster::interact() {
    cout << "[" << this->getName() << "]: bless me achoo" << endl;
}